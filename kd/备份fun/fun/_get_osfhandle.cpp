#include "sub.h"
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // eax

  if ( FileHandle < uNumber )
  {
    v1 = dword_4CC6C0[FileHandle >> 5] + 8 * (FileHandle & 0x1F);
    if ( (*(_BYTE *)(v1 + 4) & 1) != 0 )
      return *(_DWORD *)v1;
  }
  dword_4CB270 = 0;
  dword_4CB26C = 9;
  return -1;
}