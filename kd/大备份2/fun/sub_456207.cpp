#include "sub.h" 
int sub_456207()
{
    int m; // [esp+4h] [ebp-960h]
    DWORD v2; // [esp+8h] [ebp-95Ch] BYREF
    int k; // [esp+Ch] [ebp-958h]
    int v4; // [esp+10h] [ebp-954h]
    int i; // [esp+14h] [ebp-950h]
    DWORD NumberOfBytesRead; // [esp+18h] [ebp-94Ch] BYREF
    _DWORD v7[256]; // [esp+1Ch] [ebp-948h] BYREF
    HANDLE hFile; // [esp+41Ch] [ebp-548h]
    int j; // [esp+420h] [ebp-544h]
    _DWORD Buffer[256]; // [esp+424h] [ebp-540h] BYREF
    int v11; // [esp+824h] [ebp-140h] BYREF
    int v12; // [esp+828h] [ebp-13Ch]
    int v13; // [esp+82Ch] [ebp-138h]
    int v14; // [esp+830h] [ebp-134h]
    int v15; // [esp+834h] [ebp-130h]
    int v16; // [esp+838h] [ebp-12Ch]
    int v17; // [esp+848h] [ebp-11Ch]
    _DWORD* v18; // [esp+850h] [ebp-114h]
    CHAR FileName[260]; // [esp+860h] [ebp-104h] BYREF

    memset(v7, 0, sizeof(v7));
    memset(Buffer, 0, sizeof(Buffer));
    sub_49DB90(&v11);
    wsprintfA(FileName, aGraphic02ppale);
    hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile != (HANDLE)-1)
    {
        for (i = 0; i < 256; ++i)
            ReadFile(hFile, &Buffer[i], 3u, (LPDWORD)&NumberOfBytesRead, 0);
        CloseHandle(hFile);
    }
    v18 = v7;
    for (j = 0; j < 4; ++j)
    {
        v4 = 1;
        for (k = 0; k < (int)dword_4B93A0; ++k)
        {
            if (*((__int16*)dword_4B9394 + k) >= 0 && *((__int16*)*(&dword_4B9370 + j) + k) >= 0)
            {
                memcpy(v7, Buffer, sizeof(v7));
                sub_485DFD((int)dword_4B93A4 + 24 * k, (int)v7);
                v12 = 0;
                v13 = 0;
                v14 = -1;
                v15 = -1;
                v16 = 1;
                v17 = 0;
                v11 = -1;
                wsprintfA(FileName, "Graphic\\Body%02d.bmp", j + 1);
                if (!sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)&v11))
                    return 0;
                if (v4)
                {
                    dword_4B9220[j] = v11;
                    v4 = 0;
                }
            }
        }
    }
    wsprintfA(FileName, aGraphic01ppale);
    hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile != (HANDLE)-1)
    {
        for (m = 0; m < 256; ++m)
            ReadFile(hFile, &v7[m], 3u, (LPDWORD)&v2, 0);
        v18 = v7;
        CloseHandle(hFile);
    }
    j = 4;
    v12 = 0;
    v13 = 0;
    v14 = -1;
    v15 = -1;
    v16 = 1;
    v17 = 0;
    v11 = -1;
    wsprintfA(FileName, "Graphic\\Body%02d.bmp", 5);
    if (!sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)&v11))
        return 0;
    dword_4B9220[j] = v11;
    return 1;
}

