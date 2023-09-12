#include "sub.h"
int* _FF_MSGBANNER()
{
  int* result; // eax

  result = (_DWORD*)dword_4CB234;
  if ( dword_4CB234 == 1 || !dword_4CB234 && dword_4B8304 == 1 )
  {
    _NMSG_WRITE(0xFCu);
    if ( dword_4CB3C4 )
      //dword_4CB3C4();£¿£¿£¿
    return _NMSG_WRITE(0xFFu);
  }
  return result;
}