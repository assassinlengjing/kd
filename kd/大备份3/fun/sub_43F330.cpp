#include "sub.h" 
void* sub_43F330(void* thisx, char a2)
{
    sub_43F164(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

