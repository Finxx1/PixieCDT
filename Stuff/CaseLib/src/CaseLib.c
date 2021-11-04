#include "CaseLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Invalid arg count!");
    return -2;
  }
  char* UpperSample = calloc(strlen(argv[1]), 1);
  char* LowerSample = calloc(strlen(argv[1]), 1);
  char* RandomSample = calloc(strlen(argv[1]), 1);
  if (!UpperSample || !LowerSample || !RandomSample)
    return -1;
  strcpy(UpperSample, argv[1]);
  strcpy(LowerSample, argv[1]);
  strcpy(RandomSample, argv[1]);
  CLToUpperCase(UpperSample);
  CLToLowerCase(LowerSample);
  CLToSpongeBobCase(RandomSample);
  printf("Upper:%s|Lower:%s|Spongebob:%s\n", UpperSample, LowerSample, RandomSample);
  free(UpperSample);
  free(LowerSample);
  free(RandomSample);
  return 0;
}
