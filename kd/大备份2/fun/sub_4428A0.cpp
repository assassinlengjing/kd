#include "sub.h" 
void* sub_4428A0(void* thisx, char a2)
{
    sub_44196C(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

