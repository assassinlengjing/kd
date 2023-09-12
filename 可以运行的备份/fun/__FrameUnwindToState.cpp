#include "sub.h"
void __cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  EXCEPTION_POINTERS *v4; // ecx
  int i; // esi
  int v6; // eax

  for ( i = *(_DWORD *)(a1 + 8); i != a4; i = *(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * i) )
  {
    if ( i <= -1 || i >= *(_DWORD *)(a3 + 4) )
      sub_4A4022(v4, a1, a3, i);
    v6 = *(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * i + 4);
    if ( v6 )
      _CallSettingFrame(v6, a1, 259);
  }
  *(_DWORD *)(a1 + 8) = i;
}