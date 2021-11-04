// CaseLib.h a string manipulation library, not to be confused with an overall string library

#include <string.h> // Strlen
#include <stdlib.h> // Memory management
#include <time.h>   // Seeding srand()

void CLToUpperCase(char* string) {
  int stringlength = strlen(string);
  for (int i = 0; i < stringlength; i++) {
    if (string[i] >= 'a' && string[i] <= 'z' ) {
      string[i] = string[i] - 32;
    } else {
      string[i] = string[i];
    }
  }
}

void CLToLowerCase(char* string) {
  int stringlength = strlen(string);
  for (int i = 0; i < stringlength; i++) {
    if (string[i] >= 'A' && string[i] <= 'Z' ) {
      string[i] = string[i] + 32;
    } else {
      string[i] = string[i];
    }
  }
}

void CLToSpongeBobCase(char* string) {
  srand(time(NULL));
  int stringlength = strlen(string);
  for (int i = 0; i < stringlength; i++) {
    if (rand() % 2) {
      if(string[i] >= 'A' && string[i] <= 'Z') {
        string[i] += 32;
      }
    } else {
      if(string[i] >= 'a' && string[i] <= 'z') {
        string[i] -= 32;
      }
    }
  }
}
