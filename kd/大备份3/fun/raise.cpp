#include "sub.h"
int __cdecl raise(int Signal)
{
  int v1; // edi
  void (__cdecl *v3)(int); // esi
  int *v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // edx

  v1 = Signal;
  switch ( Signal )
  {
    case 2:
      v3 = (void (__cdecl *)(int))unk_4CB420;
      v4 = &unk_4CB420;
      break;
    case 4:
    case 8:
    case 11:
      v5 = (_DWORD)siglookup(Signal);
      v3 = *(void (__cdecl **)(int))(v5 + 8);
      v4 = (int *)(v5 + 8);
      break;
    case 15:
      v3 = (void (__cdecl *)(int))unk_4CB42C;
      v4 = &unk_4CB42C;
      break;
    case 21:
      v3 = (void (__cdecl *)(int))unk_4CB424;
      v4 = &unk_4CB424;
      break;
    case 22:
      v3 = (void (__cdecl *)(int))unk_4CB428;
      v4 = &unk_4CB428;
      break;
    default:
      return -1;
  }
  if ( v3 == (void (__cdecl *)(int))1 )
    return 0;
  if ( !v3 )
    _exit(3);
  if ( Signal == 8 || Signal == 11 || Signal == 4 )
  {
    v6 = unk_4CB2B8;
    unk_4CB2B8 = 0;
    if ( Signal != 8 )
    {
LABEL_29:
      *v4 = 0;
      v3(v1);
      if ( v1 != 11 && v1 != 4 )
        return 0;
      goto LABEL_33;
    }
    v7 = (_DWORD)unk_4B86BC;
    //unk_4B86BC = 140;????
    Signal = v7;
  }
  else
  {
    v6 = Signal;
  }
  if ( v1 != 8 )
    goto LABEL_29;
  if ( unk_4B86B0 < unk_4B86B0 + unk_4B86B4 )
  {
    v8 = unk_4B86B4;
    v9 = (_DWORD *)(12 * unk_4B86B0 + 4949568);
    do
    {
      *v9 = 0;
      v9 += 3;
      --v8;
    }
    while ( v8 );
  }
  ((void (__cdecl *)(int, int))v3)(8, (_DWORD)unk_4B86BC);
LABEL_33:
  unk_4CB2B8 = v6;
  if ( v1 == 8 )
    //unk_4B86BC = Signal;??????????/
  return 0;
}