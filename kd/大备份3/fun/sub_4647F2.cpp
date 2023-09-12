#include "sub.h" 
int sub_4647F2(int thisx, double a2, double a3, double a4)
{
    int result; // eax
    double v5; // st7
    char v6; // al
    char v8[4]; // [esp+4h] [ebp-40h] BYREF
    int v9; // [esp+8h] [ebp-3Ch] BYREF
    _DWORD v10[5]; // [esp+Ch] [ebp-38h] BYREF
    char v11[20]; // [esp+20h] [ebp-24h] BYREF
    __int16 v12; // [esp+34h] [ebp-10h]
    int v13; // [esp+38h] [ebp-Ch]
    int v14; // [esp+3Ch] [ebp-8h]
    int i; // [esp+40h] [ebp-4h]

    sub_4554F8((int*)thisx);
    sub_456AD1((char*)thisx);
    sub_456169((int*)thisx);
    sub_464A8A((char*)thisx);
    unk_4B93AC = 0;
    *(_DWORD*)(thisx + 2488) = 100;
    *(_DWORD*)(thisx + 2492) = 0;
    *(_DWORD*)(thisx + 16136) = 0;
    memset((void*)(thisx + 16120), 0, 8u);
    memset((void*)(thisx + 16128), 0, 8u);
    *(_DWORD*)(thisx + 11376) = 0;
    sub_456617(thisx);
    for (i = 0; i < 8; ++i)
        *(_WORD*)(thisx + 2 * i + 11404) = 0;
    *(_BYTE*)(thisx + 13042) = unk_4B9990 + 1;
    *(_BYTE*)(thisx + 13043) = unk_4B9985 + 1;
    for (i = 0; i < 8; ++i)
    {
        *(_BYTE*)(i + thisx + 13044) = 0;
        *(_BYTE*)(i + thisx + 13052) = 0;
        *(_BYTE*)(i + thisx + 13092) = *(_BYTE*)(i + thisx + 2546);
    }
    if (!unk_4B9974)
        unk_4B9980 = timeGetTime();
    sub_4A2B56(unk_4B9980);
    if (unk_4B9978 && !unk_4B9974)
        sub_483B1D(thisx + 13400, FileName);
    v14 = 0;
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        if (unk_4B999B[i])
        {
            v11[0] = unk_4B999B[i];
            v12 = (unsigned __int8)unk_4B99A3[i];
            v13 = 0;
            sub_464194((_DWORD*)thisx, a2, a3, a4, (int)v11);
            sub_41F24C(thisx + 612 * i + 2628, (Concurrency::details::SchedulerProxy*)(thisx + 196 * v14++ + 7524));
        }
    }
    result = (unsigned __int8)unk_4B999A;
    if (v14 > (unsigned __int8)unk_4B999A)
        unk_4B999A = v14;
    for (i = v14; i < (unsigned __int8)unk_4B999A; ++i)
    {
        sub_4654DA((char*)thisx, &v9, v10);
        v10[2] = 1;
        v5 = sub_477148();
        v8[0] = v6;
        v10[4] = 1;
        sub_464194((_DWORD*)thisx, a2, a3, v5, (int)v8);
        result = i + 1;
    }
    return result;
}
