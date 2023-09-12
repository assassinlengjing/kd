#include "sub.h" 
int sub_461335(int thisx)
{
    char* v1; // eax
    char* v2; // eax
    unsigned __int16 v3; // ax
    unsigned __int16 v4; // ax
    int result; // eax
    int v6; // [esp-4h] [ebp-290h]
    int v7; // [esp-4h] [ebp-290h]
    int v9; // [esp+4h] [ebp-288h]
    int v10; // [esp+8h] [ebp-284h]
    int i; // [esp+Ch] [ebp-280h]
    char v12[76]; // [esp+10h] [ebp-27Ch] BYREF
    char v13[178]; // [esp+5Ch] [ebp-230h] BYREF
    unsigned __int8 v14; // [esp+10Eh] [ebp-17Eh]
    unsigned __int16 v15; // [esp+110h] [ebp-17Ch]
    CHAR String[256]; // [esp+18Ch] [ebp-100h] BYREF

    *(_DWORD*)(thisx + 104) = 20;
    if (*(unsigned __int8*)(thisx + 2562) < 2u)
        *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2528) = *(unsigned __int8*)(thisx + 13124);
    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_463E60((int)v12);
    for (i = 0; i < 6; ++i)
    {
        sub_452045((_BYTE*)thisx, 19 * (i / 3) + 1, 7 * (i % 3) + 1, 18, 6);
        v10 = 8 * (19 * (i / 3) + 1);
        v9 = 8 * (7 * (i % 3) + 1);
        wsprintfA(String, "NO%d", i + 1);
        sub_47B7ED(v10 + 16, v9 + 8, String, 0, dword_4B9248);
        if (sub_4611A8((_BYTE*)thisx, i, (int)v12))
        {
            *(_WORD*)(thisx + 2 * i + 2564) = 1;
            v6 = dword_4B9248;
            v1 = sub_4266D0(v12);
            sub_47B91A(v10 + 48, v9 + 8, v1, 0, v6);
            sub_47B91A(v10 + 88, v9 + 8, (LPCSTR)&byte_4B2654, 0, dword_4B9248);
            v7 = dword_4B9248;
            v2 = sub_4266D0(v13);
            sub_47B91A(v10 + 96, v9 + 8, v2, 0, v7);
            if (v14)
            {
                if (v14 < 0x11u)
                {
                    wsprintfA(String, (LPCSTR)&byte_4B1F22, v14 + 1);
                    sub_47B7ED(v10 + 8, v9 + 20, String, 0, dword_4B9248);
                    sub_47B91A(v10 + 24, v9 + 20, a2d_5, 0, dword_4B9248);
                }
                else
                {
                    sub_47B91A(v10 + 8, v9 + 20, (LPCSTR)&byte_4B1B38, 0, dword_4B9248);
                }
            }
            else
            {
                sub_47B91A(v10 + 8, v9 + 20, &byte_4B1B2C, 0, dword_4B9248);
            }
            wsprintfA(String, "%2dPOINT", v15);
            sub_47B7ED(v10 + 8, v9 + 32, String, 0, dword_4B9248);
            v3 = sub_4750D0(v12);
            wsprintfA(String, "LV%2d", v3);
            sub_47B7ED(v10 + 88, v9 + 20, String, 0, dword_4B9248);
            v4 = sub_4750D0(v13);
            wsprintfA(String, "LV%2d", v4);
            sub_47B7ED(v10 + 88, v9 + 32, String, 0, dword_4B9248);
        }
        else
        {
            *(_WORD*)(thisx + 2 * i + 2564) = 0;
            sub_47B91A(v10 + 48, v9 + 8, (LPCSTR)&byte_4B0C10, 0, dword_4B9248);
        }
    }
    if (*(_BYTE*)(thisx + 2562))
        result = sub_47B91A(16, 208, (LPCSTR)&byte_4B2DB2, 0, dword_4B9248);
    else
        result = sub_47B91A(16, 208, (LPCSTR)&byte_4B1B52, 0, dword_4B9248);
    if (*(_DWORD*)(thisx + 112) == 19)
        return sub_456D33((const CHAR*)thisx, aMenuWav_4, 1, 0);
    return result;
}

