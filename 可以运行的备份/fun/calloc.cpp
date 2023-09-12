//#include "sub.h"???
//void *__cdecl calloc(size_t Count, size_t Size)
//{
//  unsigned int v2; // esi
//  size_t v3; // ebx
//  void *v4; // edi
//  _DWORD *v5; // eax
//
//  v2 = Size * Count;
//  v3 = Size * Count;
//  if ( Size * Count <= 0xFFFFFFE0 )
//  {
//    if ( !v2 )
//      v2 = 1;
//    v2 = (v2 + 15) & 0xFFFFFFF0;
//  }
//  do
//  {
//    v4 = 0;
//    if ( v2 <= 0xFFFFFFE0 )
//    {
//      if ( v3 <= dword_4B8760 )
//      {
//        v5 = __sbh_alloc_block(v3);
//        v4 = v5;
//        if ( v5 )
//        {
//          memset(v5, 0, v3);
//          return v4;
//        }
//      }
//      v4 = HeapAlloc((HANDLE)hHeap, 8u, v2);
//      if ( v4 )
//        return v4;
//    }
//    if ( !dword_4CB3CC )
//      return v4;
//  }
//  while ( _callnewh(v2) );
//  return 0;
//}