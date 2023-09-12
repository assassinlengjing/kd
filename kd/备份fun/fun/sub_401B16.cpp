#include "sub.h" 
void** sub_401B16(int thisx)
{
    *(_BYTE*)(thisx + 4) = 0;
    *(_BYTE*)(thisx + 5) = 0;
    *(_BYTE*)(thisx + 6) = 0;
    *(_BYTE*)(thisx + 7) = 0;
    *(_BYTE*)(thisx + 8) = 0;
    SetRect((LPRECT)(thisx + 16), 0, 0, 0, 0);
    SetRect((LPRECT)(thisx + 80), 0, 0, 0, 0);
    return sub_401E48((void**)thisx + 144);
}

