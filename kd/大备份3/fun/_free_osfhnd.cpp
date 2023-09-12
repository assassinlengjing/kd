#include "sub.h"
int __cdecl _free_osfhnd(int a1)
{
  int v1; // eax

  if ( a1 >= uNumber
    || (v1 = 8 * (a1 & 0x1F) + unk_4CC6C0[a1 >> 5], (*(_BYTE *)(v1 + 4) & 1) == 0)
    || *(_DWORD *)v1 == -1 )
  {
    unk_4CB270 = 0;
    unk_4CB26C = 9;
    return -1;
  }
  else
  {
    if ( unk_4B8304 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, 0);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, 0);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, 0);
      }
    }
    *(_DWORD *)(unk_4CC6C0[a1 >> 5] + 8 * (a1 & 0x1F)) = -1;
    return 0;
  }
}