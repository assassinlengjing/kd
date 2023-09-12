#include "sub.h" 
_DWORD* sub_48F020(_DWORD* thisx, char a2)
{
    sub_48E9CB(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

