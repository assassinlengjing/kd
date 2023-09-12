#include "sub.h" 
_DWORD* sub_485720(_DWORD* thisx, char a2)
{
    sub_4851DB(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

