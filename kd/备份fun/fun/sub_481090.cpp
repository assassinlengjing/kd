#include "sub.h" 
_DWORD* sub_481090(_DWORD* thisx, char a2)
{
    sub_481010(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

