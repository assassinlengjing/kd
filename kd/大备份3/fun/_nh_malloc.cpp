#include "sub.h"
_DWORD *__cdecl _nh_malloc(size_t Size, int a2)
{
  _DWORD *result; // eax

  if ( Size > 0xFFFFFFE0 )
    return 0;
  while ( 1 )
  {
    result = (_DWORD*)_heap_alloc(Size);
    if ( result || !a2 )
      break;
    if ( !_callnewh(Size) )
      return 0;
  }
  return result;
}