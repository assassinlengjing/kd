#include "sub.h"
void  delbuf(ios *thisx, int a2)
{
  *((_DWORD *)thisx + 7) = a2;
}