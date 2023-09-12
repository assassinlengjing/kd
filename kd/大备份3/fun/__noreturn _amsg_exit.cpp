#include "sub.h"
void __cdecl  _amsg_exit(DWORD NumberOfBytesWritten)
{
  if ( unk_4CB234 == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(NumberOfBytesWritten);
  unk_4B8300(255);
}