// Example file

#include <stdio.h>
#include "ArgLib.h"

void bruh(int i) {
  printf("wait what lol %d", i-1);
}

void test(int i) {
  printf("nice %d", i);
}

int main(int argc, char* argv[]) {
  ALParseArgs(argc, argv, 2, "-b", test, "lol", bruh);  
  return 0;
}
