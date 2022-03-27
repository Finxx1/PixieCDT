#include <stdlib.h>

#define new(type)  malloc(sizeof(type))
#define alloc(var) var = malloc(sizeof(*var))
