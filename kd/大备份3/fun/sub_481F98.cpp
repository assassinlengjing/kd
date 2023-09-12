#include "sub.h" 
int sub_481F98(_WORD* thisx, HANDLE hFile, int a3)
{
    char v5; // [esp+4h] [ebp-14h]
    int v6; // [esp+8h] [ebp-10h]
    char v7; // [esp+Ch] [ebp-Ch]
    int v8; // [esp+10h] [ebp-8h]
    DWORD NumberOfBytesRead; // [esp+14h] [ebp-4h] BYREF

    ReadFile(hFile, thisx + 2, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, thisx + 4, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, (char*)thisx + 9, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if ((_WORD)a3)
    {
        ReadFile(hFile, thisx + 5, 2u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, thisx + 6, 2u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, thisx + 7, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, (char*)thisx + 15, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, thisx + 8, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, (char*)thisx + 17, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    else
    {
        v7 = 0;
        v8 = 0;
        v5 = 1;
        v6 = 0;
        thisx[5] = 0;
        thisx[6] = 0;
        *((_BYTE*)thisx + 14) = 0;
        *((_BYTE*)thisx + 15) = 0;
        *((_BYTE*)thisx + 16) = 50;
        *((_BYTE*)thisx + 17) = 100;
        switch (*((_BYTE*)thisx + 4))
        {
        case 7:
            v8 = 1;
            thisx[5] = -30;
            break;
        case 8:
            v8 = 1;
            thisx[5] = 30;
            break;
        case 0xB:
            *((_BYTE*)thisx + 14) = 8;
            thisx[5] = -30;
            v5 = 2;
            v6 = 1;
            break;
        case 0xC:
            v8 = 1;
            v7 = 11;
            *((_BYTE*)thisx + 14) = 8;
            thisx[5] = 30;
            v5 = 2;
            v6 = 1;
            break;
        case 0xD:
            *((_BYTE*)thisx + 16) = 90;
            *((_BYTE*)thisx + 17) = 10;
            break;
        }
        *((_BYTE*)thisx + 15) = 2 * v5;
        if (v6)
            *((_BYTE*)thisx + 15) |= 8u;
        if (v8)
            *((_BYTE*)thisx + 4) = v7;
    }
    if ((unsigned __int16)a3 < 2u)
    {
        switch (*((_BYTE*)thisx + 4))
        {
        case 2:
            thisx[3] = 1;
            break;
        case 3:
            thisx[3] = 2;
            break;
        case 4:
            thisx[3] = 3;
            break;
        case 9:
            thisx[3] = 4;
            break;
        case 0xE:
            thisx[3] = 5;
            break;
        case 0xF:
            thisx[3] = 6;
            break;
        default:
            thisx[3] = 0;
            break;
        }
        if (thisx[3])
            *((_BYTE*)thisx + 4) = 0;
    }
    else
    {
        ReadFile(hFile, thisx + 3, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    }
    return 1;
}

