#include "sub.h" 
_DWORD* sub_48E960(_DWORD* thisx, char a2)
{
    sub_48E8A4(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

