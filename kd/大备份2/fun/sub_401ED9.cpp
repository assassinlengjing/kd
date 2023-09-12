#include "sub.h" 
int sub_401ED9(_BYTE* thisx, HANDLE hFile, int a3)
{
    void* v4; // [esp+0h] [ebp-28h]
    void* Block; // [esp+8h] [ebp-20h]
    int i; // [esp+10h] [ebp-18h]
    DWORD NumberOfBytesRead; // [esp+14h] [ebp-14h] BYREF
    int v9; // [esp+18h] [ebp-10h]
    int v10; // [esp+24h] [ebp-4h]

    sub_401E48((void**)thisx);
    if (a3)
        ReadFile(hFile, thisx, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    else
        *thisx = 2;
    v9 = *thisx;
    Block = operator new(8 * v9);
    v10 = 0;
    if (Block)
    {
        sub_402080((int)Block, 8, v9, (void(*)(int))sub_401B7C);
        v4 = Block;
    }
    else
    {
        v4 = 0;
    }
    v10 = -1;
    *((_DWORD*)thisx + 1) = (_DWORD)v4;
    if (*((_DWORD*)thisx + 1))
    {
        for (i = 0; i < *thisx; ++i)
        {
            ReadFile(hFile, (LPVOID)(*((_DWORD*)thisx + 1) + 8 * i), 2u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(*((_DWORD*)thisx + 1) + 8 * i + 2), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(*((_DWORD*)thisx + 1) + 8 * i + 4), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(*((_DWORD*)thisx + 1) + 8 * i + 6), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(*((_DWORD*)thisx + 1) + 8 * i + 7), 1u, (LPDWORD)&NumberOfBytesRead, 0);
        }
        return 1;
    }
    else
    {
        sub_401E48((void**)thisx);
        return 0;
    }
}

