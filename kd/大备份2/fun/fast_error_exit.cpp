#include "sub.h"
void __cdecl  fast_error_exit(DWORD NumberOfBytesWritten)
{
  if ( dword_4CB234 == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(NumberOfBytesWritten);
  ExitProcess(0xFFu);
}