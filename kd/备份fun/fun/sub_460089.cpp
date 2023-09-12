#include "sub.h" 
int sub_460089(int thisx, HANDLE hFile)
{
    DWORD NumberOfBytesWritten; // [esp+4h] [ebp-80h] BYREF
    LPCVOID v5[10]; // [esp+8h] [ebp-7Ch]
    int i; // [esp+30h] [ebp-54h]
    LPCVOID v7[10]; // [esp+34h] [ebp-50h]
    LPCVOID v8[10]; // [esp+5Ch] [ebp-28h]

    WriteFile(hFile, (LPCVOID)(thisx + 2), 0xBu, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 13), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 15), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 20), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 22), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 24), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 16), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 18), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)thisx, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 27), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    v7[0] = (LPCVOID)(thisx + 28);
    v7[1] = (LPCVOID)(thisx + 30);
    v7[2] = (LPCVOID)(thisx + 32);
    v7[3] = (LPCVOID)(thisx + 34);
    v7[4] = (LPCVOID)(thisx + 36);
    v7[5] = (LPCVOID)(thisx + 38);
    v7[6] = (LPCVOID)(thisx + 40);
    v7[7] = (LPCVOID)(thisx + 42);
    v7[8] = (LPCVOID)(thisx + 44);
    v7[9] = (LPCVOID)(thisx + 46);
    for (i = 0; i < 10; ++i)
        WriteFile(hFile, v7[i], 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    v5[0] = (LPCVOID)(thisx + 48);
    v5[1] = (LPCVOID)(thisx + 49);
    v5[2] = (LPCVOID)(thisx + 50);
    v5[3] = (LPCVOID)(thisx + 51);
    v5[4] = (LPCVOID)(thisx + 52);
    v5[5] = (LPCVOID)(thisx + 53);
    v5[6] = (LPCVOID)(thisx + 54);
    v5[7] = (LPCVOID)(thisx + 55);
    v5[8] = (LPCVOID)(thisx + 56);
    v5[9] = (LPCVOID)(thisx + 57);
    for (i = 0; i < 10; ++i)
        WriteFile(hFile, v5[i], 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    v8[0] = (LPCVOID)(thisx + 58);
    v8[1] = (LPCVOID)(thisx + 59);
    v8[2] = (LPCVOID)(thisx + 60);
    v8[3] = (LPCVOID)(thisx + 63);
    v8[4] = (LPCVOID)(thisx + 61);
    v8[5] = (LPCVOID)(thisx + 62);
    v8[6] = (LPCVOID)(thisx + 64);
    v8[7] = (LPCVOID)(thisx + 65);
    v8[8] = (LPCVOID)(thisx + 66);
    v8[9] = (LPCVOID)(thisx + 67);
    for (i = 0; i < 10; ++i)
        WriteFile(hFile, v8[i], 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    for (i = 0; i < 5; ++i)
        WriteFile(hFile, (LPCVOID)(thisx + i + 71), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 68), 3u, (LPDWORD)&NumberOfBytesWritten, 0);
    return 1;
}

