#include "sub.h"
char *__sbh_alloc_new_region()
{
  int v0; // eax
  void *v1; // eax
  char *v2; // esi
  LPVOID v3; // eax
  LPVOID v4; // eax

  v0 = dword_4CC6B4;
  if ( dword_4CC6B4 == dword_4CC6A4 )
  {
    v1 = HeapReAlloc((HANDLE)hHeap, 0, (LPVOID)lpMem, 4 * (5 * dword_4CC6A4 + 80));
    if ( !v1 )
      return 0;
    dword_4CC6A4 += 16;
    lpMem = (LPVOID)v1;
    v0 = dword_4CC6B4;
  }
  v2 = (char *)lpMem + 20 * v0;
  v3 = HeapAlloc((HANDLE)hHeap, 8u, 0x41C4u);
  *((_DWORD *)v2 + 4) = (_DWORD)v3;
  if ( !v3 )
    return 0;
  v4 = VirtualAlloc(0, 0x100000u, 0x2000u, 4u);
  *((_DWORD *)v2 + 3) = (_DWORD)v4;
  if ( !v4 )
  {
    HeapFree((HANDLE)hHeap, 0, *((LPVOID *)v2 + 4));
    return 0;
  }
  *((_DWORD *)v2 + 2) = -1;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  ++dword_4CC6B4;
  **((_DWORD **)v2 + 4) = -1;
  return v2;
}