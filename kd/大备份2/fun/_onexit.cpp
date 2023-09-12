//#include "sub.h"???
//_onexit_t __cdecl _onexit(_onexit_t Func)
//{
//  size_t v1; // eax
//  _onexit_t *v2; // ecx
//  size_t v3; // eax
//  _onexit_t result; // eax
//  int v5; // ecx
//
//  v1 = _msize((void*)dword_4CC7D0);
//  v2 = (_onexit_t *)dword_4CC7CC;
//  if ( v1 < dword_4CC7CC - (int)dword_4CC7D0 + 4 )
//  {
//    v3 = _msize((void*)dword_4CC7D0);
//    result = (_onexit_t)realloc((void*)dword_4CC7D0, v3 + 16);
//    if ( !result )
//      return result;
//    v5 = dword_4CC7CC - (_DWORD)dword_4CC7D0;
//    dword_4CC7D0 = (_DWORD)result;
//    v2 = (_onexit_t *)((char *)result + 4 * (v5 >> 2));
//    dword_4CC7CC = (int)v2;
//  }
//  result = Func;
//  *v2 = Func;
//  dword_4CC7CC += 4;
//  return result;
//}