#include "sub.h" 
void* sub_47F160(void* thisx, char a2)
{
    sub_47EFDE(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
