#include "sub.h"
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  return sub_440A5D((_DWORD)lpThreadParameter);
}