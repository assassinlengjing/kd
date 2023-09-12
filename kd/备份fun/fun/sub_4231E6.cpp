#include "sub.h" 
int sub_4231E6(unsigned __int16* thisx, HANDLE hFile)
{
    DWORD NumberOfBytesWritten; // [esp+4h] [ebp-140h] BYREF
    int i; // [esp+8h] [ebp-13Ch]
    __int16 Buffer; // [esp+10h] [ebp-134h] BYREF
    LPCVOID lpBuffer[76]; // [esp+14h] [ebp-130h]

    WriteFile(hFile, thisx + 242, 0xBu, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 95, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 96, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    Buffer = unknown_libname_22((int*)dword_4B93A4 + 24 * thisx[249]);
    WriteFile(hFile, &Buffer, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (char*)thisx + 195, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    lpBuffer[0] = thisx + 248;
    lpBuffer[1] = thisx + 250;
    lpBuffer[2] = thisx + 107;
    lpBuffer[3] = thisx + 251;
    lpBuffer[4] = thisx + 252;
    lpBuffer[5] = thisx + 253;
    lpBuffer[6] = thisx + 254;
    lpBuffer[7] = thisx + 255;
    lpBuffer[8] = thisx + 257;
    lpBuffer[9] = thisx + 258;
    lpBuffer[10] = thisx + 259;
    lpBuffer[11] = thisx + 256;
    for (i = 0; i < 12; ++i)
        WriteFile(hFile, lpBuffer[i], 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    for (i = 0; i < 3; ++i)
        WriteFile(hFile, (char*)thisx + i + 520, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (char*)thisx + 193, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 97, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 93, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 94, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, thisx + 84, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    return 1;
}


