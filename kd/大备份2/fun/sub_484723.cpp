#include "sub.h" 
int sub_484723(int thisx, LPCSTR lpFileName)
{
    void* v3; // eax
    char v5[4]; // [esp+4h] [ebp-1E8h] BYREF
    char v6[4]; // [esp+8h] [ebp-1E4h] BYREF
    int k; // [esp+Ch] [ebp-1E0h]
    _DWORD* v8; // [esp+10h] [ebp-1DCh]
    int j; // [esp+14h] [ebp-1D8h]
    _DWORD* v10; // [esp+18h] [ebp-1D4h]
    int v11; // [esp+1Ch] [ebp-1D0h]
    unsigned int v12; // [esp+20h] [ebp-1CCh]
    HANDLE hFile; // [esp+24h] [ebp-1C8h]
    int v14; // [esp+28h] [ebp-1C4h]
    _OWORD v15[8]; // [esp+2Ch] [ebp-1C0h] BYREF
    int v16; // [esp+ACh] [ebp-140h]
    int i; // [esp+B0h] [ebp-13Ch]
    int v18; // [esp+B4h] [ebp-138h]
    int v19; // [esp+B8h] [ebp-134h] BYREF
    int v20; // [esp+BCh] [ebp-130h] BYREF
    unsigned int v21; // [esp+C0h] [ebp-12Ch]
    DWORD NumberOfBytesRead; // [esp+C4h] [ebp-128h] BYREF
    int v23[8]; // [esp+C8h] [ebp-124h] BYREF
    CHAR Buffer[256]; // [esp+E8h] [ebp-104h] BYREF
    size_t Size; // [esp+1E8h] [ebp-4h] BYREF

    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
    {
        hFile = 0;
        return 0;
    }
    else
    {
        v21 = 0;
        ReadFile(hFile, Buffer, 0xFu, (LPDWORD)&NumberOfBytesRead, 0);
        if (lstrcmpiA(Buffer, aKdReplayFile_0))
        {
            CloseHandle(hFile);
            return 0;
        }
        else
        {
            LOBYTE(v20) = 0;
            ReadFile(hFile, &v20, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &dword_4B9980, 4u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B9985, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B9986, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            LOBYTE(v16) = byte_4B9986;
            ReadFile(hFile, byte_4B9988, (unsigned __int8)byte_4B9986, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B9990, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(thisx + 2220), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            if ((unsigned __int8)v20 < 2u)
                byte_4B9984 = 0;
            else
                ReadFile(hFile, &byte_4B9984, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B9998, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B9999, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B999A, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, byte_4B999B, 8u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, byte_4B99A3, 8u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, (LPVOID)(thisx + 2225), 1u, (LPDWORD)&NumberOfBytesRead, 0);
            for (i = 0; i < *(unsigned __int8*)(thisx + 2225); ++i)
                ReadFile(hFile, (LPVOID)(2 * i + 4954540), 2u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99C8, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99C9, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99CA, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99CB, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99CC, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, &byte_4B99CD, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            if ((_BYTE)v20)
            {
                v3 = (void*)sub_485160((char*)byte_4B9B10);
                ReadFile(hFile, v3, 8u, (LPDWORD)&NumberOfBytesRead, 0);
            }
            for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
            {
                v11 = sub_446714(byte_4B9B10, i);
                sub_422C3A(v11, hFile, (unsigned __int8)v20);
            }
            for (i = 0; i < 8; ++i)
            {
                sub_4842BE(thisx + 276 * i + 12);
                sub_4836CD((char*)thisx + 276 * i + 12);
            }
            for (i = 0; i < (unsigned __int8)v16; ++i)
            {
                v10 = (_DWORD*)(thisx + 276 * i + 12);
                for (j = 0; j < 5; ++j)
                {
                    ReadFile(hFile, &Size, 4u, (LPDWORD)&NumberOfBytesRead, 0);
                    v21 += Size;
                    if (!sub_48436B(v10, j, Size))
                    {
                        CloseHandle(hFile);
                        return 0;
                    }
                }
            }
            memset(v23, 0, sizeof(v23));
            memset(v15, 0, sizeof(v15));
            v12 = 0;
            do
            {
                if (!(_BYTE)v16)
                    break;
                ReadFile(hFile, &v19, 1u, (LPDWORD)&NumberOfBytesRead, 0);
                LOBYTE(v18) = v19 & 0xF;
                LOBYTE(v14) = (v19 & 0xF0) >> 4;
                v8 = (_DWORD*)(thisx + 276 * (v19 & 0xF) + 12);
                for (k = 0; k < 16; ++k)
                {
                    if ((_BYTE)v14)
                    {
                        if ((unsigned __int8)v14 > 4u)
                        {
                            CloseHandle(hFile);
                            return 0;
                        }
                        ReadFile(hFile, &v19, 1u, (LPDWORD)&NumberOfBytesRead, 0);
                        sub_484456(v8, v14 - 1, *((_DWORD*)&v15[(unsigned __int8)v18 - 1] + (unsigned __int8)v14 + 3), v19);
                        ++* ((_DWORD*)&v15[(unsigned __int8)v18 - 1] + (unsigned __int8)v14 + 3);
                    }
                    else
                    {
                        ReadFile(hFile, v6, 1u, (LPDWORD)&NumberOfBytesRead, 0);
                        ReadFile(hFile, v5, 1u, (LPDWORD)&NumberOfBytesRead, 0);
                        sub_484410(v8, v23[(unsigned __int8)v18]++, v6[0], v5[0]);
                    }
                    ++v12;
                }
            } while (v12 < v21);
            CloseHandle(hFile);
            for (i = 0; i < (unsigned __int8)v16; ++i)
                sub_484F5F(thisx + 276 * i + 12);
            return 1;
        }
    }
}
