#include "LogLib.h"

int main(int argc, char* argv[]) {
  LLLogCustom(0, 0, 0, "Le flux-capacitor.");
  LLLogNote("The flux-capacitor is on.");
  LLLogWarn("The flux-capacitor cooling fan is non-operational.");
  LLLogError("The flux-capacitor is overheating and is about to freaking die.");
  LLLogFatal("The flux-capacitor overheated and freaking died.");
  return 0;
}
