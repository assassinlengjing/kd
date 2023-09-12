#include "sub.h"
LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int *v2; // eax
  void (__cdecl *v3)(int); // ebx
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // [esp+Ch] [ebp+8h]

  v2 = (int *)xcptlookup(a1);
  if ( !v2 )
    return UnhandledExceptionFilter(ExceptionInfo);
  v3 = (void (__cdecl *)(int))v2[2];
  if ( !v3 )
    return UnhandledExceptionFilter(ExceptionInfo);
  if ( v3 == (void (__cdecl *)(int))5 )
  {
    v2[2] = 0;
    return 1;
  }
  else
  {
    if ( v3 != (void (__cdecl *)(int))1 )
    {
      v10 = unk_4CB2B8;
      unk_4CB2B8 = (int)ExceptionInfo;
      v5 = v2[1];
      if ( v5 == 8 )
      {
        if ( unk_4B86B0 < unk_4B86B0 + unk_4B86B4 )
        {
          v6 = unk_4B86B4;
          v7 = (_DWORD *)(12 * unk_4B86B0 + 4949568);
          do
          {
            *v7 = 0;
            v7 += 3;
            --v6;
          }
          while ( v6 );
        }
        v8 = *v2;
        v9 = (int)unk_4B86BC;
        switch ( v8 )
        {
          case -1073741682:
            unk_4B86BC = 131;
            break;
          case -1073741680:
            unk_4B86BC = 129;
            break;
          case -1073741679:
            unk_4B86BC = 132;
            break;
          case -1073741677:
            unk_4B86BC = 133;
            break;
          case -1073741683:
            unk_4B86BC = 130;
            break;
          case -1073741681:
            unk_4B86BC = 134;
            break;
          case -1073741678:
            unk_4B86BC = 138;
            break;
        }
        v3(8);
        unk_4B86BC = v9;
      }
      else
      {
        v2[2] = 0;
        v3(v5);
      }
      unk_4CB2B8 = v10;
    }
    return -1;
  }
}