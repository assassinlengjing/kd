#include "sub.h" 
int sub_41C48F(int thisx, int a2)
{
    _BYTE* v4; // [esp+4h] [ebp-96Ch]
    int v5; // [esp+8h] [ebp-968h]
    unsigned __int8 v6; // [esp+Ch] [ebp-964h]
    unsigned __int16 v7; // [esp+10h] [ebp-960h]
    int i; // [esp+14h] [ebp-95Ch]
    DWORD NumberOfBytesRead; // [esp+18h] [ebp-958h] BYREF
    char v10[1024]; // [esp+1Ch] [ebp-954h] BYREF
    HANDLE hFile; // [esp+41Ch] [ebp-554h]
    int j; // [esp+420h] [ebp-550h]
    _DWORD Buffer[256]; // [esp+424h] [ebp-54Ch] BYREF
    int v14; // [esp+824h] [ebp-14Ch]
    int v15[15]; // [esp+828h] [ebp-148h] BYREF
    CHAR FileName[260]; // [esp+864h] [ebp-10Ch] BYREF
    int v17; // [esp+968h] [ebp-8h]
    int v18; // [esp+96Ch] [ebp-4h]

    if (*(_BYTE*)(thisx + 188))
        return sub_421238(thisx);
    memset(v10, 0, sizeof(v10));
    sub_49DB90(v15);
    if (*(_BYTE*)(thisx + 195) == 4)
    {
        *(_BYTE*)(thisx + 194) = 1;
    }
    else if (a2 < 0)
    {
        if (a2 == -1)
            *(_BYTE*)(thisx + 194) = *(_BYTE*)(thisx + 193) + 1;
    }
    else
    {
        *(_BYTE*)(thisx + 194) = a2;
    }
    wsprintfA(FileName, "Graphic\\%02dpPalette.bin", *(unsigned __int8*)(thisx + 194));
    hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile != (HANDLE)-1)
    {
        for (i = 0; i < 256; ++i)
            ReadFile(hFile, &Buffer[i], 3u, (LPDWORD)&NumberOfBytesRead, 0);
        CloseHandle(hFile);
    }
    v15[11] = (int)v10;
    v17 = sub_41BA53(thisx, 0x26u, 0);
    v18 = 1;
    if (v17)
        v18 = dword_4B93A0;
    v14 = 1;
    for (j = 0; j < v18; ++j)
    {
        if (!v17 || *((__int16*)dword_4B9394 + j) != -1)
        {
            memcpy(v10, Buffer, sizeof(v10));
            if (v17)
                sub_485DFD((int)dword_4B93A4 + 24 * j, (int)v10);
            else
                sub_485DFD((int)dword_4B93A4 + 24 * *(unsigned __int16*)(thisx + 498), (int)v10);
            v15[1] = 0;
            v15[2] = 0;
            v15[3] = -1;
            v15[4] = -1;
            v15[5] = 1;
            v15[9] = 0;
            v15[0] = -1;
            wsprintfA(FileName, "Graphic\\Body%02d.bmp", *(unsigned __int8*)(thisx + 195) + 1);
            if (!sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)v15))
                return 0;
            if (v14)
            {
                *(_DWORD*)(thisx + 196) = v15[0];
                v14 = 0;
            }
        }
    }
    *(_DWORD*)(*((_DWORD*)dword_4B9360 + *(unsigned __int8*)(thisx + 192)) + 4 * *(unsigned __int16*)(thisx + 498)) = 1;
    if (*(_BYTE*)(thisx + 195) == 4)
    {
        if (*(_DWORD*)(thisx + 168))
        {
            v5 = sub_426590(byte_4B9B10, *(unsigned __int16*)(thisx + 186));
            v6 = sub_426570((char*)v5);
            v7 = (unsigned __int8)sub_426550((char*)v5);
        }
        else
        {
            v4 = (_BYTE*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0);
            v6 = sub_4016F0(v4);
            v7 = (unsigned __int8)sub_401710(v4);
        }
        *(_DWORD*)(*((_DWORD*)dword_4B9360 + v6) + 4 * v7) = 1;
    }
    return 1;
}