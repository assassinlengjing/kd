#include "sub.h" 
int sub_46DD55(int a1, double a2, double a3, double a4)
{
    int v6; // [esp+Ch] [ebp-50Ch]
    int k; // [esp+18h] [ebp-500h]
    DWORD NumberOfBytesRead; // [esp+1Ch] [ebp-4FCh] BYREF
    _DWORD Buffer[256]; // [esp+20h] [ebp-4F8h] BYREF
    HANDLE hFile; // [esp+420h] [ebp-F8h]
    CHAR FileName[64]; // [esp+424h] [ebp-F4h] BYREF
    int v12[15]; // [esp+464h] [ebp-B4h] BYREF
    char v13[28]; // [esp+4A0h] [ebp-78h] BYREF
    int v14; // [esp+4BCh] [ebp-5Ch]
    int v15; // [esp+4C0h] [ebp-58h]
    int v16; // [esp+4C4h] [ebp-54h]
    int j; // [esp+4C8h] [ebp-50h]
    int m; // [esp+4CCh] [ebp-4Ch]
    int i; // [esp+4D0h] [ebp-48h]
    int v20; // [esp+4D4h] [ebp-44h]
    CHAR v21[64]; // [esp+4D8h] [ebp-40h] BYREF

    *(_DWORD*)(a1 + 104) = 23;
    *(_DWORD*)(a1 + 2540) = 0;
    *(_BYTE*)(a1 + 2516) = 1;
    *(_BYTE*)(a1 + 2562) = 0;
    *(_DWORD*)(a1 + 2528) = 0;
    memset((void*)(a1 + 2620), 0, 8u);
    memset((void*)(a1 + 2564), 0, 0x10u);
    memset((void*)(a1 + 2580), 0, 8u);
    memset((void*)(a1 + 2612), 0, 8u);
    memset((void*)(a1 + 2588), 0, 8u);
    memset((void*)(a1 + 13092), 0, 8u);
    for (i = 0; i < 4; ++i)
    {
        *(_BYTE*)(i + a1 + 2616) = byte_4B9988[(*(_DWORD*)(a1 + 2368) + 1) * i] + 1;
        if (*(unsigned __int8*)(i + a1 + 2616) > (int)(unsigned __int8)byte_4B9986)
            *(_BYTE*)(i + a1 + 2616) = 0;
    }
    for (i = 0; i < 4; ++i)
    {
        v16 = a1 + 244 * i + 1392;
        v15 = *(_DWORD*)(a1 + 244 * i + 1560);
        *(_BYTE*)(a1 + 244 * i + 1634) = 1;
        for (j = 0; j < 4; ++j)
        {
            v14 = a1 + 244 * j + 1392;
            if (v15 < *(_DWORD*)(a1 + 244 * j + 1560))
                ++* (_BYTE*)(v16 + 242);
        }
    }
    for (i = 0; i < 4; ++i)
        sub_470596((void*)(a1 + 244 * i + 1392), *(unsigned __int8*)(a1 + 2476) == 0, *(_DWORD*)(a1 + 2368));
    for (i = 0; i < 8; ++i)
    {
        sub_41BF1D(a1 + 612 * i + 2628);
        sub_474FB0((_DWORD*)(a1 + 612 * i + 2628), 0);
        sub_474F30((_BYTE*)(a1 + 612 * i + 2628), 0);
    }
    sub_4898D3((_DWORD*)(a1 + 128));
    sub_464A8A((char*)a1);
    for (i = 0; i < 8; ++i)
    {
        v13[0] = 1;
        sub_464194((_DWORD*)a1, a2, a3, a4, (int)v13);
    }
    v20 = 1;
    for (i = 0; i < 5; ++i)
    {
        sub_49DB90(v12);
        v12[14] = (int)word_4B9290;
        wsprintfA(v21, "Graphic\\Body%02d.bmp", i + 1);
        if (sub_49DA45((int*)byte_4BDC60, v21, (int)v12) && v20)
        {
            dword_4B9234 = v12[0];
            v20 = 0;
        }
    }
    for (i = 0; i < 4; ++i)
    {
        wsprintfA(FileName, "Graphic\\%02dpPalette.bin", *(__int16*)(a1 + 244 * i + 1630) + 1);
        hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
        if (hFile != (HANDLE)-1)
        {
            for (k = 0; k < 256; ++k)
                ReadFile(hFile, &Buffer[k], 3u, (LPDWORD)&NumberOfBytesRead, 0);
            CloseHandle(hFile);
        }
        sub_4A0AE7((void*)(8 * i + 4952656), (int)Buffer, 256);
    }
    for (m = 0; m < 4; ++m)
    {
        for (i = 0;
            i < 2
            && (i <= 0 || *(_DWORD*)(a1 + 2368))
            && (!*(_DWORD*)(a1 + 2368) || i <= *(unsigned __int8*)(m + a1 + 2612));
            ++i)
        {
            v6 = (unsigned __int8)sub_401710((_BYTE*)(36
                * *(_DWORD*)(28 * *(unsigned __int8*)(a1 + i + 2 * m + 2580)
                    + a1
                    + 244 * m
                    + 1392)
                + dword_4B92E0));
            sub_4A1307(8 * (i + 2 * m) + 4952720, (Concurrency::details::HardwareAffinity*)(8 * m + 4952656));
            sub_485E5A((int)dword_4B93A4 + 24 * v6, (unsigned __int16*)(8 * (i + 2 * m) + 4952720));
        }
    }
    sub_46D3E1();
    sub_46F18C(a1, -1);
    return sub_456D33((const CHAR*)a1, aUndoukaiCharse, 1, 0);
}