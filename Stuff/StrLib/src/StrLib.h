#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* SLString; // Trick the normies into thinking that SLString is a cool new data type.

SLString SLStringInit() { // Malloc memory for the normies using a cool wrapper function
  return (SLString)calloc(1, 1);
}

int SLStringAppend(SLString s1, char* s2) { // In regular C, adding to a string is a massive pain, so this is epic
  s1 = (SLString)realloc(s1, strlen(s1) + strlen(s2) + 1);
  strcat(s1, s2);
  if (!s1)
    return 0;
  return 1;
}

int SLStringAppendInt(SLString s1, int s2) { // Essentially an itoa implementation but it appends instead of overwriting.
  char a[12] = "";
  sprintf(a, "%d", s2);
  s1 = (SLString)realloc(s1, strlen(s1) + strlen(a) + 1);
  strcat(s1, a);
  if (!s1)
    return 0;
  return 1;
}

void SLPrint(SLString str) {
  puts(str);
}
