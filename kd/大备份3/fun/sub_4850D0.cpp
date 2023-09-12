#include "sub.h" 
_DWORD* sub_4850D0(_DWORD* thisx, char a2)
{
    sub_4833CE(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
