#include "sub.h" 
_DWORD* sub_48F5E0(_DWORD* thisx, char a2)
{
    sub_48F08B(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
