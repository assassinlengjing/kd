#include "sub.h"
ULONG_PTR __cdecl _raise_exc(ULONG_PTR Arguments, int a2, DWORD dwExceptionCode, int a4, int a5, int a6)
{
  char v6; // cl
  int v7; // esi
  char v8; // al
  int v9; // eax
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax
  unsigned int v14; // ecx
  double *v15; // edi
  __int16 v16; // fps
  ULONG_PTR result; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // ecx

  *(_DWORD *)(Arguments + 4) = 0;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v6 = dwExceptionCode;
  if ( (dwExceptionCode & 0x10) != 0 )
  {
    dwExceptionCode = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v6 & 2) != 0 )
  {
    dwExceptionCode = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v6 & 1) != 0 )
  {
    dwExceptionCode = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v6 & 4) != 0 )
  {
    dwExceptionCode = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v6 & 8) != 0 )
  {
    dwExceptionCode = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v7 = a2;
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFEF | (16 * ((*(_DWORD *)a2 & 1) == 0));
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFF7 | (2 * (~(unsigned __int8)*(_DWORD *)v7 & 4));
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFB | ((unsigned int)~*(_DWORD *)v7 >> 1) & 4;
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFD | ((unsigned int)~*(_DWORD *)v7 >> 3) & 2;
  *(_DWORD *)(Arguments + 8) = *(_DWORD *)(Arguments + 8) & 0xFFFFFFFE | ((unsigned int)~*(_DWORD *)v7 >> 5) & 1;
  v8 = _statfp((__int16)a1);
  if ( (v8 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v8 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v8 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v8 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v9 = *(_DWORD *)v7 & 0xC00;
  switch ( v9 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v10 = (_DWORD *)Arguments;
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_28;
    case 2048:
      v10 = (_DWORD *)Arguments;
      v11 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_28:
      *v10 = v11;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
  }
  v12 = *(_DWORD *)v7 & 0x300;
  switch ( v12 )
  {
    case 0:
      v13 = (_DWORD *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v13 = (_DWORD *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v13 = v14;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
  }
  *(_DWORD *)Arguments = *(_DWORD *)Arguments & 0xFFFE001F | (32 * (a4 & 0xFFF));
  *(_DWORD *)(Arguments + 32) |= 1u;
  *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
  *(double *)(Arguments + 16) = *(double *)a5;
  *(_DWORD *)(Arguments + 80) |= 1u;
  v15 = (double *)a6;
  *(_DWORD *)(Arguments + 80) = *(_DWORD *)(Arguments + 80) & 0xFFFFFFE1 | 2;
  *(double *)(Arguments + 64) = *v15;
  _clrfp(v16);
  RaiseException(dwExceptionCode, 0, 1u, &Arguments);
  result = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *(_DWORD *)v7 &= ~1u;
  if ( (*(_BYTE *)(result + 8) & 8) != 0 )
    *(_DWORD *)v7 &= ~4u;
  if ( (*(_BYTE *)(result + 8) & 4) != 0 )
    *(_DWORD *)v7 &= ~8u;
  if ( (*(_BYTE *)(result + 8) & 2) != 0 )
    *(_DWORD *)v7 &= ~0x10u;
  if ( (*(_BYTE *)(result + 8) & 1) != 0 )
    *(_DWORD *)v7 &= ~0x20u;
  v18 = *(_DWORD *)result & 3;
  if ( !v18 )
  {
    *(_DWORD *)v7 &= 0xFFFFF3FF;
    goto LABEL_56;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v21 = *(_DWORD *)v7;
    BYTE1(v21) = BYTE1(*(_DWORD *)v7) & 0xF3 | 4;
    goto LABEL_54;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v21 = *(_DWORD *)v7;
    BYTE1(v21) = BYTE1(*(_DWORD *)v7) & 0xF3 | 8;
LABEL_54:
    *(_DWORD *)v7 = v21;
    goto LABEL_56;
  }
  if ( v20 == 1 )
    *(_BYTE *)(v7 + 1) |= 0xCu;
LABEL_56:
  v22 = (*(_DWORD *)result >> 2) & 7;
  if ( !v22 )
  {
    v24 = *(_DWORD *)v7 & 0xFFFFF3FF;
    BYTE1(v24) |= 3u;
    goto LABEL_62;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    v24 = *(_DWORD *)v7 & 0xFFFFF3FF;
    BYTE1(v24) |= 2u;
LABEL_62:
    *(_DWORD *)v7 = v24;
    goto LABEL_63;
  }
  if ( v23 == 1 )
    *(_DWORD *)v7 &= 0xFFFFF3FF;
LABEL_63:
  *v15 = *(double *)(result + 64);
  return result;
}