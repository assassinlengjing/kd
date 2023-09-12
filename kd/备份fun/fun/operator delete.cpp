#include "sub.h"
void __cdecl operator delete(void *Block)
{
  free(Block);
}