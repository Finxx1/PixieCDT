# LogLib

LogLib is a simple logging library.

# Usage

Just use a log function like `LLLogError()`.

# Example

```c
#include "LogLib.h"

int main(int argc, char* argv[]) {
  LLLogCustom(0, 0, 0, "Le flux-capacitor.");
  LLLogNote("The flux-capacitor is on.");
  LLLogWarn("The flux-capacitor cooling fan is non-operational.");
  LLLogError("The flux-capacitor is overheating and is about to freaking die.");
  LLLogFatal("The flux-capacitor overheated and freaking died.");
  return 0;
}
```

# Macros

```c
#define LLLog(...)
```

Just a wrapper around printf that also prints the time.

```c
#define LLLogFatal(...)
```

Prints the time and a fatal error.

```c
#define LLLogError(...)
```

Prints the time and an error.

```c
#define LLLogWarn(...)
```

Prints the time and a warning.

```c
#define LLLogNote(...)
```

Prints the time and a note.

```c
#define LLLogCustom(r, g, b, ...)
```

Prints the time and a custom message in the chosen color.

# Explanation

The macros defined are really just a bunch of ANSI escape sequences and formatted strings printed to the screen. The only thing that was kind of complicated was getting the time. I ended up making a function that behaves like an integer when it goes above 2.1 billion. Essentially, it wraps around. Applying this to the unix timestamp allows me to get the current second, minute, and hour in the UTC timezone.
