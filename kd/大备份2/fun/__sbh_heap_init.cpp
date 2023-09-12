#include "sub.h"
int __sbh_heap_init()
{
  int result; // eax

  result = (int)HeapAlloc((HANDLE)hHeap, 0, 0x140u);
  lpMem = (LPVOID)result;
  if ( result )
  {
    dword_4CC6B0 = 0;
    dword_4CC6B4 = 0;
    dword_4CC6AC = result;
    dword_4CC6A4 = 16;
    return 1;
  }
  return result;
}