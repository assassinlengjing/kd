#include "sub.h" 
_DWORD* sub_47FC40(_DWORD* thisx, char a2)
{
    sub_47F1FD(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
