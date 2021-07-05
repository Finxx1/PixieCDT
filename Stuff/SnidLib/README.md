# SnidLib

SnidLib is a simple library that implements the snid operator. The snid operator concatenates integers.

# Usage

To use SnidLib, you call the `SLSnid()` function. Here is how it works:

You give the first parameter the base number.
You give the second parameter the number you are adding on to the base number.

# Example

```c
#include "SnidLib.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%d|%d", 20 + 20, SLSnid(20, 20));
    return 0;
}
```

# Functions

```c
int SLSnid(int a, int b)
```

The function that performs the snid operation

`a`: The base number

`b`: The number you want to add to the end of base

# Macros

```c
#define SL_STRING_TOO_BIG 420
```

The value returned by `SLSnid` when the returned value is greater than the 32-bit integer limit.
