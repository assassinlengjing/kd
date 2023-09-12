#include "sub.h" 
_DWORD* sub_480F30(_DWORD* thisx)
{
    sub_47FC70(thisx);
    *thisx = off_4AC318;
    sub_480737(thisx, 4);
    sub_47FE72((int*)thisx[3], (LPCSTR)&byte_4AFC1A, 0, 0, 0, 0);
    sub_47FEB2(thisx[3] + 32, (LPCSTR)&byte_4AFC4C, &unk_4AFB11, 1);
    sub_47FEB2(thisx[3] + 64, (LPCSTR)&byte_4AFCA0, &unk_4AFD14, 0);
    sub_47FE72((int*)thisx[3] + 96, (LPCSTR)&byte_4AFD21, 0, 0, 0, 0);
    *((_BYTE*)thisx + 4) = 9;
    *((_BYTE*)thisx + 5) = 10;
    *((_BYTE*)thisx + 6) = 21;
    *((_BYTE*)thisx + 7) = 10;
    *((_BYTE*)thisx + 29) = 15;
    return thisx;
}

