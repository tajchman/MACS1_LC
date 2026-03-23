#include "timer.h"
#include <stdlib.h>

void initTimer(Timer *T, const char *s)
{
  T->name = (char *) malloc(sizeof(char) * (strlen(s) + 1));
  strcpy(T->name, s);
  T->elapsed = 0.0;
  T->running = 0;
}

void cleanTimer(Timer *T)
{
  free(T->name);
  T->name = NULL;
}

void startTimer(Timer *T)
{
  if (T->running) return;
  gettimeofday(&(T->begin), NULL);
  T->running = 1;
}

void stopTimer(Timer *T)
{
  if (!T->running) return;
  gettimeofday(&(T->end), NULL);
  T->running = 0;
  T->elapsed += (double)(T->end.tv_sec - T->begin.tv_sec) + 1e-6 * (T->end.tv_usec - T->begin.tv_usec);
}


