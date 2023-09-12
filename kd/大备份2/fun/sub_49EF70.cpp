#include "sub.h"
int sub_49EF70(
    int thisx,
    _DWORD* a2,
    unsigned __int8 a3,
    unsigned __int8 a4,
    unsigned __int8 a5,
    unsigned __int8 a6)
{
    int result; // eax
    unsigned int* v7; // [esp+8h] [ebp-110h]
    int i; // [esp+Ch] [ebp-10Ch]
    int j; // [esp+10h] [ebp-108h]
    unsigned int* v10; // [esp+14h] [ebp-104h]
    int v11; // [esp+18h] [ebp-100h]
    int m; // [esp+34h] [ebp-E4h]
    _WORD* v13; // [esp+38h] [ebp-E0h]
    int k; // [esp+3Ch] [ebp-DCh]
    unsigned __int16 v15; // [esp+40h] [ebp-D8h]
    _WORD* v16; // [esp+44h] [ebp-D4h]
    int v17; // [esp+48h] [ebp-D0h]
    int v18; // [esp+50h] [ebp-C8h]
    char v19; // [esp+54h] [ebp-C4h]
    int v20; // [esp+5Ch] [ebp-BCh]
    unsigned __int16 v21; // [esp+60h] [ebp-B8h]
    unsigned __int16 v22; // [esp+64h] [ebp-B4h]
    __int16 v23; // [esp+68h] [ebp-B0h]
    unsigned __int16 v24; // [esp+70h] [ebp-A8h]
    unsigned __int16 v25; // [esp+78h] [ebp-A0h]
    int v26; // [esp+7Ch] [ebp-9Ch]
    int v27; // [esp+7Ch] [ebp-9Ch]
    int v28[9]; // [esp+80h] [ebp-98h] BYREF
    _WORD* v29; // [esp+A4h] [ebp-74h]
    int v30; // [esp+FCh] [ebp-1Ch]
    int v31; // [esp+100h] [ebp-18h]
    int v32; // [esp+104h] [ebp-14h]
    int v33; // [esp+108h] [ebp-10h]
    int v34; // [esp+10Ch] [ebp-Ch]
    int v35; // [esp+110h] [ebp-8h]
    char v36; // [esp+114h] [ebp-4h]

    result = thisx;
    if (*(_BYTE*)(thisx + 50440))
    {
        if (*(_BYTE*)(thisx + 50443))
            v20 = *(_DWORD*)(thisx + 50520);
        else
            v20 = *(_DWORD*)(thisx + 50516);
        if (*a2 < *(_DWORD*)(thisx + 50452))
            *a2 = *(_DWORD*)(thisx + 50452);
        if (a2[1] < *(_DWORD*)(thisx + 50456))
            a2[1] = *(_DWORD*)(thisx + 50456);
        if (a2[2] > *(_DWORD*)(thisx + 50460))
            a2[2] = *(_DWORD*)(thisx + 50460);
        if (a2[3] > *(_DWORD*)(thisx + 50464))
            a2[3] = *(_DWORD*)(thisx + 50464);
        v28[0] = 124;
        result = (*(int(__stdcall**)(int, _DWORD*, int*, int, _DWORD))(*(_DWORD*)v20 + 100))(v20, a2, v28, 1, 0);
        v33 = result;
        if (!result)
        {
            v21 = (int)a3 >> (8 - byte_4CA218[0]);
            v15 = (int)a4 >> (8 - byte_4CA219);
            v22 = (int)a5 >> (8 - byte_4CA21A);
            v34 = v22 | (v15 << byte_4CA211) | (v21 << byte_4CA210[0]);
            v24 = 64 - a6;
            LOWORD(v35) = word_4CA1F0[0];
            LOWORD(v31) = word_4CA1F2;
            v23 = word_4CA1F4;
            v36 = byte_4CA210[0];
            v19 = byte_4CA211;
            v18 = a2[3] - a2[1];
            v32 = a2[2] - *a2;
            v16 = v29;
            v26 = v28[4] / 2;
            if (a6 == 32 && !v34)
            {
                v7 = (unsigned int*)v29;
                v11 = (unsigned __int16)word_4CB21C | ((unsigned __int16)word_4CB21C << 16);
                v32 /= 2;
                v27 = v26 / 2;
                for (i = 0; i < v18; ++i)
                {
                    v10 = v7;
                    for (j = 0; j < v32; ++j)
                    {
                        *v7 = (v11 & *v7) >> 1;
                        ++v7;
                    }
                    v7 = &v10[v27];
                }
            }
            else
            {
                for (k = 0; k < v18; ++k)
                {
                    v13 = v16;
                    for (m = 0; m < v32; ++m)
                    {
                        v25 = v23 & *v16;
                        v17 = ((unsigned __int8)byte_4CA21C[64 * a6 + v21]
                            + (unsigned __int8)byte_4CA21C[64 * v24
                            + (unsigned __int16)((int)(unsigned __int16)(v35 & *v16) >> v36)]) << v36;
                        v30 = ((unsigned __int8)byte_4CA21C[64 * a6 + v15]
                            + (unsigned __int8)byte_4CA21C[64 * v24
                            + (unsigned __int16)((int)(unsigned __int16)(v31 & *v16) >> v19)]) << v19;
                        *v16++ = ((unsigned __int8)byte_4CA21C[64 * a6 + v22] + (unsigned __int8)byte_4CA21C[64 * v24 + v25]) | v30 | v17;
                    }
                    v16 = &v13[v26];
                }
            }
            return (*(int(__stdcall**)(int, _DWORD*))(*(_DWORD*)v20 + 128))(v20, a2);
        }
    }
    return result;
}