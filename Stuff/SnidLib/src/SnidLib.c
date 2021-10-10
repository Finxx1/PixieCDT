#include "SnidLib.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("Regular Snid: %s%d\n", "1 + 0 = ", SLSnid(1, 0));
  printf("Quick Snid: %s%d\n\n", "1 + 0 = ", SLQuickSnid(1, 0));
  printf("Regular Snid: %s%d\n", "6 + 8 = ", SLSnid(6, 8));
  printf("Quick Snid: %s%d\n\n", "6 + 8 = ", SLQuickSnid(6, 8));
  return 0;
}
