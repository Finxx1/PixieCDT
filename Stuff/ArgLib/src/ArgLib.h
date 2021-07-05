// ArgLib - Single-header library for parsing arguments passed to the program from the cli

#include <string.h> // For strcmp; No need to check if it is already included, the header itself does this check :D
#include <stdarg.h> // Do I even need to say why I have this here?

#define AL_ZERO_ARGS 2763 // Yes, a BFDI reference.
#define AL_ARG_NF    1227 // Hmm, what is this?
#define AL_SUCCESS   1
#define AL_FAIL      0    // IDK if I will use this, but why not put it here?

typedef void (*argf_t)(int); // Function pointer typedef I think, might be something else though.

// ARGT: the string to check for; ARGF: the function to run if a match is found
int ALParseArg(int argc, char** argv, const char* argt, void (*argf)(int)) {
  if (argc == 1) {
    return AL_ZERO_ARGS;
  }
  
  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], argt)) {
      (argf)(i);
      return AL_SUCCESS;
    }
  }
  return AL_ARG_NF;
}

int ALParseArgs(int argc, char** argv, int chkc, ...) {
  va_list args;
  va_start(args, chkc);
  
  for (int i = 0; i < chkc; i++) {
    ALParseArg(argc, argv, va_arg(args, const char*), va_arg(args, argf_t));
  }
  
  va_end(args);
  
  return AL_SUCCESS;
}
