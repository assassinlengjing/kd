#include "sub.h"
int __cdecl flsall(int a1)
{
  signed int v1; // esi
  int v2; // ebx
  int i; // edi
  myFILE *v4; // eax
  int flag; // ecx
  int result; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0; v1 < (int)Count; ++v1 )
  {
    v4 = *(myFILE **)(unk_4CB688 + 4 * v1);
    if ( v4 )
    {
      flag = v4->_flag;
      if ( (flag & 0x83) != 0 )
      {
        if ( a1 == 1 )
        {
          if ( fflush(v4) != -1 )
            ++v2;
        }
        else if ( !a1 && (flag & 2) != 0 && fflush(*(myFILE **)(unk_4CB688 + 4 * v1)) == -1 )
        {
          i = -1;
        }
      }
    }
  }
  result = v2;
  if ( a1 != 1 )
    return i;
  return result;
}