#include "sub.h" 
_DWORD* sub_482B50(_DWORD* thisx, char a2)
{
    sub_4814F6(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
