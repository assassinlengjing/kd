#include "sub.h"
int __cdecl write_char(int a1, myFILE *File, int a3)
{
  int v4; // eax
  bool v5; // zf
  int result; // eax

  if ( --File->_cnt < 0 )
  {
    v4 = _flsbuf(a1, File);
  }
  else
  {
    *File->_ptr++ = a1;
    v4 = (unsigned __int8)a1;
  }
  v5 = v4 == -1;
  result = a3;
  if ( v5 )
    *(_DWORD *)a3 = -1;
  else
    ++*(_DWORD *)a3;
  return result;
}