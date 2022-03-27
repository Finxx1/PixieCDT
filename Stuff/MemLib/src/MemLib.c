#include <stdio.h>
#include <stdlib.h>

#include "MemLib.h"

typedef struct {
  int asd; // 4 bytes
  long urmom; // 8 bytes
  // total of 12 bytes
} type;

int main(int argc, char* argv[]) {
  printf("%lu + %lu = %lu\n", sizeof(int), sizeof(long), sizeof(int) + sizeof(long));
  printf("padding = 4 bytes");
  
  type* type1 = new(type);
  printf("%lu\n", sizeof(*type1));
  
  type* type2;
  alloc(type2);
  printf("%lu\n", sizeof(*type2));
  return 0;
}
