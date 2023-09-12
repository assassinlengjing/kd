#include "sub.h"
_DWORD *__cdecl _dosmaperr(unsigned int a1)
{
  int v1; // edx
  _DWORD *result; // eax

  v1 = 0;
  dword_4CB270 = a1;
  result = (_DWORD*)&unk_4B8DA0;
  do
  {
    if ( a1 == *result )
    {
      result = (_DWORD *)dword_4B8DA4[2 * v1];
      dword_4CB26C = (int)result;
      return result;
    }
    result += 2;
    ++v1;
  }
  while ( (int)result < (int)&unk_4B8F08 );
  if ( a1 < 0x13 || a1 > 0x24 )
  {
    if ( a1 < 0xBC || (dword_4CB26C = 8, a1 > 0xCA) )
      dword_4CB26C = 22;
  }
  else
  {
    dword_4CB26C = 13;
  }
  return result;
}