#include "sub.h"
int* _FF_MSGBANNER()
{
  int* result; // eax

  result = (_DWORD*)unk_4CB234;
  if ( unk_4CB234 == 1 || !unk_4CB234 && unk_4B8304 == 1 )
  {
    _NMSG_WRITE(0xFCu);
    if ( unk_4CB3C4 )
      //unk_4CB3C4();£¿£¿£¿
    return _NMSG_WRITE(0xFFu);
  }
  return result;
}