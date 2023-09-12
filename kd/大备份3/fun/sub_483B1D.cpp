#include "sub.h" 
int sub_483B1D(int thisx, LPCSTR lpFileName)
{
    int v3; // eax
    const void* v4; // eax
    int v6; // [esp+4h] [ebp-12Ch] BYREF
    unsigned __int16* v7; // [esp+8h] [ebp-128h]
    DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-124h] BYREF
    int v9; // [esp+10h] [ebp-120h] BYREF
    int v10; // [esp+14h] [ebp-11Ch] BYREF
    int i; // [esp+18h] [ebp-118h]
    char v12[4]; // [esp+1Ch] [ebp-114h] BYREF
    char Buffer[4]; // [esp+20h] [ebp-110h] BYREF
    int v14; // [esp+24h] [ebp-10Ch] BYREF
    int v15; // [esp+28h] [ebp-108h] BYREF
    CHAR String[256]; // [esp+30h] [ebp-100h] BYREF

    sub_484175(thisx);
    for (i = 0; i < 8; ++i)
    {
        sub_4842BE(thisx + 276 * i + 12);
        sub_4836CD((char*)thisx + 276 * i + 12);
    }
    *(_DWORD*)(thisx + 4) = (int)CreateFileA(lpFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0);
    if (*(_DWORD*)(thisx + 4) == -1)
    {
        *(_DWORD*)(thisx + 4) = 0;
        return 0;
    }
    else
    {
        wsprintfA(String, aKdReplayFile);
        v3 = lstrlenA(String);
        WriteFile(*(HANDLE*)(thisx + 4), String, v3 + 1, (LPDWORD)&NumberOfBytesWritten, 0);
        Buffer[0] = 3;
        WriteFile(*(HANDLE*)(thisx + 4), Buffer, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v14 = unk_4B9980;
        WriteFile(*(HANDLE*)(thisx + 4), &v14, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
        LOBYTE(v9) = unk_4B9985;
        WriteFile(*(HANDLE*)(thisx + 4), &v9, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        LOBYTE(v10) = unk_4B9986;
        WriteFile(*(HANDLE*)(thisx + 4), &v10, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        for (i = 0; i < (unsigned __int8)v10; ++i)
        {
            v12[0] = unk_4B9988[i];
            WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        }
        v12[0] = unk_4B9990;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = sub_425CD0((_DWORD*)unk_4B9B10);
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), &unk_4B9984, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), &unk_4B9998, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = unk_4B9999;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), &unk_4B999A, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), (LPVOID)unk_4B999B, 8u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), (LPVOID)unk_4B99A3, 8u, (LPDWORD)&NumberOfBytesWritten, 0);
        LOBYTE(v15) = 14;
        WriteFile(*(HANDLE*)(thisx + 4), &v15, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        for (i = 0; i < (unsigned __int8)v15; ++i)
            WriteFile(*(HANDLE*)(thisx + 4), (LPCVOID)(2 * i + 4954540), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = unk_4B99C8;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = unk_4B99C9;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = unk_4B99CA;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), &unk_4B99CB, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        WriteFile(*(HANDLE*)(thisx + 4), &unk_4B99CC, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v12[0] = unk_4B99CD;
        WriteFile(*(HANDLE*)(thisx + 4), v12, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
        v4 = (const void*)sub_485160((char*)unk_4B9B10);
        WriteFile(*(HANDLE*)(thisx + 4), v4, 8u, (LPDWORD)&NumberOfBytesWritten, 0);
        for (i = 0; i < (unsigned __int8)v9; ++i)
        {
            v7 = (unsigned __int16*)sub_446714(unk_4B9B10, i);
            sub_4231E6(v7, *(HANDLE*)(thisx + 4));
        }
        *(_DWORD*)(thisx + 8) = SetFilePointer(*(HANDLE*)(thisx + 4), 0, 0, 1u);
        for (i = 0; i < (unsigned __int8)v10; ++i)
        {
            v6 = 0;
            WriteFile(*(HANDLE*)(thisx + 4), &v6, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
            WriteFile(*(HANDLE*)(thisx + 4), &v6, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
            WriteFile(*(HANDLE*)(thisx + 4), &v6, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
            WriteFile(*(HANDLE*)(thisx + 4), &v6, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
            WriteFile(*(HANDLE*)(thisx + 4), &v6, 4u, (LPDWORD)&NumberOfBytesWritten, 0);
        }
        return 1;
    }
}
