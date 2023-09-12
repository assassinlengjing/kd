#include "sub.h"
int __cdecl _lseek(int FileHandle, int Offset, int Origin)
{
  int v3; // esi
  void *osfhandle; // eax
  int v5; // ebx
  unsigned int LastError; // eax

  if ( FileHandle < uNumber
    && (v3 = 8 * (FileHandle & 0x1F), (*(_BYTE *)(dword_4CC6C0[FileHandle >> 5] + v3 + 4) & 1) != 0) )
  {
    osfhandle = (void *)_get_osfhandle(FileHandle);
    if ( osfhandle == (void *)-1 )
    {
      dword_4CB26C = 9;
    }
    else
    {
      v5 = SetFilePointer(osfhandle, Offset, 0, Origin);
      if ( v5 == -1 )
        LastError = GetLastError();
      else
        LastError = 0;
      if ( !LastError )
      {
        *(_BYTE *)(dword_4CC6C0[FileHandle >> 5] + v3 + 4) &= ~2u;
        return v5;
      }
      _dosmaperr(LastError);
    }
  }
  else
  {
    dword_4CB270 = 0;
    dword_4CB26C = 9;
  }
  return -1;
}