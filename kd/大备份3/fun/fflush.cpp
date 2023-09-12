#include "sub.h"
int __cdecl fflush(myFILE *Stream)
{
  if ( !Stream )
    return flsall(0);
  if ( _flush((_DWORD*)Stream) )
    return -1;
  if ( (Stream->_flag & 0x4000) != 0 )
    return -(_commit(Stream->_file) != 0);
  return 0;
}