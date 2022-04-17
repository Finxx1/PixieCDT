// Made by Finxx 1/7/2022 in school while in math class.

#include <stdio.h>
#include <time.h>

// Utility function for implementing underflow
long underflow(long a, long b) {
  if (a < b)
    return a;
  while (a >= b)
    a -= b;
  return a;
}

// Because making variadic functions is a pain in the arse, I just use a macro whenever I can.
#define LLLog(...)      printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf(                          __VA_ARGS__);                    puts("")
#define LLLogFatal(...) printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf("\x1B[38;5;124mFatal: "   __VA_ARGS__); printf("\x1B[0m"); puts("")
#define LLLogError(...) printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf("\x1B[38;5;196mError: "   __VA_ARGS__); printf("\x1B[0m"); puts("")
#define LLLogWarn(...)  printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf("\x1B[38;5;220mWarning: " __VA_ARGS__); printf("\x1B[0m"); puts("")
#define LLLogNote(...)  printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf("\x1B[38;5;39mNote: "     __VA_ARGS__); printf("\x1B[0m"); puts("")

#define LLLogCustom(r, g, b, ...) printf("[%ld:%ld:%ld] ", underflow(time(NULL)/60/60, 24), underflow(time(NULL)/60, 60), underflow(time(NULL), 60)); printf("\x1B[38;2;%d;%d;%dm", r, g, b); printf(__VA_ARGS__ "\x1B[0m"); puts("")
