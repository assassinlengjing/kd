#include "sub.h"
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_4CB40C;
  v1 = malloc(0x1000u);
  a1[2] = (int)v1;
  if ( v1 )
  {
    a1[3] |= 8u;
    a1[6] = 4096;
  }
  else
  {
    a1[3] |= 4u;
    a1[2] = (int)a1 + 5;
    a1[6] = 2;
  }
  result = a1[2];
  a1[1] = 0;
  *a1 = result;
  return result;
}