#include "timer.h"
#include <stdlib.h>

void initTimer(Timer *T, const char *s)
{
  T->name = (char *) malloc(sizeof(char) * (strlen(s) + 1));
  strcpy(T->name, s);
  T->begin = 0L;
  T->end = 0L;
  T->elapsed = 0.0;
  T->running = 0;
}

void cleanTimer(Timer *T)
{
  free(T->name);
}

void startTimer(Timer *T)
{
  if (T->running) return;
  T->begin = clock();
  T->running = 1;
}

void stopTimer(Timer *T)
{
  if (!T->running) return;
  T->end = clock();
  T->running = 0;
  T->elapsed += ((double)(T->end - T->begin))/CLOCKS_PER_SEC;
}


