#include "sub.h" 
int sub_464C88(int thisx)
{
    int v1; // eax
    const CHAR* v2; // eax
    int v4; // [esp-4h] [ebp-134h]
    int v5; // [esp-4h] [ebp-134h]
    int v7; // [esp+8h] [ebp-128h]
    int v8; // [esp+Ch] [ebp-124h]
    int v9; // [esp+10h] [ebp-120h]
    int k; // [esp+14h] [ebp-11Ch]
    unsigned __int8 v11; // [esp+18h] [ebp-118h]
    int j; // [esp+1Ch] [ebp-114h]
    unsigned __int8 v13; // [esp+20h] [ebp-110h]
    int v14; // [esp+24h] [ebp-10Ch]
    int v15; // [esp+28h] [ebp-108h]
    int i; // [esp+2Ch] [ebp-104h]
    CHAR String[256]; // [esp+30h] [ebp-100h] BYREF

    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 5, 1, 30, 3);
    wsprintfA(String, a1_0);
    v4 = dword_4B9248;
    v1 = lstrlenA(String);
    sub_47B91A(160 - 2 * v1, 16, String, 0, v4);
    *(_DWORD*)(thisx + 2532) = -1;
    *(_DWORD*)(thisx + 2528) = -1;
    v15 = 2;
    if (*(unsigned __int8*)(thisx + 12969) < 2u)
        v15 = *(unsigned __int8*)(thisx + 12969);
    for (i = 0; i < v15; ++i)
    {
        sub_452045((_BYTE*)thisx, 18 * i + 3, 5, 16, 18);
        v13 = i + *(_WORD*)(thisx + 2564);
        v14 = 128 / *(unsigned __int8*)(thisx + v13 + 13002);
        for (j = 0; j < *(unsigned __int8*)(thisx + v13 + 13002); ++j)
        {
            v9 = j;
            if (v13 == *(unsigned __int16*)(thisx + 2574))
                v9 = *(unsigned __int16*)(thisx + 2 * j + 2566);
            v8 = 144 * i + 32;
            v7 = v14 * j + 56;
            wsprintfA(String, "%d", v9 + 1);
            sub_47B7ED(v8, v7, String, 0, dword_4B9248);
            sub_47B91A(144 * i + 40, v7, (LPCSTR)&byte_4B2884, 0, dword_4B9248);
            if (*(_BYTE*)(thisx + v13 + 13002) == 2)
                wsprintfA(String, "+%d POINT", 4 - 2 * v9);
            else
                wsprintfA(String, "+%d POINT", 4 - v9);
            sub_47B7ED(144 * i + 56, v14 * j + 68, String, 0, dword_4B9248);
            v11 = *(_BYTE*)(thisx + j + 4 * v13 + 13010);
            if (v11)
            {
                for (k = 0; k < 2; ++k)
                {
                    v5 = dword_4B9248;
                    v2 = (const CHAR*)unknown_libname_18((char*)(36 * (unsigned __int8)(*(_WORD*)(thisx + 4 * v11 + 11724 + 2 * k) - 2) + dword_4B92E0));
                    sub_47B91A(v8 + 48 * k + 24, v7, v2, 0, v5);
                }
                sub_47B91A(144 * i + 96, v7, (LPCSTR)&byte_4B2654, 0, dword_4B9248);
            }
            else
            {
                *(_DWORD*)(thisx + 2528) = 144 * i + 56;
                *(_DWORD*)(thisx + 2532) = v7;
            }
        }
    }
    sub_47B91A(16, 208, (LPCSTR)&byte_4B2973, 0, dword_4B9248);
    return sub_47B91A(16, 224, (LPCSTR)&byte_4B309C, 0, dword_4B9248);
}

