#include "sub.h" 
void sub_4A148B(void** thisx)
{
    if (thisx[15])
    {
        operator delete(thisx[15]);
        thisx[15] = 0;
    }
}
