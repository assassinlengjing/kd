#include "sub.h" 
void** sub_48A150(void** thisx)
{
    void** result; // eax

    if (thisx[3])
        operator delete(thisx[3]);
    if (thisx[2])
        operator delete(thisx[2]);
    thisx[3] = 0;
    result = thisx;
    thisx[2] = 0;
    return result;
}
