#include "sub.h"
_DWORD *__cdecl _heap_alloc(unsigned int a1)
{
  int v1; // esi
  _DWORD *result; // eax

  v1 = a1;
  if ( a1 > dword_4B8760 || (result = __sbh_alloc_block(a1)) == 0 )
  {
    if ( !a1 )
      v1 = 1;
    return (_DWORD*)HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
  }
  return result;
}