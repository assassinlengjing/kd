#include "sub.h"
int __cdecl _fcloseall()
{
  int v0; // edi
  int i; // esi
  int v2; // eax

  v0 = 0;
  for ( i = 3; i < (int)Count; ++i )
  {
    v2 = *(_DWORD *)(dword_4CB688 + 4 * i);
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 12) & 0x83) != 0 && fclose(*(myFILE **)(dword_4CB688 + 4 * i)) != -1 )
        ++v0;
      if ( i >= 20 )
      {
        free(*(void **)(dword_4CB688 + 4 * i));
        *(_DWORD *)(dword_4CB688 + 4 * i) = 0;
      }
    }
  }
  return v0;
}