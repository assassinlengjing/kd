#include "sub.h"
int __cdecl fclose(myFILE *Stream)
{
  int v1; // edi
  int flag; // eax
  int result; // eax

  v1 = -1;
  flag = Stream->_flag;
  if ( (flag & 0x40) != 0 )
  {
    result = -1;
  }
  else
  {
    if ( (flag & 0x83) != 0 )
    {
      v1 = _flush((int*)Stream);
      _freebuf((int)Stream);
      if ( _close(Stream->_file) >= 0 )
      {
        if ( Stream->_tmpfname )
        {
          free((void*)Stream->_tmpfname);
          Stream->_tmpfname = 0;
        }
      }
      else
      {
        v1 = -1;
      }
    }
    result = v1;
  }
  Stream->_flag = 0;
  return result;
}