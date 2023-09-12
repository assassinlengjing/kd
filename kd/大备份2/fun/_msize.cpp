//#include "sub.h"???
//size_t __cdecl _msize(void *Block)
//{
//  if ( __sbh_find_block((int)Block) )
//    return *((_DWORD *)Block - 1) - 9;
//  else
//    return HeapSize(hHeap, 0, Block);
//}