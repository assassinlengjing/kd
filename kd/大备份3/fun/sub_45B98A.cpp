#include "sub.h" 
int sub_45B98A(int thisx, int a2)
{
    const CHAR* v2; // eax
    int v4; // [esp-4h] [ebp-13Ch]
    int k; // [esp+Ch] [ebp-12Ch]
    int v7; // [esp+10h] [ebp-128h]
    int v8; // [esp+14h] [ebp-124h]
    unsigned __int8 v9; // [esp+18h] [ebp-120h]
    int v10; // [esp+1Ch] [ebp-11Ch]
    int j; // [esp+24h] [ebp-114h]
    int i; // [esp+28h] [ebp-110h]
    int v13; // [esp+2Ch] [ebp-10Ch]
    int v14; // [esp+30h] [ebp-108h]
    CHAR String[256]; // [esp+34h] [ebp-104h] BYREF
    char v16; // [esp+134h] [ebp-4h]

    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 5, 1, 30, 3);
    sub_47B91A(64, 16, a1_1, 0, unk_4B9248);
    wsprintfA(String, "%2d", *(unsigned __int8*)(thisx + 11690));
    sub_47B7ED(120, 16, String, 0, unk_4B9248);
    v16 = *(unsigned __int8*)(thisx + 11688) / (__int16)*(unsigned __int8*)(thisx + 11812);
    if (*(unsigned __int8*)(thisx + 11688) % (int)*(unsigned __int8*)(thisx + 11812))
        ++v16;
    v14 = 2;
    v13 = 8;
    if (*(_BYTE*)(thisx + 11812) == 2)
    {
        v14 = 3;
        v13 = 5;
    }
    *(_DWORD*)(thisx + 2532) = -1;
    *(_DWORD*)(thisx + 2528) = -1;
    for (i = 0; i < v14; ++i)
    {
        sub_452045((_BYTE*)thisx, 5, (v13 + 1) * i + 6, 30, v13);
        v10 = 8 * (v13 + 1) * i + 48;
        sub_47B91A(148, v10 + 4 * v13 - 4, (LPCSTR)&unk_4B25F6, 0, unk_4B9248);
        for (j = 0; j < *(unsigned __int8*)(thisx + i + *(unsigned __int16*)(thisx + 2564) + 13002); ++j)
        {
            v8 = 112 * (j % 2) + 56;
            v7 = v10 + 28 * (j / 2) + 12;
            v9 = *(_BYTE*)(thisx + j + 4 * (i + *(unsigned __int16*)(thisx + 2564)) + 12970);
            wsprintfA(String, "%3d POINT", *(unsigned __int16*)(thisx + 2 * v9 + 11692));
            sub_47B7ED(112 * (j % 2) + 72, v10 + 28 * (j / 2) + 22, String, 0, unk_4B9248);
            if (v9)
            {
                for (k = 0; k < 2; ++k)
                {
                    v4 = unk_4B9248;
                    v2 = (const CHAR*)unknown_libname_18(36 * (unsigned __int16)(*(_WORD*)(thisx + 4 * v9 + 11724 + 2 * k) - 2) + (char*)unk_4B92E0);
                    sub_47B91A(48 * k + v8, v7, v2, 0, v4);
                }
                sub_47B91A(112 * (j % 2) + 96, v7, (LPCSTR)&unk_4B2654, 0, unk_4B9248);
            }
            else
            {
                *(_DWORD*)(thisx + 2528) = v8;
                *(_DWORD*)(thisx + 2532) = v7;
            }
        }
    }
    sub_47B91A(16, 208, (LPCSTR)&unk_4B2850, 0, unk_4B9248);
    return sub_47B91A(16, 224, (LPCSTR)&unk_4B2930, 0, unk_4B9248);
}

