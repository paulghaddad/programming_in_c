#include <stdio.h>

struct time
{
  int hours;
  int minutes;
  int seconds;
};

int main(void)
{
  struct time elapsedTime(struct time time1, struct time time2);

  struct time  t1 = { 3, 45, 15 }, t2 = { 9, 44,  3 },
               t3 = {22, 50, 59 }, t4 = { 7, 30,  0 };

  struct time duration;

  duration = elapsedTime(t1, t2);
  printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "
    "is %.2i:%.2i:%.2i\n",
    t1.hours, t1.minutes, t1.seconds, t2.hours, t2.minutes,
    t2.seconds, duration.hours, duration.minutes, duration.seconds);


  duration = elapsedTime(t2, t1);
  printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "
    "is %.2i:%.2i:%.2i\n",
    t1.hours, t1.minutes, t1.seconds, t2.hours, t2.minutes,
    t2.seconds, duration.hours, duration.minutes, duration.seconds);

  duration = elapsedTime(t3, t4);
  printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "
    "is %.2i:%.2i:%.2i\n",
    t1.hours, t1.minutes, t1.seconds, t2.hours, t2.minutes,
    t2.seconds, duration.hours, duration.minutes, duration.seconds);

  return 0;
}


struct time elapsedTime(struct time time1, struct time time2)
{
  struct time duration = { 0, 0, 0 };

  // elapsed seconds
  if ( time2.seconds > time1.seconds )
    duration.seconds = time2.seconds - time1.seconds;
  else
  {
    duration.seconds = time2.seconds - time1.seconds + 60;
    --duration.minutes;
  }

  // elapsed minutes

  if ( time2.minutes > time1.minutes )
    duration.minutes += time2.minutes - time1.minutes;
  else
  {
    duration.minutes += time2.minutes - time1.minutes + 60;
    --duration.hours;
  }

  // elapsed hours

  if ( time2.hours > time1.hours )
    duration.hours += time2.hours - time1.hours;
  else
    duration.hours += time2.hours - time1.hours + 24;

  return duration;
}
