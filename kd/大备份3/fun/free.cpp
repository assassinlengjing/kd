//#include "sub.h"???
//void __cdecl free(void *Block)
//{
//  char *v1; // eax
//
//  if ( Block )
//  {
//    v1 = __sbh_find_block((int)Block);
//    if ( v1 )
//      __sbh_free_block((_DWORD*)v1, (unsigned int)Block);
//    else
//      HeapFree(hHeap, 0, Block);
//  }
//}