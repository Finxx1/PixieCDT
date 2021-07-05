#include "StrLib.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("%s|%s|%s", SLToUpperCase("loWer"), SLToLowerCase("UPpER"), SLToSpongeBobCase("Normal"));
  return 0;
}
