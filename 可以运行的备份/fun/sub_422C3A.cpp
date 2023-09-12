#include "sub.h" 
int sub_422C3A(int thisx, HANDLE hFile, int a3)
{
    int v3; // eax
    int i; // [esp+4h] [ebp-178h]
    LPVOID v7[12]; // [esp+8h] [ebp-174h]
    int j; // [esp+38h] [ebp-144h]
    LPVOID lpBuffer[11]; // [esp+3Ch] [ebp-140h]
    int v10; // [esp+68h] [ebp-114h]
    int k; // [esp+6Ch] [ebp-110h]
    __int16 Buffer; // [esp+74h] [ebp-108h] BYREF
    DWORD NumberOfBytesRead; // [esp+78h] [ebp-104h] BYREF

    ReadFile(hFile, (LPVOID)(thisx + 484), 0xBu, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 190), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if (dword_4B936C <= *(unsigned __int16*)(thisx + 190))
        *(_WORD*)(thisx + 190) = 0;
    ReadFile(hFile, (LPVOID)(thisx + 192), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    v3 = ReadFile(hFile, &Buffer, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    LOWORD(v3) = Buffer;
    v10 = sub_47C20C(v3);
    if (v10 < 0)
        *(_WORD*)(thisx + 498) = 0;
    else
        *(_WORD*)(thisx + 498) = v10;
    ReadFile(hFile, (LPVOID)(thisx + 195), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if (a3 > 2)
    {
        v7[0] = (LPVOID)(thisx + 496);
        v7[1] = (LPVOID)(thisx + 500);
        v7[2] = (LPVOID)(thisx + 214);
        v7[3] = (LPVOID)(thisx + 502);
        v7[4] = (LPVOID)(thisx + 504);
        v7[5] = (LPVOID)(thisx + 506);
        v7[6] = (LPVOID)(thisx + 508);
        v7[7] = (LPVOID)(thisx + 510);
        v7[8] = (LPVOID)(thisx + 514);
        v7[9] = (LPVOID)(thisx + 516);
        v7[10] = (LPVOID)(thisx + 518);
        v7[11] = (LPVOID)(thisx + 512);
        for (i = 0; i < 12; ++i)
            ReadFile(hFile, v7[i], 2u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    else
    {
        lpBuffer[0] = (LPVOID)(thisx + 496);
        lpBuffer[1] = (LPVOID)(thisx + 500);
        lpBuffer[2] = (LPVOID)(thisx + 502);
        lpBuffer[3] = (LPVOID)(thisx + 504);
        lpBuffer[4] = (LPVOID)(thisx + 506);
        lpBuffer[5] = (LPVOID)(thisx + 508);
        lpBuffer[6] = (LPVOID)(thisx + 510);
        lpBuffer[7] = (LPVOID)(thisx + 514);
        lpBuffer[8] = (LPVOID)(thisx + 516);
        lpBuffer[9] = (LPVOID)(thisx + 518);
        lpBuffer[10] = (LPVOID)(thisx + 512);
        for (j = 0; j < 11; ++j)
            ReadFile(hFile, lpBuffer[j], 2u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    for (k = 0; k < 3; ++k)
        ReadFile(hFile, (LPVOID)(thisx + k + 520), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 193), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 194), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 186), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 188), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (LPVOID)(thisx + 168), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    InternalContextBase::UNSAFE_SetVirtualProcessor(
        (InternalContextBase*)thisx,
        (struct VirtualProcessor*)1);
    *(_DWORD*)(thisx + 524) = 0;
    *(_WORD*)(thisx + 528) = *(_WORD*)(thisx + 190);
    *(_BYTE*)(thisx + 536) = *(_BYTE*)(thisx + 192);
    *(_WORD*)(thisx + 530) = *(_WORD*)(thisx + 498);
    *(_WORD*)(thisx + 538) = *(_WORD*)(thisx + 502);
    *(_WORD*)(thisx + 540) = *(_WORD*)(thisx + 504);
    *(_WORD*)(thisx + 542) = *(_WORD*)(thisx + 506);
    *(_WORD*)(thisx + 544) = *(_WORD*)(thisx + 508);
    *(_WORD*)(thisx + 546) = *(_WORD*)(thisx + 510);
    *(_WORD*)(thisx + 548) = *(_WORD*)(thisx + 512);
    *(_WORD*)(thisx + 550) = *(_WORD*)(thisx + 514);
    *(_WORD*)(thisx + 552) = *(_WORD*)(thisx + 516);
    *(_WORD*)(thisx + 554) = *(_WORD*)(thisx + 518);
    return 1;
}

