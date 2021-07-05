// CaseLib.h a string manipulation library, not to be confused with an overall string library

#include <string.h> // Strlen
#include <stdlib.h> // Memory management
#include <time.h>   // Seeding srand()

char* CLToUpperCase(const char* string) {
  int stringlength = strlen(string);
  char* r = calloc(stringlength + 1, 1);
  for (int i = 0; i < stringlength; i++) {
    if (string[i] >= 'a' && string[i] <= 'z' ) {
      r[i] = string[i] - 32;
    } else {
      r[i] = string[i];
    }
  }
  return r;
}

char* CLToLowerCase(const char* string) {
  int stringlength = strlen(string);
  char* r = calloc(stringlength + 1, 1);
  for (int i = 0; i < stringlength; i++) {
    if (string[i] >= 'A' && string[i] <= 'Z' ) {
      r[i] = string[i] + 32;
    } else {
      r[i] = string[i];
    }
  }
  return r;
}

char* CLToSpongeBobCase(const char* string) {
  srand(time(NULL));
  int stringlength = strlen(string);
  char* r = calloc(stringlength + 1, 1);
  for (int i = 0; i < stringlength; i++) {
    if (rand() % 2) {
      r[i] = SLToLowerCase(string)[i];
    } else {
      r[i] = SLToUpperCase(string)[i];
    }
  }
  return r;
}
