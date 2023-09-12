#include "sub.h"
int *__cdecl xcptlookup(int a1)
{
  int *result; // eax

  result = &unk_4B8638;
  if ( unk_4B8638 != a1 )
  {
    do
      result += 3;
    while ( (unsigned int)result < 12 * (_DWORD)unk_4B86B8 + 4949560 && *result != a1 );
  }
  if ( (unsigned int)result >= 12 * (_DWORD)unk_4B86B8 + 4949560 || *result != a1 )
    return 0;
  return result;
}