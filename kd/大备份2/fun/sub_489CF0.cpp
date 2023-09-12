#include "sub.h" 
_DWORD* sub_489CF0(_DWORD* thisx, char a2)
{
    sub_486119(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

