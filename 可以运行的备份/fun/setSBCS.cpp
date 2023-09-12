#include "sub.h"
int setSBCS()
{
  int result; // eax

  memset(&unk_4CB580, 0, 0x100u);
  *((_BYTE *)&unk_4CB580 + 256) = 0;
  result = 0;
  dword_4CB458 = 0;
  dword_4CB46C = 0;
  Locale = 0;
  dword_4CB460[0] = 0;
  dword_4CB460[1] = 0;
  dword_4CB460[2] = 0;
  return result;
}