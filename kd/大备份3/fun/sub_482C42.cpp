#include "sub.h" 
void sub_482C42(void** thisx)
{
    if (*thisx)
    {
        operator delete(*thisx);
        *thisx = 0;
    }
}
