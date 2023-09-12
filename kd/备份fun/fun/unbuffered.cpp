#include "sub.h"
void streambuf::unbuffered(streambuf* thisx, int a2)
{
  *((_DWORD *)thisx + 2) = a2;
}