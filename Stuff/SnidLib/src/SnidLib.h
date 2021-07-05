// SnidLib: When you concatenate instead of adding

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define SL_STRING_TOO_BIG 420

int SLSnid(int a, int b) {
  char buf1[11]; // Digit count of 32-bit integer limit + 1 for NUL character
  char buf2[11];
  snprintf(buf1, 11, "%d", a);
  snprintf(buf2, 11, "%d", b);
  
  if (strlen(buf1) + strlen(buf2) > 10) {
    return SL_STRING_TOO_BIG;
  }
  
  strcat(buf1, buf2);
  buf1[10] = '\0';
  return atoi(buf1);
}
