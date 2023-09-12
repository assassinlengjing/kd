#include "sub.h" 
void* sub_4410B0(void* thisx, char a2)
{
    sub_440DE2(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}

