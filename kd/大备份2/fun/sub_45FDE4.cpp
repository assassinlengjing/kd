#include "sub.h" 
int sub_45FDE4(_DWORD* thisx, LPCSTR lpFileName)
{
    _DWORD* v3; // [esp+0h] [ebp-30h]
    int* Block; // [esp+8h] [ebp-28h]
    HANDLE hFile; // [esp+10h] [ebp-20h]
    unsigned int i; // [esp+14h] [ebp-1Ch]
    char Buffer[4]; // [esp+18h] [ebp-18h] BYREF
    int v9; // [esp+1Ch] [ebp-14h]
    DWORD NumberOfBytesRead; // [esp+20h] [ebp-10h] BYREF
    int v11; // [esp+2Ch] [ebp-4h]

    sub_45FD81((int)thisx);
    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    ReadFile(hFile, Buffer, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, thisx + 3279, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    v9 = thisx[3279];
    Block = (int*)operator new(12 * v9 + 4);
    v11 = 0;
    if (Block)
    {
        *Block = v9;
        eh_vector_constructor_iterator(Block + 1, 0xCu, v9, sub_48F630, sub_48F666);
            v3 = Block + 1;
    }
    else
    {
        v3 = 0;
    }
    v11 = -1;
    thisx[3280] = (_DWORD)v3;
    for (i = 0; i < thisx[3279]; ++i)
        sub_48F6C5((LPVOID*)(thisx[3280] + 12 * i), hFile);
    CloseHandle(hFile);
    return 1;
}

