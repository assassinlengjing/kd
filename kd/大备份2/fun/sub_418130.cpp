#include "sub.h" 
void** sub_418130(void** thisx)
{
    void** result; // eax

    if (thisx[13])
        operator delete(thisx[13]);
    thisx[13] = 0;
    if (thisx[14])
        operator delete(thisx[14]);
    result = thisx;
    thisx[14] = 0;
    if (thisx[15])
        operator delete(thisx[15]);
    thisx[15] = 0;
    return result;
}

