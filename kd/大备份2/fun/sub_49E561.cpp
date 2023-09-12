#include "sub.h" 
int sub_49E561(_BYTE* thisx, int a2)
{
    int result; // eax
    _WORD* v3; // [esp+4h] [ebp-30h]
    int j; // [esp+8h] [ebp-2Ch]
    _WORD* v5; // [esp+Ch] [ebp-28h]
    _WORD* v6; // [esp+10h] [ebp-24h]
    int v7; // [esp+14h] [ebp-20h]
    __int16 v8; // [esp+18h] [ebp-1Ch]
    int v9; // [esp+1Ch] [ebp-18h]
    _WORD* v10; // [esp+20h] [ebp-14h]
    int v11; // [esp+24h] [ebp-10h]
    int v12; // [esp+28h] [ebp-Ch]
    int i; // [esp+2Ch] [ebp-8h]
    int v14; // [esp+30h] [ebp-4h]

    v7 = *(_DWORD*)(*(_DWORD*)a2 + 12) - *(_DWORD*)(*(_DWORD*)a2 + 4);
    v14 = *(_DWORD*)(*(_DWORD*)a2 + 8) - **(_DWORD**)a2;
    v10 = *(_WORD**)(a2 + 8);
    v6 = *(_WORD**)(a2 + 12);
    v8 = *(_WORD*)(a2 + 28);
    v11 = *(_DWORD*)(a2 + 16);
    v9 = *(_DWORD*)(a2 + 20);
    result = *(_DWORD*)(a2 + 24);
    v12 = result;
    for (i = 0; i < v7; ++i)
    {
        v3 = v10;
        v5 = v6;
        for (j = 0; j < v14; ++j)
        {
            if (!thisx[5] || *v10 != v8)
                *v6 = ((unsigned __int16)(word_4CB21C & *v6) + (unsigned __int16)(word_4CB21C & *v10)) >> 1;
            v10 += v11;
            ++v6;
        }
        v10 = &v3[v9];
        result = v12;
        v6 = &v5[v12];
    }
    return result;
}

