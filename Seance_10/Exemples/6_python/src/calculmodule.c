
#include <Python.h>
#include <numpy/arrayobject.h>
#include <stdlib.h>
#include <stdio.h>

static PyObject* init_C(PyObject* NPY_UNUSED(self), PyObject* args)
{
  PyArrayObject* U;

  double U_start, U_end;

  if(!PyArg_ParseTuple(args, "Odd", &U, &U_start, &U_end))
    return NULL;
  
  int        ndim     = PyArray_NDIM(U);
  npy_intp*  dims     = PyArray_DIMS(U);
  char*      data     = PyArray_DATA(U);
  
  double *u = (double *) data;
  size_t n = dims[0];

  u[0] = U_start;
  for (size_t i=1; i<n-1; i++)
    u[i] =  0.0;
  u[n-1] = U_end;

  return Py_None;
}

static PyObject* iteration_C(PyObject* NPY_UNUSED(self), PyObject* args)
{
  PyArrayObject* V, * U;
  double L;

  if(!PyArg_ParseTuple(args, "OOd", &U, &V, &L))
    return NULL;

  int        ndimU     = PyArray_NDIM(U);
  int        ndimV     = PyArray_NDIM(V);
  if (ndimU != 1 || ndimV != 1) {
    PyErr_SetString(PyExc_MemoryError, "Erreur : U et/ou V ne sont pas des vecteurs");
    return (PyObject *) NULL;
  }

  npy_intp*  dimsU     = PyArray_DIMS(U);
  npy_intp*  dimsV     = PyArray_DIMS(V);

  double *u = (double *) PyArray_DATA(U);
  double *v = (double *) PyArray_DATA(V);
  
  size_t nU = dimsU[0];
  size_t nV = dimsU[0];
  if (nU != nV) {
    PyErr_SetString(PyExc_MemoryError, "Erreur U et V ne sont pas de la même longueur");
    return (PyObject *) NULL;
  }
  size_t n = nU;
  for (size_t i=1; i<n-1; i++)
    v[i] =  L * (u[i+1] - 2*u[i] + u[i-1]) + u[i];

  return Py_None;
}

static PyMethodDef calcul_methods[] = {
    {"init", init_C, METH_VARARGS, "..."},
    {"iteration",  iteration_C, METH_VARARGS, "iteration en temps"},
    {NULL, NULL, 0, NULL}        /* Sentinelle */
};

static struct PyModuleDef calcul_module = {
    .m_methods = calcul_methods,
};

PyMODINIT_FUNC
PyInit_calcul(void)
{
    return PyModuleDef_Init(&calcul_module);
}
