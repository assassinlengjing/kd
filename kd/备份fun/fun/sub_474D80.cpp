#include "sub.h" 
_DWORD* sub_474D80(_DWORD* thisx, char a2)
{
    sub_442E54(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

