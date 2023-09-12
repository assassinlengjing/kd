#include "sub.h" 
void sub_471F33(int thisx)
{
    void* v1; // esp
    unsigned __int8 v2; // al
    _BYTE* v3; // eax
    char v5[1024]; // [esp+4h] [ebp-18D4h] BYREF
    int v6; // [esp+404h] [ebp-14D4h]
    int v7; // [esp+408h] [ebp-14D0h]
    int v8; // [esp+40Ch] [ebp-14CCh]
    int v9; // [esp+410h] [ebp-14C8h]
    _BYTE* v10; // [esp+414h] [ebp-14C4h]
    CHAR FileName[64]; // [esp+418h] [ebp-14C0h] BYREF
    int v12[15]; // [esp+458h] [ebp-1480h] BYREF
    int m; // [esp+494h] [ebp-1444h]
    int v14; // [esp+498h] [ebp-1440h]
    int k; // [esp+49Ch] [ebp-143Ch]
    int v16; // [esp+4A0h] [ebp-1438h]
    int j; // [esp+4A4h] [ebp-1434h]
    int v18; // [esp+4A8h] [ebp-1430h]
    void* v19[4]; // [esp+4ACh] [ebp-142Ch] BYREF
    int v20[1280]; // [esp+4BCh] [ebp-141Ch] BYREF
    int i; // [esp+18BCh] [ebp-1Ch]
    int v22; // [esp+18C0h] [ebp-18h] BYREF
    int v23; // [esp+18C4h] [ebp-14h]
    int v24; // [esp+18C8h] [ebp-10h]
    int v25; // [esp+18D4h] [ebp-4h]

    v1 = alloca(6348);
    *(_DWORD*)(thisx + 104) = 26;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_DWORD*)(thisx + 2528) = 0;
    *(_DWORD*)(thisx + 2540) = 0;
    for (i = 0; i < dword_4B9368; ++i)
    {
        for (j = 0; j < (int)dword_4B93A0; ++j)
            *(_DWORD*)(*((_DWORD*)dword_4B9360 + i) + 4 * j) = 0;
    }
    memset((void*)(thisx + 13044), 0, 8u);
    memset((void*)(thisx + 2564), 0, 0x10u);
    v18 = thisx + 1392;
    for (i = 0; i < 4; ++i)
    {
        v14 = 1;
        v16 = *(_DWORD*)(thisx + 244 * i + 1560);
        for (k = 0; k < 4; ++k)
        {
            if (v16 < *(_DWORD*)(thisx + 244 * k + 1560))
                ++v14;
        }
        *(_BYTE*)(i + thisx + 13044) = v14;
    }
    for (i = 1; i < 5; ++i)
    {
        for (m = 0; m < 4; ++m)
        {
            if (*(unsigned __int8*)(m + thisx + 13044) == i)
                ++* (_BYTE*)(i + thisx + 13047);
        }
    }
    sub_402080((int)v20, 20, 256, (void(*)(int))sub_48A44E);
    sub_482BF0((_DWORD*)v19);
    v25 = 0;
    sub_482C74((int)v19, aDemoKkResult3T);
    v24 = sub_489927((void*)(thisx + 128), (int)v19, (int)v20, 256, &v22);
    if (v24 >= 0)
    {
        *(_WORD*)(thisx + 11404) = sub_485ED0((int)v20, v22, a1st_0, -1);
        *(_WORD*)(thisx + 11406) = sub_485ED0((int)v20, v22, a2nd_0, -1);
        *(_WORD*)(thisx + 11408) = sub_485ED0((int)v20, v22, a3rd_0, -1);
    }
    sub_482C42(v19);
    sub_4898D3((_DWORD*)(thisx + 128));
    sub_4891E4((_DWORD*)(thisx + 128), aDemoKkResult3T_0);
    sub_47F958((_DWORD*)(thisx + 736));
    v23 = 1;
    for (i = 0; i < 5; ++i)
    {
        sub_49DB90(v12);
        v12[14] = 8 * i + 4952720;
        wsprintfA(FileName, "Graphic\\KK_Result3_Body%02d.bmp", i + 1);
        if (sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)v12) >= 0 && v23)
        {
            dword_4B9234 = v12[0];
            v23 = 0;
        }
    }
    for (i = 0; i < 4; ++i)
    {
        v10 = (_BYTE*)sub_472F91((_DWORD*)thisx + 244 * i + 1392);
        if (v10)
        {
            LOBYTE(v8) = sub_4016F0(v10);
            v2 = sub_401710(v10);
            LOWORD(v9) = v2;
            *(_DWORD*)(*((_DWORD*)dword_4B9360 + (unsigned __int8)v8) + 4 * v2) = 1;
        }
    }
    sub_4680EF();
    for (i = 0; i < 4; ++i)
    {
        v7 = *(__int16*)(thisx + 244 * i + 1630) + 1;
        v3 = (_BYTE*)sub_472F91((_DWORD*)thisx + 244 * i + 1392);
        LOWORD(v6) = (unsigned __int8)sub_401710(v3);
        sub_4784EA(v7, (_DWORD)v5);
        sub_485DFD((int)dword_4B93A4 + 24 * (unsigned __int16)v6, (int)v5);
        sub_4A0AE7((void*)(8 * i + 4952720), (int)v5, 256);
    }
    v25 = -1;
    sub_482C2F(v19);
}