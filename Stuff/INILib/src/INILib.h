#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ILGetIndex(char* INIData, char* Key, char* Group) {
  char* MData;
  int Offset;
  if (Group != NULL) {
    char* MGroup = calloc(strlen(Group) + 3, 1);
    strcpy(MGroup, "[");
    strcat(MGroup, Group);
    strcat(MGroup, "]");
    MData = strstr(INIData, MGroup);
    Offset = MData - INIData;
  } else {
    MData = INIData;
    Offset = 0;
  }
  char* MKey = calloc(strlen(Key) + 2, 1);
  strcpy(MKey, Key);
  strcat(MKey, "=");
  int Result = strstr(MData, MKey) - MData + strlen(MKey) + Offset;
  return Result;
}

int ILGetLength(char* INIData, char* Key, char* Group) {
  int Index = ILGetIndex(INIData, Key, Group);
  int Length = strstr(&INIData[Index], "\n") - &INIData[Index];
  return Length;
}
