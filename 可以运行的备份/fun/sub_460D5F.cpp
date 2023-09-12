#include "sub.h" 
int sub_460D5F(void* thisx, HANDLE hFile, int a3, int a4, int a5)
{
    int v5; // eax
    int v6; // ecx
    int m; // [esp+4h] [ebp-14h]
    int i; // [esp+8h] [ebp-10h]
    int j; // [esp+Ch] [ebp-Ch]
    int k; // [esp+10h] [ebp-8h]
    int n; // [esp+10h] [ebp-8h]
    DWORD NumberOfBytesRead; // [esp+14h] [ebp-4h] BYREF

    ReadFile(hFile, (LPVOID)(a4 + 253), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 368), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 254), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 5u)
        *(_BYTE*)(a4 + 255) = *(unsigned __int8*)(a4 + 254) / 2;
    else
        ReadFile(hFile, (LPVOID)(a4 + 255), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 370), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 369), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 5u)
        *(_WORD*)(a4 + 378) = 30 * *(unsigned __int8*)(a4 + 370);
    else
        ReadFile(hFile, (LPVOID)(a4 + 378), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 228), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(a4 + 371), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 2u)
        *(_BYTE*)(a4 + 178) = 4;
    else
        ReadFile(hFile, (LPVOID)(a4 + 178), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 3u)
        *(_BYTE*)(a4 + 376) = 4;
    else
        ReadFile(hFile, (LPVOID)(a4 + 376), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 4u)
        *(_BYTE*)(a4 + 224) = 1;
    else
        ReadFile(hFile, (LPVOID)(a4 + 224), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((unsigned __int8)a3 < 7u)
    {
        *(_BYTE*)(a4 + 247) = 1;
        *(_BYTE*)(a4 + 248) = 0;
    }
    else
    {
        ReadFile(hFile, (LPVOID)(a4 + 247), 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, (LPVOID)(a4 + 248), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    if ((unsigned __int8)a3 < 2u)
    {
        for (i = 0; i < 2; ++i)
        {
            *(_BYTE*)(i + a4 + 372) = 0;
            *(_BYTE*)(i + a4 + 374) = 0;
        }
        *(_BYTE*)(a4 + 252) = 8;
    }
    else
    {
        for (j = 0; j < 2; ++j)
        {
            ReadFile(hFile, (LPVOID)(a4 + j + 372), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(a4 + j + 374), 1u, (LPDWORD)&NumberOfBytesRead, 0);
        }
        ReadFile(hFile, (LPVOID)(a4 + 252), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    for (k = 0; ; ++k)
    {
        v5 = a4;
        v6 = *(unsigned __int8*)(a4 + 252);
        if (k >= v6)
            break;
        for (m = 0; m < 2; ++m)
            ReadFile(hFile, (LPVOID)(a4 + 4 * k + 288 + 2 * m), 2u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, (LPVOID)(a4 + 2 * k + 256), 2u, (LPDWORD)&NumberOfBytesRead, 0);
        if ((unsigned __int8)a3 < 3u)
            *(_BYTE*)(k + a4 + 352) = k % 8;
        else
            ReadFile(hFile, (LPVOID)(a4 + k + 352), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    for (n = 0; n < 2; ++n)
    {
        if (a5)
        {
            LOBYTE(v5) = a3;
            v5 = sub_460813((int)thisx + 76 * n + 11816, hFile, v5);
        }
        else
        {
            LOBYTE(v6) = a3;
            v5 = sub_460813(76 * n + a4, hFile, v6);
        }
    }
    return 1;
}

