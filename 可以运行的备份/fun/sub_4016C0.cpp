#include "sub.h"

void* sub_4016C0(void* thisx, char a2)
{
    sub_4013E8(thisx);
    if ((a2 & 1) != 0)
        delete(thisx);
    return thisx;
}