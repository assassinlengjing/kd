#include "sub.h" 
_DWORD* sub_480B90(_DWORD* thisx, char a2)
{
    sub_480AEA(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
