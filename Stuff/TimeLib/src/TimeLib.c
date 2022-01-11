#include <stdio.h>

#include "TimeLib.h"

int main(int argc, char* argv[]) {
  printf("Time: %d:%d:%d\n", TLGetHours(), TLGetMinutes(), TLGetSeconds());
  return 0;
}
