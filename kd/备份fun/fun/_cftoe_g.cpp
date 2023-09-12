#include "sub.h"
_BYTE *__cdecl _cftoe_g(double *a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *result; // eax

  byte_4CB24C = 1;
  result = _cftoe(a1, a2, a3, a4);
  byte_4CB24C = 0;
  return result;
}