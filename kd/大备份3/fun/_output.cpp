#include "sub.h"
int __cdecl _output(myFILE *File, int a2, int a3)
{
  int v3; // esi
  char v4; // bl
  char *v5; // edi
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int int_arg; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  char *i; // eax
  int v15; // edx
  wchar_t short_arg; // ax
  __int16 *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  char *j; // eax
  int v22; // edx
  _WORD *v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  int v26; // eax
  int v27; // ebx
  unsigned __int64 v28; // kr08_8
  _BYTE *v29; // eax
  char *v30; // eax
  char v31; // bl
  int v32; // esi
  wchar_t *v33; // ebx
  int v34; // edi
  wchar_t v35; // ax
  int v36; // eax
  char Str; // [esp+Ch] [ebp-248h] BYREF
  char v40; // [esp+20Bh] [ebp-49h] BYREF
  int v41[2]; // [esp+20Ch] [ebp-48h] BYREF
  __int64 v42; // [esp+214h] [ebp-40h]
  char MbCh[4]; // [esp+21Ch] [ebp-38h] BYREF
  int v44; // [esp+220h] [ebp-34h]
  int v45; // [esp+224h] [ebp-30h]
  int v46; // [esp+228h] [ebp-2Ch]
  int v47; // [esp+22Ch] [ebp-28h]
  int v48; // [esp+230h] [ebp-24h]
  int v49; // [esp+234h] [ebp-20h]
  int v50; // [esp+238h] [ebp-1Ch]
  _WORD v51[3]; // [esp+23Eh] [ebp-16h] BYREF
  int v52; // [esp+244h] [ebp-10h]
  int v53; // [esp+248h] [ebp-Ch]
  int p_Str; // [esp+24Ch] [ebp-8h]
  int v55; // [esp+250h] [ebp-4h]
  char *v56; // [esp+260h] [ebp+Ch]

  v3 = 0;
  v4 = *(_BYTE *)a2;
  v5 = (char *)(a2 + 1);
  v6 = *(_BYTE *)a2 == 0;
  v53 = 0;
  *(_DWORD *)&v51[1] = 0;
  v56 = (char *)(a2 + 1);
  if ( !v6 )
  {
    v7 = v52;
    while ( 1 )
    {
      if ( *(int *)&v51[1] < 0 )
        return *(_DWORD *)&v51[1];
      if ( v4 < 32 || v4 > 120 )
        v8 = 0;
      else
        v8 = *((_BYTE *)&unk_4AC540 + v4) & 0xF;
      v45 = unk_4AC560[8 * v8 + v3] >> 4;
      switch ( v45 )
      {
        case 0:
          goto $NORMAL_STATE$1535;
        case 1:
          v52 = -1;
          v44 = 0;
          v47 = 0;
          v49 = 0;
          v50 = 0;
          v55 = 0;
          v48 = 0;
          goto LABEL_171;
        case 2:
          switch ( v4 )
          {
            case ' ':
              v55 |= 2u;
              break;
            case '#':
              LOBYTE(v55) = v55 | 0x80;
              break;
            case '+':
              v55 |= 1u;
              break;
            case '-':
              v55 |= 4u;
              break;
            case '0':
              v55 |= 8u;
              break;
          }
          goto LABEL_171;
        case 3:
          if ( v4 == 42 )
          {
            int_arg = get_int_arg(&a3);
            v49 = int_arg;
            if ( int_arg >= 0 )
              goto LABEL_171;
            v55 |= 4u;
            v10 = -int_arg;
          }
          else
          {
            v10 = v4 + 10 * v49 - 48;
          }
          v49 = v10;
          goto LABEL_171;
        case 4:
          v52 = 0;
          goto LABEL_171;
        case 5:
          if ( v4 == 42 )
          {
            v52 = get_int_arg(&a3);
            if ( v52 < 0 )
              v52 = -1;
          }
          else
          {
            v52 = v4 + 10 * v7 - 48;
          }
          goto LABEL_171;
        case 6:
          switch ( v4 )
          {
            case 'I':
              if ( *v5 == 54 && v5[1] == 52 )
              {
                BYTE1(v55) |= 0x80u;
                v56 = v5 + 2;
              }
              else
              {
                v45 = 0;
$NORMAL_STATE$1535:
                v48 = 0;
                if ( *((char *)unk_4B8414 + 2 * (unsigned __int8)v4 + 1) < 0 )
                {
                  write_char(v4, File, (int)&v51[1]);
                  v4 = *v5;
                  v56 = v5 + 1;
                }
                write_char(v4, File, (int)&v51[1]);
              }
              break;
            case 'h':
              v55 |= 0x20u;
              break;
            case 'l':
              v55 |= 0x10u;
              break;
            case 'w':
              BYTE1(v55) |= 8u;
              break;
          }
          goto LABEL_171;
        case 7:
          if ( v4 > 103 )
          {
            switch ( v4 )
            {
              case 'i':
                goto LABEL_114;
              case 'n':
                v23 = (_WORD *)get_int_arg(&a3);
                if ( (v55 & 0x20) != 0 )
                  *v23 = v51[1];
                else
                  *(_DWORD *)v23 = *(_DWORD *)&v51[1];
                v47 = 1;
                goto LABEL_171;
              case 'o':
                v53 = 8;
                if ( (v55 & 0x80u) != 0 )
                  BYTE1(v55) |= 2u;
                break;
              default:
                switch ( v4 )
                {
                  case 'p':
                    v52 = 8;
LABEL_105:
                    v46 = 7;
                    break;
                  case 's':
                    goto LABEL_55;
                  case 'u':
                    goto LABEL_115;
                  case 'x':
                    v46 = 39;
                    break;
                  default:
                    goto LABEL_148;
                }
                v53 = 16;
                if ( (v55 & 0x80u) != 0 )
                {
                  LOBYTE(v51[0]) = 48;
                  v50 = 2;
                  HIBYTE(v51[0]) = v46 + 81;
                }
                break;
            }
LABEL_116:
            if ( (v55 & 0x8000) == 0 )
            {
              if ( (v55 & 0x20) != 0 )
              {
                if ( (v55 & 0x40) != 0 )
                  LODWORD(v24) = (__int16)get_int_arg(&a3);
                else
                  LODWORD(v24) = (unsigned __int16)get_int_arg(&a3);
              }
              else
              {
                if ( (v55 & 0x40) == 0 )
                {
                  v24 = (unsigned int)get_int_arg(&a3);
                  goto LABEL_126;
                }
                LODWORD(v24) = get_int_arg(&a3);
              }
              v24 = (int)v24;
            }
            else
            {
              LODWORD(v24) = get_int64_arg(&a3);
            }
LABEL_126:
            if ( (v55 & 0x40) != 0 && v24 < 0 )
            {
              HIDWORD(v25) = -(int)v24;
              BYTE1(v55) |= 1u;
              LODWORD(v25) = (unsigned __int64)-v24 >> 32;
            }
            else
            {
              v25 = __PAIR64__(v24, HIDWORD(v24));
            }
            if ( (v55 & 0x8000) == 0 )
              LODWORD(v25) = 0;
            if ( v52 >= 0 )
              v55 &= ~8u;
            else
              v52 = 1;
            if ( !v25 )
              v50 = 0;
            p_Str = (int)&v40;
            while ( 1 )
            {
              v26 = v52--;
              if ( v26 <= 0 && !v25 )
                break;
              v42 = v53;
              v27 = __PAIR64__(v25, HIDWORD(v25)) % v53 + 48;
              v28 = __PAIR64__(v25, HIDWORD(v25)) / v53;
              v25 = __PAIR64__(v28, HIDWORD(v28));
              if ( v27 > 57 )
                LOBYTE(v27) = v46 + v27;
              v29 = (_BYTE *)p_Str--;
              *v29 = v27;
            }
            v30 = &v40 - p_Str++;
            v53 = (int)v30;
            if ( (v55 & 0x200) != 0 && (*(_BYTE *)p_Str != 48 || !v30) )
            {
              --p_Str;
              v20 = (int)(v30 + 1);
              *(_BYTE *)p_Str = 48;
              goto LABEL_147;
            }
            goto LABEL_148;
          }
          if ( v4 >= 101 )
            goto LABEL_65;
          if ( v4 > 88 )
          {
            if ( v4 == 90 )
            {
              v17 = (__int16 *)get_int_arg(&a3);
              if ( v17 && (v18 = *((_DWORD *)v17 + 1)) != 0 )
              {
                if ( (v55 & 0x800) != 0 )
                {
                  v19 = (unsigned int)*v17 >> 1;
                  p_Str = v18;
                  v53 = v19;
                  v48 = 1;
                  goto LABEL_148;
                }
                v48 = 0;
                p_Str = v18;
                v20 = *v17;
              }
              else
              {
                p_Str = (int)Str;
                v20 = strlen((char*)Str);
              }
              goto LABEL_147;
            }
            if ( v4 == 99 )
              goto LABEL_69;
            if ( v4 != 100 )
              goto LABEL_148;
LABEL_114:
            v55 |= 0x40u;
LABEL_115:
            v53 = 10;
            goto LABEL_116;
          }
          switch ( v4 )
          {
            case 'X':
              goto LABEL_105;
            case 'C':
              if ( (v55 & 0x830) == 0 )
                BYTE1(v55) |= 8u;
LABEL_69:
              if ( (v55 & 0x810) != 0 )
              {
                short_arg = get_short_arg(&a3);
                v53 = wctomb(&Str, short_arg);
                if ( v53 < 0 )
                  v47 = 1;
              }
              else
              {
                Str = get_int_arg(&a3);
                v53 = 1;
              }
              p_Str = (int)&Str;
              goto LABEL_148;
            case 'E':
            case 'G':
              v44 = 1;
              v4 += 32;
LABEL_65:
              v55 |= 0x40u;
              p_Str = (int)&Str;
              if ( v7 >= 0 )
              {
                if ( !v7 && v4 == 103 )
                  v52 = 1;
              }
              else
              {
                v52 = 6;
              }
              a3 += 8;
              v41[0] = *(_DWORD *)(a3 - 8);
              v41[1] = *(_DWORD *)(a3 - 4);
              unk_4B8318((_DWORD)v41, (_DWORD)&Str, v4, v52, v44);
              break;
          }
          if ( v4 == 83 )
          {
            if ( (v55 & 0x830) == 0 )
              BYTE1(v55) |= 8u;
LABEL_55:
            v11 = v52;
            if ( v52 == -1 )
              v11 = 0x7FFFFFFF;
            v12 = get_int_arg(&a3);
            v13 = (char *)v12;
            p_Str = v12;
            if ( (v55 & 0x810) != 0 )
            {
              if ( !v12 )
              {
                v13 = (char *)unk_4B8634;
                p_Str = (int)unk_4B8634;
              }
              v48 = 1;
              for ( i = v13; ; i += 2 )
              {
                v15 = v11--;
                if ( !v15 || !*(_WORD *)i )
                  break;
              }
              v20 = (i - v13) >> 1;
            }
            else
            {
              if ( !v12 )
              {
                v13 = ( char*)Str;
                p_Str = (int)::Str;
              }
              for ( j = v13; ; ++j )
              {
                v22 = v11--;
                if ( !v22 || !*j )
                  break;
              }
              v20 = j - v13;
            }
LABEL_147:
            v53 = v20;
          }
LABEL_148:
          if ( v47 )
            goto LABEL_171;
          v31 = v55;
          if ( (v55 & 0x40) == 0 )
            goto LABEL_157;
          if ( (v55 & 0x100) != 0 )
          {
            LOBYTE(v51[0]) = 45;
LABEL_156:
            v50 = 1;
            goto LABEL_157;
          }
          if ( (v55 & 1) != 0 )
          {
            LOBYTE(v51[0]) = 43;
            goto LABEL_156;
          }
          if ( (v55 & 2) != 0 )
          {
            LOBYTE(v51[0]) = 32;
            goto LABEL_156;
          }
LABEL_157:
          v32 = v49 - v50 - v53;
          if ( (v55 & 0xC) == 0 )
            write_multi_char(32, v49 - v50 - v53, File, (int)&v51[1]);
          write_string((int)v51, v50, File, (int)&v51[1]);
          if ( (v31 & 8) != 0 && (v31 & 4) == 0 )
            write_multi_char(48, v32, File, (int)&v51[1]);
          if ( v48 && v53 > 0 )
          {
            v33 = (wchar_t *)p_Str;
            v34 = v53 - 1;
            do
            {
              v35 = *v33++;
              v36 = wctomb(MbCh, v35);
              if ( v36 <= 0 )
                break;
              write_string((int)MbCh, v36, File, (int)&v51[1]);
            }
            while ( v34-- );
          }
          else
          {
            write_string(p_Str, v53, File, (int)&v51[1]);
          }
          if ( (v55 & 4) != 0 )
            write_multi_char(32, v32, File, (int)&v51[1]);
LABEL_171:
          v4 = *v56;
          v5 = v56 + 1;
          v6 = *v56++ == 0;
          if ( v6 )
            return *(_DWORD *)&v51[1];
          v7 = v52;
          v3 = v45;
          break;
        default:
          goto LABEL_171;
      }
    }
  }
  return *(_DWORD *)&v51[1];
}