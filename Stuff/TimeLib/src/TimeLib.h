#include <time.h>

int TLGetSeconds() {
  long UTS = time(NULL);
  while (UTS >= 60)
    UTS -= 60;
  return (int)UTS;
}

int TLGetMinutes() {
  long UTS = time(NULL)/60;
  while (UTS >= 60)
    UTS -= 60;
  return (int)UTS;
}

int TLGetHours() {
  long UTS = time(NULL)/60/60;
  while (UTS >= 60)
    UTS -= 60;
  return (int)UTS;
}
