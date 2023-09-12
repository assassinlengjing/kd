#include "sub.h"
int __cdecl _commit(int FileHandle)
{
  void *osfhandle; // eax
  int result; // eax

  if ( FileHandle >= uNumber || (*(_BYTE *)(unk_4CC6C0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 1) == 0 )
    goto LABEL_8;
  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( FlushFileBuffers(osfhandle) )
    result = 0;
  else
    result = GetLastError();
  if ( result )
  {
    unk_4CB270 = result;
LABEL_8:
    unk_4CB26C = 9;
    return -1;
  }
  return result;
}