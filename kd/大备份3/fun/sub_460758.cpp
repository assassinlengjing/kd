#include "sub.h" 
int sub_460758(unsigned __int8* thisx, int a2)
{
    HANDLE hFile; // [esp+4h] [ebp-110h]
    CHAR FileName[260]; // [esp+8h] [ebp-10Ch] BYREF
    DWORD NumberOfBytesWritten; // [esp+10Ch] [ebp-8h] BYREF
    char Buffer[4]; // [esp+110h] [ebp-4h] BYREF

    wsprintfA(FileName, "Save%02d.dat", a2);
    hFile = CreateFileA(FileName, 0x40000000u, 0, 0, 4u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    WriteFile(hFile, aKdsavedata, 0xAu, (LPDWORD)&NumberOfBytesWritten, 0);
    Buffer[0] = 7;
    WriteFile(hFile, Buffer, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    sub_460412(thisx, hFile);
    CloseHandle(hFile);
    return 1;
}

