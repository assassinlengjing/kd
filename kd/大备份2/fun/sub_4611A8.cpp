#include "sub.h" 
int sub_4611A8(_BYTE* thisx, int a2, int a3)
{
    int v4; // eax
    int v6; // [esp+4h] [ebp-124h]
    HANDLE hFile; // [esp+8h] [ebp-120h]
    CHAR FileName[260]; // [esp+Ch] [ebp-11Ch] BYREF
    char v9[4]; // [esp+110h] [ebp-18h] BYREF
    int v10; // [esp+114h] [ebp-14h]
    DWORD NumberOfBytesRead; // [esp+118h] [ebp-10h] BYREF
    CHAR Buffer[12]; // [esp+11Ch] [ebp-Ch] BYREF

    wsprintfA(FileName, "Save%02d.dat", a2);
    hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    Buffer[10] = 0;
    ReadFile(hFile, Buffer, 0xAu, (LPDWORD)&NumberOfBytesRead, 0);
    if (lstrcmpiA(Buffer, aKdsavedata_0))
    {
        CloseHandle(hFile);
        return 0;
    }
    else
    {
        v9[0] = 1;
        v4 = ReadFile(hFile, v9, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        v10 = (int)(thisx + 11436);
        v6 = 1;
        if (a3)
        {
            v4 = a3;
            v10 = a3;
            v6 = 0;
        }
        LOBYTE(v4) = v9[0];
        sub_460D5F(thisx, hFile, v4, v10, v6);
        if (v6)
        {
            if (*(_BYTE*)(v10 + 254))
            {
                thisx[11968] = *(_BYTE*)(v10 + 253);
                thisx[13044] = *(_BYTE*)(v10 + 368);
                thisx[13100] = 0;
                sub_45FF40((unsigned char*)thisx);
                sub_466901((_DWORD*)thisx);
            }
        }
        CloseHandle(hFile);
        return 1;
    }
}

