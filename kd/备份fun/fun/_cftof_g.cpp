#include "sub.h"
char *__cdecl _cftof_g(int a1, char *Str, size_t Size)
{
  char *result; // eax

  byte_4CB24C = 1;
  result = _cftof(a1, Str, Size);
  byte_4CB24C = 0;
  return result;
}