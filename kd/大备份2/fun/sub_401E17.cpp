#include "sub.h" 
_DWORD* sub_401E17(_DWORD* thisx)
{
    *(_BYTE*)thisx = 0;
    thisx[1] = 0;
    return thisx;
}

