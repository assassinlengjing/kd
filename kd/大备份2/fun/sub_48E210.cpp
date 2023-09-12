#include "sub.h" 
_DWORD* sub_48E210(_DWORD* thisx)
{
    sub_47FC70(thisx);
    *thisx = off_4AC374;
    sub_480737(thisx, 9);
    sub_47FEB2(thisx[3], (LPCSTR)&byte_4B1F62, &unk_4B1F9C, 2);
    sub_47FEB2(thisx[3] + 32, (LPCSTR)&byte_4B21D4, &unk_4B0C59, 0);
    sub_47FEB2(thisx[3] + 64, (LPCSTR)&byte_4B2246, &unk_4B1FC8, 0);
    sub_47FE72((int*)thisx[3] + 96, (LPCSTR)&byte_4B22F2, 1, 0, 8, 4);
    sub_47FE72((int*)thisx[3] + 128, (LPCSTR)&byte_4B2352, 1, 2, 16, 8);
    sub_47FE72((int*)thisx[3] + 160, &byte_4B23F0, 1, 2, 4, 4);
    sub_47FEB2(thisx[3] + 192, (LPCSTR)&byte_4B2746, &unk_4B0C59, 1);
    sub_47FEB2(thisx[3] + 224, (LPCSTR)&byte_4B279E, &unk_4B2A50, 1);
    sub_47FEB2(thisx[3] + 256, (LPCSTR)&byte_4B2A5D, &unk_4B2A75, 0);
    *((_BYTE*)thisx + 7) = 16;
    *((_BYTE*)thisx + 6) = 25;
    *((_BYTE*)thisx + 29) = 19;
    return thisx;
}

