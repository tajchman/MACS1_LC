#ifndef __MATMUL_H
#define __MATMUL_H

#include "matrix.h"

void setBlock(size_t b);

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C);

#endif
