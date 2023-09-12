#include "sub.h" 
int sub_49E288(_BYTE* thisx, _WORD* a2)
{
    int result; // eax
    _WORD* v3; // [esp+8h] [ebp-74h]
    int j; // [esp+Ch] [ebp-70h]
    _WORD* v5; // [esp+10h] [ebp-6Ch]
    _WORD* v6; // [esp+18h] [ebp-64h]
    int v7; // [esp+24h] [ebp-58h]
    __int16 v8; // [esp+28h] [ebp-54h]
    char v9; // [esp+2Ch] [ebp-50h]
    int v10; // [esp+30h] [ebp-4Ch]
    int v11; // [esp+34h] [ebp-48h]
    _WORD* v12; // [esp+3Ch] [ebp-40h]
    int v13; // [esp+40h] [ebp-3Ch]
    __int16 v14; // [esp+4Ch] [ebp-30h]
    unsigned __int16 v15; // [esp+54h] [ebp-28h]
    int v16; // [esp+60h] [ebp-1Ch]
    int i; // [esp+64h] [ebp-18h]
    __int16 v18; // [esp+6Ch] [ebp-10h]
    int v19; // [esp+70h] [ebp-Ch]
    __int16 v20; // [esp+74h] [ebp-8h]
    char v21; // [esp+78h] [ebp-4h]

    v15 = 64 - a2[16];
    v20 = word_4CA1F0[0];
    v18 = word_4CA1F2;
    v14 = word_4CA1F4;
    v21 = byte_4CA210[0];
    v9 = byte_4CA211;
    v7 = *(_DWORD*)(*(_DWORD*)a2 + 12) - *(_DWORD*)(*(_DWORD*)a2 + 4);
    v19 = *(_DWORD*)(*(_DWORD*)a2 + 8) - **(_DWORD**)a2;
    v12 = (_WORD*)*((_DWORD*)a2 + 2);
    v6 = (_WORD*)*((_DWORD*)a2 + 3);
    v8 = a2[14];
    v10 = *((_DWORD*)a2 + 8);
    v13 = *((_DWORD*)a2 + 4);
    v11 = *((_DWORD*)a2 + 5);
    v16 = *((_DWORD*)a2 + 6);
    for (i = 0; ; ++i)
    {
        result = i;
        if (i >= v7)
            break;
        v3 = v12;
        v5 = v6;
        for (j = 0; j < v19; ++j)
        {
            if (!thisx[5] || *v12 != v8)
                *v6 = ((unsigned __int8)byte_4CA21C[64 * v10 + (unsigned __int16)(v14 & *v12)]
                    + (unsigned __int8)byte_4CA21C[64 * v15 + (unsigned __int16)(v14 & *v6)]) | (((unsigned __int8)byte_4CA21C[64 * v10 + (unsigned __int16)((int)(unsigned __int16)(v18 & *v12) >> v9)]
                        + (unsigned __int16)(unsigned __int8)byte_4CA21C[64 * v15 + (unsigned __int16)((int)(unsigned __int16)(v18 & *v6) >> v9)]) << v9) | (((unsigned __int8)byte_4CA21C[64 * v10 + (unsigned __int16)((int)(unsigned __int16)(v20 & *v12) >> v21)] + (unsigned __int16)(unsigned __int8)byte_4CA21C[64 * v15 + (unsigned __int16)((int)(unsigned __int16)(v20 & *v6) >> v21)]) << v21);
            v12 += v13;
            ++v6;
        }
        v12 = &v3[v11];
        v6 = &v5[v16];
    }
    return result;
}

