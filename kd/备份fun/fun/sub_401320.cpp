#include "sub.h"
void* sub_401320(_DWORD* thisx, char a2)
{
    sub_401119(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}