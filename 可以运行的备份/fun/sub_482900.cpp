#include "sub.h" 
int sub_482900(_DWORD* thisx, HANDLE hFile, int a3)
{
    int v3; // ecx
    unsigned __int16 i; // [esp+4h] [ebp-Ch]
    int Buffer[2]; // [esp+8h] [ebp-8h] BYREF

    ReadFile(hFile, Buffer, 2u, (LPDWORD)&Buffer[1], 0);
    if (!sub_4822EC((int)thisx, Buffer[0]))
        return 0;
    for (i = 0; i < (int)LOWORD(Buffer[0]); ++i)
    {
        LOWORD(v3) = a3;
        if (!sub_4810DE(56 * i + thisx[4], hFile, v3))
            return 0;
    }
    return 1;
}
