#include "StrLib.h"

int main(int argc, char* argv[]) {
  SLString str = SLStringInit();
  SLStringAppend(str, "ha ha ha!\n");
  SLStringAppend(str, "Lucky number: ");
  SLStringAppendInt(str, 12);
  SLPrint(str);
  return 0;
}
