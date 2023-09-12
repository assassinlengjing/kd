#include "sub.h" 
void* sub_480A90(void* thisx, char a2)
{
    sub_480A3D((_DWORD*)thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

