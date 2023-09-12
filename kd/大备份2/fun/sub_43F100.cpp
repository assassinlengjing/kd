#include "sub.h" 
void* sub_43F100(void* thisx, char a2)
{
    sub_43EED1(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

