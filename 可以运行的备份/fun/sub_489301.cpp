#include "sub.h" 
void** sub_489301(void** thisx)
{
    void** result; // eax

    result = thisx;
    if (thisx[1])
        operator delete(thisx[1]);
    thisx[1] = 0;
    *thisx = (void*)-1;
    return result;
}
