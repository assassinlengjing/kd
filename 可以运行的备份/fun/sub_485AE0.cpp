#include "sub.h" 
_DWORD* sub_485AE0(_DWORD* thisx, char a2)
{
    sub_48578B(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
