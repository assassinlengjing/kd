#include "sub.h"
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle < uNumber )
    return *(_BYTE *)(unk_4CC6C0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 0x40;
  else
    return 0;
}