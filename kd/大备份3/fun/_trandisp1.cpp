#include "sub.h"
int  _trandisp1(int a1, __int16 a2, int a3, __int16 a4, double _ST7)
{
  __int16 v5; // bx

  if ( *(_BYTE *)(a1 + 14) == 5 )
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a3 - 164)) & 0xFC | 2;
    LOBYTE(v5) = 63;
  }
  else
  {
    v5 = 4927;
  }
  *(_WORD *)(a3 - 162) = v5;
  _EBX = (char)&unk_4B834D;
  __asm { fxam }
  *(_DWORD *)(a3 - 148) = a1;
  *(_WORD *)(a3 - 160) = a4;
  *(_BYTE *)(a3 - 144) = 0;
  LOBYTE(a2) = __ROL1__((char)(2 * *(_BYTE *)(a3 - 159)) >> 1, 1);
  _AL = a2 & 0xF;
  __asm { xlat }
  return (*(int ( **)(int))(_AL + a1 + 16))(a2 & 0x404);
}