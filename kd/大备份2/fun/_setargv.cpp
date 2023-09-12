#include "sub.h"
int _setargv()
{
  CHAR *v0; // edi
  char *v1; // esi
  int result; // eax
  int v3; // [esp+Ch] [ebp-8h] BYREF
  int v4; // [esp+10h] [ebp-4h] BYREF

  if ( !dword_4CC7C8 )
    __initmbctable();
  GetModuleFileNameA(0, (LPSTR)Filename, 0x104u);
  dword_4CB2A4 = (int)Filename;
  v0 = (char*)Filename;
  if ( *(_BYTE *)dword_4CC7D4 )
    v0 = (CHAR *)dword_4CC7D4;
  parse_cmdline((unsigned char*)v0, 0, 0, &v4, &v3);
  v1 = (char *)malloc(v3 + 4 * v4);
  if ( !v1 )
    _amsg_exit(8u);
  parse_cmdline((unsigned char*)v0, (unsigned char**)v1, (unsigned char*)&v1[4 * v4], &v4, &v3);
  result = v4 - 1;
  dword_4CB28C = (int)v1;
  dword_4CB288 = v4 - 1;
  return result;
}