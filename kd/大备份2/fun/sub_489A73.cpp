#include "sub.h" 
int sub_489A73(void* thisx, int a2)
{
    if (a2 >= 0 && a2 < 3)
        return (int)thisx + 32 * a2 + 512;
    else
        return 0;
}
