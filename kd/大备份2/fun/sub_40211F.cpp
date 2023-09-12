#include "sub.h" 
void sub_40211F(void* thisx)
{
    sub_41807A((_DWORD*)thisx + 8);
    *(_DWORD*)thisx = off_4AC250;
    *((_DWORD*)thisx + 40) = 0;
    *((_WORD*)thisx + 93) = 0;
    *((_DWORD*)thisx + 82) = 0;
    *((_DWORD*)thisx + 83) = 0;
    *((_DWORD*)thisx + 84) = 0;
    *((_DWORD*)thisx + 106) = 1;
    *((_WORD*)thisx + 102) = 0;
    *((_BYTE*)thisx + 212) = 0;
    *((_BYTE*)thisx + 195) = 3;
    *((_DWORD*)thisx + 107) = 3;
    *((_DWORD*)thisx + 111) = 0;
    *((_BYTE*)thisx + 184) = 0;
    *((_DWORD*)thisx + 99) = 1;
    *((_DWORD*)thisx + 101) = 1;
    *((_DWORD*)thisx + 41) = 0;
    *((_BYTE*)thisx + 248) = 0;
    *((_DWORD*)thisx + 98) = 0;
    *((_DWORD*)thisx + 72) = 0;
    *((_DWORD*)thisx + 73) = 0;
    *((_BYTE*)thisx + 470) = 0;
    *((_BYTE*)thisx + 223) = 0x80;
    memset((char*)thisx + 230, 0, 3u);
    memset((char*)thisx + 453, 0, 8u);
    memset((char*)thisx + 461, 0, 8u);
    sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
    *((_DWORD*)thisx + 33) = (_DWORD)thisx;
    *((_BYTE*)thisx + 176) = 0;
    *((_BYTE*)thisx + 177) = 0;
    *((_DWORD*)thisx + 45) = 0;
}

/*
void VirtualProcessorRoot::~VirtualProcessorRoot(
    VirtualProcessorRoot* thisx)
{
    *(_DWORD*)thisx = &off_4AC250;
    sub_418130((char*)thisx + 8, thisx);
}
*/







