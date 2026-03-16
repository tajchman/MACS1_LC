#ifndef _TIMER_H
#define _TIMER_H

#include <string.h>
#include <time.h>

typedef struct timer
{
  char * name;
  clock_t begin, end;
  double elapsed;
  int running;
} Timer;

void initTimer(Timer *T, const char *name);
void cleanTimer(Timer *T);

void startTimer(Timer *T);
void stopTimer(Timer *T);

#endif
