#include "sub.h" 
void* sub_4A1390(void* thisx, char a2)
{
    sub_4A148B((void**)thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
