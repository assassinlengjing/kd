#include "sub.h" 
HANDLE sub_467BBB(_DWORD* thisx)
{
    HANDLE result; // eax
    CHAR FileName[256]; // [esp+8h] [ebp-100h] BYREF

    for (thisx[3347] = 0; ; ++thisx[3347])
    {
        wsprintfA(FileName, "Stage\\Stage%02d.dat", thisx[3347] + 1);
        result = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
        if (result == (HANDLE)-1)
            break;
        CloseHandle(result);
    }
    return result;
}

