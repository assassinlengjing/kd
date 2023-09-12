#include "sub.h"
int  _NLG_Notify(int result, int a2, int a3)
{
  dword_4B8284[2] = *(_DWORD *)(a2 + 8);
  dword_4B8284[1] = result;
  dword_4B8284[3] = a2;
  return result;
}