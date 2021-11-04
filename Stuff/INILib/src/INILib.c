#include "INILib.h"

int main(int argc, char* argv[]) {
  char INI[42] = "[Settings]\n\nResolution=1280x720\nFPS=25";
  int Index = ILGetIndex(INI, "Resolution", "Settings");
  int Length = ILGetLength(INI, "Resolution", "Settings");
  
  char* Result = calloc(Length + 1, 1);
  
  strncpy(Result, &INI[Index], Length);

  printf("%s", Result);
  
  return 0;
}
