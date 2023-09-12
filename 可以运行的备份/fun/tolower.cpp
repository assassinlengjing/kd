//#include "sub.h"???
//int __cdecl tolower(int C)
//{
//  int result; // eax
//  int v2; // ebx
//  int v3; // eax
//  int v4; // eax
//  int v5; // eax
//  unsigned __int16 DestStr; // [esp+Ch] [ebp-4h] BYREF
//
//  if ( dword_4CB440 )
//  {
//    v2 = C;
//    if ( (C >= 256 || (cbMultiByte <= 1 ? (v3 = *((_BYTE *)off_4B8414 + 2 * C) & 1) : (v3 = _isctype(C, 1)), v3))
//      && (*((char *)off_4B8414 + 2 * BYTE1(v2) + 1) >= 0 ? (LOWORD(C) = (unsigned __int8)v2, v4 = 1) : (LOBYTE(C) = BYTE1(v2), *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2, v4 = 2),
//          (v5 = __crtLCMapStringA(dword_4CB440, 0x100u, (LPCSTR)&C, v4, (LPSTR)&DestStr, 3, 0, 1)) != 0) )
//    {
//      if ( v5 == 1 )
//        return (unsigned __int8)DestStr;
//      else
//        return DestStr;
//    }
//    else
//    {
//      return v2;
//    }
//  }
//  else
//  {
//    result = C;
//    if ( C >= 65 && C <= 90 )
//      return C + 32;
//  }
//  return result;
//}