#include "sub.h" 
void** sub_401E48(void** thisx)
{
    void** result; // eax

    result = thisx;
    if (thisx[1])
        operator delete(thisx[1]);
    *(_BYTE*)thisx = 0;
    thisx[1] = 0;
    return result;
}

