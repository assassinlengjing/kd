#include "sub.h" 
int sub_465102(int thisx)
{
    int v1; // eax
    const CHAR* v2; // eax
    int v4; // [esp-4h] [ebp-124h]
    int v5; // [esp-4h] [ebp-124h]
    int v7; // [esp+8h] [ebp-118h]
    int v8; // [esp+Ch] [ebp-114h]
    int k; // [esp+10h] [ebp-110h]
    unsigned __int8 v10; // [esp+14h] [ebp-10Ch]
    int i; // [esp+18h] [ebp-108h]
    int j; // [esp+18h] [ebp-108h]
    int v13; // [esp+1Ch] [ebp-104h]
    CHAR String[256]; // [esp+20h] [ebp-100h] BYREF

    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 5, 1, 30, 3);
    wsprintfA(String, (LPCSTR)&unk_4B299F);
    v4 = unk_4B9248;
    v1 = lstrlenA(String);
    sub_47B91A(160 - 2 * v1, 16, String, 0, v4);
    for (i = 0; i < 2; ++i)
        sub_452045((_BYTE*)thisx, 18 * i + 3, 5, 16, 18);
    v13 = 0;
    *(_DWORD*)(thisx + 2532) = -1;
    *(_DWORD*)(thisx + 2528) = -1;
    for (j = 0; j < 8; ++j)
    {
        v8 = 144 * (v13 / 4) + 32;
        v7 = 32 * (v13 % 4) + 56;
        if (j + 4 * *(unsigned __int16*)(thisx + 2564) >= *(unsigned __int8*)(thisx + 11688))
            break;
        v10 = *(_BYTE*)(thisx + j + 4 * *(unsigned __int16*)(thisx + 2564) + 13076);
        wsprintfA(String, "%2d", *(unsigned __int8*)(thisx + v10 + 13060));
        sub_47B7ED(144 * (v13 / 4) + 28, v7, String, 0, unk_4B9248);
        sub_47B91A(144 * (v13 / 4) + 44, v7, (LPCSTR)&unk_4B288C, 0, unk_4B9248);
        wsprintfA(String, "%3d POINT", *(unsigned __int16*)(thisx + 2 * v10 + 11692));
        sub_47B7ED(144 * (v13 / 4) + 56, 32 * (v13 % 4) + 68, String, 0, unk_4B9248);
        ++v13;
        if (v10)
        {
            for (k = 0; k < 2; ++k)
            {
                v5 = unk_4B9248;
                v2 = (const CHAR*)unknown_libname_18((char*)(36 * (unsigned __int16)(*(_WORD*)(thisx + 4 * v10 + 11724 + 2 * k) - 2) + unk_4B92E0));
                sub_47B91A(v8 + 48 * k + 24, v7, v2, 0, v5);
            }
            sub_47B91A(v8 + 64, v7, (LPCSTR)&unk_4B2654, 0, unk_4B9248);
        }
        else
        {
            *(_DWORD*)(thisx + 2528) = v8 + 24;
            *(_DWORD*)(thisx + 2532) = v7;
        }
    }
    sub_47B91A(16, 208, (LPCSTR)&unk_4B30C6, 0, unk_4B9248);
    return sub_47B91A(16, 224, (LPCSTR)&unk_4B3104, 0, unk_4B9248);
}

