//#include "sub.h"???
//_onexit_t __cdecl _onexit(_onexit_t Func)
//{
//  size_t v1; // eax
//  _onexit_t *v2; // ecx
//  size_t v3; // eax
//  _onexit_t result; // eax
//  int v5; // ecx
//
//  v1 = _msize((void*)unk_4CC7D0);
//  v2 = (_onexit_t *)unk_4CC7CC;
//  if ( v1 < unk_4CC7CC - (int)unk_4CC7D0 + 4 )
//  {
//    v3 = _msize((void*)unk_4CC7D0);
//    result = (_onexit_t)realloc((void*)unk_4CC7D0, v3 + 16);
//    if ( !result )
//      return result;
//    v5 = unk_4CC7CC - (_DWORD)unk_4CC7D0;
//    unk_4CC7D0 = (_DWORD)result;
//    v2 = (_onexit_t *)((char *)result + 4 * (v5 >> 2));
//    unk_4CC7CC = (int)v2;
//  }
//  result = Func;
//  *v2 = Func;
//  unk_4CC7CC += 4;
//  return result;
//}