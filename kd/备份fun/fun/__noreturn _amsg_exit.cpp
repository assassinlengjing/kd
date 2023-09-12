#include "sub.h"
void __cdecl  _amsg_exit(DWORD NumberOfBytesWritten)
{
  if ( dword_4CB234 == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(NumberOfBytesWritten);
  off_4B8300(255);
}