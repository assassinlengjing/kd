#include "sub.h" 
int sub_460412(unsigned __int8* thisx, HANDLE hFile)
{
    BOOL v3; // [esp+0h] [ebp-18h]
    int j; // [esp+8h] [ebp-10h]
    DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-Ch] BYREF
    int i; // [esp+10h] [ebp-8h]
    BOOL v8; // [esp+14h] [ebp-4h]

    WriteFile(hFile, thisx + 11968, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 13044, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    v3 = thisx[11690] == 17 && thisx[13060] >= 2u;
    v8 = v3;
    if (v3)
        thisx[11690] = 0;
    WriteFile(hFile, thisx + 11690, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (v8)
        thisx[11690] = 17;
    WriteFile(hFile, thisx + 11691, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11806, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11805, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11814, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11664, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11807, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11614, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11812, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11660, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11683, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 11684, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    for (i = 0; i < 2; ++i)
    {
        WriteFile(hFile, &thisx[i + 11808], 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(hFile, &thisx[i + 11810], 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    }
    WriteFile(hFile, thisx + 11688, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    for (i = 0; i < thisx[11688]; ++i)
    {
        for (j = 0; j < 2; ++j)
            WriteFile(hFile, &thisx[4 * i + 11724 + 2 * j], 2u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(hFile, &thisx[2 * i + 11692], 2u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(hFile, &thisx[i + 11788], 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    }
    for (i = 0; i < 2; ++i)
        sub_460089((int)&thisx[76 * i + 11816], hFile);
    return 1;
}

