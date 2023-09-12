#include "sub.h" 
_DWORD* sub_480BC0(_DWORD* thisx)
{
    sub_47FC70(thisx);
    *thisx = off_4AC304;
    sub_480737(thisx, 8);
    sub_47FE72((int*)thisx[3], (LPCSTR)&byte_4AF907, 1, 1, 9, 3);
    sub_47FEB2(thisx[3] + 32, (LPCSTR)&byte_4AF949, &unk_4AF9BB, 0);
    sub_47FE72((int*)thisx[3] + 64, (LPCSTR)&byte_4AF9CC, 1, 1, 4, 1);
    sub_47FEB2(thisx[3] + 96, (LPCSTR)&byte_4AFA1C, &unk_4AFA76, 1);
    sub_47FE72((int*)thisx[3] + 128, (LPCSTR)&byte_4AFA83, 1, 0, 8, 4);
    sub_47FEB2(thisx[3] + 160, (LPCSTR)&byte_4AFAD7, &unk_4AFB11, 0);
    sub_47FEB2(thisx[3] + 192, (LPCSTR)&byte_4AFB1E, &unk_4AFB11, 1);
    sub_47FEB2(thisx[3] + 224, (LPCSTR)&byte_4AFB6C, &unk_4AFC02, 0);
    *((_BYTE*)thisx + 4) = 10;
    *((_BYTE*)thisx + 5) = 8;
    *((_BYTE*)thisx + 6) = 19;
    *((_BYTE*)thisx + 7) = 14;
    *((_BYTE*)thisx + 29) = 14;
    return thisx;
}

