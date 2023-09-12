#include "sub.h"
int __cdecl _heap_init(int a1)
{
  hHeap = HeapCreate(a1 == 0, 0x1000u, 0);
  if ( !hHeap )
    return 0;
  if ( !__sbh_heap_init() )
  {
    HeapDestroy(hHeap);
    return 0;
  }
  return 1;
}