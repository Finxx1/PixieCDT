#include "CaseLib.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("%s|%s|%s", CLToUpperCase("loWer"), CLToLowerCase("UPpER"), CLToSpongeBobCase("Normal"));
  return 0;
}
