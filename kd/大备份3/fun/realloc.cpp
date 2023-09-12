//#include "sub.h" ???
//void *__cdecl realloc(void *Block, size_t Size)
//{
//  size_t v3; // esi
//  void *v4; // edi
//  char *v5; // eax
//  char *v6; // ebp
//  size_t v7; // eax
//  size_t v8; // eax
//
//  if ( !Block )
//    return malloc(Size);
//  v3 = Size;
//  if ( !Size )
//  {
//    free(Block);
//    return 0;
//  }
//  while ( 1 )
//  {
//    v4 = 0;
//    if ( v3 > 0xFFFFFFE0 )
//      goto LABEL_26;
//    v5 = __sbh_find_block((int)Block);
//    v6 = v5;
//    if ( !v5 )
//    {
//      if ( !v3 )
//        v3 = 1;
//      v3 = (v3 + 15) & 0xFFFFFFF0;
//      v4 = HeapReAlloc(hHeap, 0, Block, v3);
//      goto LABEL_25;
//    }
//    if ( v3 <= unk_4B8760 )
//    {
//      if ( __sbh_resize_block((_DWORD*)v5, (int)Block, v3) )
//        return Block;
//      v4 = __sbh_alloc_block(v3);
//      if ( v4 )
//        break;
//    }
//    if ( !v3 )
//      v3 = 1;
//    v3 = (v3 + 15) & 0xFFFFFFF0;
//    v4 = HeapAlloc(hHeap, 0, v3);
//    if ( !v4 )
//      goto LABEL_26;
//    v8 = *((_DWORD *)Block - 1) - 1;
//    if ( v8 >= v3 )
//      v8 = v3;
//    memcpy(v4, Block, v8);
//    __sbh_free_block((_DWORD*)v6, (unsigned int)Block);
//LABEL_25:
//    if ( v4 )
//      return v4;
//LABEL_26:
//    if ( !unk_4CB3CC )
//      return v4;
//    if ( !_callnewh(v3) )
//      return 0;
//  }
//  v7 = *((_DWORD *)Block - 1) - 1;
//  if ( v7 >= v3 )
//    v7 = v3;
//  memcpy(v4, Block, v7);
//  __sbh_free_block((_DWORD*)v6, (unsigned int)Block);
//  return v4;
//}