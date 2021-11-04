# INILib

INILib is a small INI parser library.
# Example
```c
#include "INILib.h"

int main() {
  char INI[42] = "[Settings]\n\nResolution=1280x720\nFPS=25";
  int Index = ILGetIndex(INI, "Resolution", "Settings");
  int Length = ILGetLength(INI, "Resolution", "Settings");

  char* Result = calloc(Length + 1, 1);

  strncpy(Result, &INI[Index], Length);

  printf("%s", Result);

  return 0;
}
```

# Functions

```c
int ILGetIndex(char* INIData, char* Key, char* Group)
```

Tracks down `Key` in `INIData` after skipping to `Group` and returns the index.


```c
int ILGetLength(char* INIData, char* Key, char* Group)
```

Tracks down `Key` in `INIData` after skipping to `Group` and returns the distance between the index and the next `\n` character.
