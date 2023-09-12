#include "sub.h"
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax

  result = a1;
  unk_4CB410 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      unk_4CB410 = 1;
      return GetOEMCP();
    case 0xFFFFFFFD:
      unk_4CB410 = 1;
      return GetACP();
    case 0xFFFFFFFC:
      result = CodePage;
      unk_4CB410 = 1;
      break;
  }
  return result;
}