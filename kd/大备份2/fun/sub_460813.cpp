#include "sub.h" 
int sub_460813(int thisx, HANDLE hFile, int a3)
{
    int v3; // edx
    LPVOID v6[10]; // [esp+4h] [ebp-80h]
    int i; // [esp+2Ch] [ebp-58h]
    LPVOID v8[10]; // [esp+30h] [ebp-54h]
    LPVOID v9[10]; // [esp+58h] [ebp-2Ch]
    DWORD NumberOfBytesRead; // [esp+80h] [ebp-4h] BYREF

    ReadFile(hFile, (LPVOID)(thisx + 2), 0xBu, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 13), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 15), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 20), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 >= 6u)
        ReadFile(hFile, (LPVOID)(thisx + 22), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    else
        *(_BYTE*)(thisx + 22) = *(unsigned __int16*)(thisx + 20) == 22;
    v3 = (unsigned __int8)a3;
    if ((unsigned __int8)a3 < 3u)
        *(_WORD*)(thisx + 24) = 0;
    else
        ReadFile(hFile, (LPVOID)(thisx + 24), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    LOWORD(v3) = *(_WORD*)(thisx + 24);
    *(_BYTE*)(thisx + 26) = sub_47C20C(v3);
    ReadFile(hFile, (LPVOID)(thisx + 16), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 18), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)thisx, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 27), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    v8[0] = (LPVOID)(thisx + 28);
    v8[1] = (LPVOID)(thisx + 30);
    v8[2] = (LPVOID)(thisx + 32);
    v8[3] = (LPVOID)(thisx + 34);
    v8[4] = (LPVOID)(thisx + 36);
    v8[5] = (LPVOID)(thisx + 38);
    v8[6] = (LPVOID)(thisx + 40);
    v8[7] = (LPVOID)(thisx + 42);
    v8[8] = (LPVOID)(thisx + 44);
    v8[9] = (LPVOID)(thisx + 46);
    for (i = 0; i < 10; ++i)
    {
        if ((unsigned __int8)a3 != 1 || i < 4 || i > 5)
            ReadFile(hFile, v8[i], 2u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    v6[0] = (LPVOID)(thisx + 48);
    v6[1] = (LPVOID)(thisx + 49);
    v6[2] = (LPVOID)(thisx + 50);
    v6[3] = (LPVOID)(thisx + 51);
    v6[4] = (LPVOID)(thisx + 52);
    v6[5] = (LPVOID)(thisx + 53);
    v6[6] = (LPVOID)(thisx + 54);
    v6[7] = (LPVOID)(thisx + 55);
    v6[8] = (LPVOID)(thisx + 56);
    v6[9] = (LPVOID)(thisx + 57);
    for (i = 0; i < 10; ++i)
    {
        if ((unsigned __int8)a3 != 1 || i < 4 || i > 5)
            ReadFile(hFile, v6[i], 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    v9[0] = (LPVOID)(thisx + 58);
    v9[1] = (LPVOID)(thisx + 59);
    v9[2] = (LPVOID)(thisx + 60);
    v9[3] = (LPVOID)(thisx + 63);
    v9[4] = (LPVOID)(thisx + 61);
    v9[5] = (LPVOID)(thisx + 62);
    v9[6] = (LPVOID)(thisx + 64);
    v9[7] = (LPVOID)(thisx + 65);
    v9[8] = (LPVOID)(thisx + 66);
    v9[9] = (LPVOID)(thisx + 67);
    for (i = 0; i < 10; ++i)
    {
        if ((unsigned __int8)a3 != 1 || i < 4 || i > 5)
            ReadFile(hFile, v9[i], 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    for (i = 0; i < 5; ++i)
    {
        if ((unsigned __int8)a3 >= 6u)
            ReadFile(hFile, (LPVOID)(thisx + i + 71), 1u, (LPDWORD)&NumberOfBytesRead, 0);
        else
            *(_BYTE*)(i + thisx + 71) = 0;
    }
    ReadFile(hFile, (LPVOID)(thisx + 68), 3u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 == 1)
    {
        *(_WORD*)(thisx + 36) = (*(unsigned __int16*)(thisx + 34)
            + *(unsigned __int16*)(thisx + 30)
            + *(unsigned __int16*)(thisx + 32))
            / 3;
        *(_WORD*)(thisx + 38) = (*(unsigned __int16*)(thisx + 34)
            + *(unsigned __int16*)(thisx + 30)
            + *(unsigned __int16*)(thisx + 32))
            / 3;
        *(_BYTE*)(thisx + 52) = (*(unsigned __int8*)(thisx + 51)
            + *(unsigned __int8*)(thisx + 49)
            + *(unsigned __int8*)(thisx + 50))
            / 3;
        *(_BYTE*)(thisx + 53) = *(_BYTE*)(thisx + 52);
        *(_BYTE*)(thisx + 61) = 0;
        *(_BYTE*)(thisx + 62) = 0;
    }
    return 1;
}

