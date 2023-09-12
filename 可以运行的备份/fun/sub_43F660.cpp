#include "sub.h" 
_DWORD* sub_43F660(_DWORD* thisx, char a2)
{
    sub_43F51F(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

