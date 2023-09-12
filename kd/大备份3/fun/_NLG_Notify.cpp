#include "sub.h"
int  _NLG_Notify(int result, int a2, int a3)
{
  unk_4B8284[2] = *(_DWORD *)(a2 + 8);
  unk_4B8284[1] = result;
  unk_4B8284[3] = a2;
  return result;
}