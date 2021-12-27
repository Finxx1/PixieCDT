# SnidLib

SnidLib is a simple library that implements the snid operator. The snid operator concatenates integers.

# Usage

First create a SLString and initialize it using the SLStringInit function. Then, append stuff to the string using SLStringAppend or SLStringAppendInt. Finally, you can print the string using SLPrint.

# Example

```c
#include "StrLib.h"

int main(int argc, char* argv[]) {
  SLString str = SLStringInit();
  SLStringAppend(str, "ha ha ha!\n");
  SLStringAppend(str, "Lucky number: ");
  SLStringAppendInt(str, 12);
  SLPrint(str);
}
```

# Functions

```c
SLString SLStringInit()
```

The function that initializes a string.

```c
int SLStringAppend(SLString s1, char* s2)
```

The function that appends s2 to s1.

```c
int SLStringAppendInt(SLString s1, int s2)
```

The function that appends the integer s2 to s1.

```c
void SLPrint(SLString str)
```

A wrapper around the `puts` function.

# Typedefs

```c
typedef char* SLString
```

The SLString data-type. Yup, it is just a bunch of characters in a block of memory.
