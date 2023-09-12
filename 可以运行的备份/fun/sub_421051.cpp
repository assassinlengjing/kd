#include "sub.h" 
int sub_421051(_DWORD* thisx)
{
    int result; // eax

    thisx[78] = 0;
    thisx[76] = 0;
    if (thisx[108] == 82)
        thisx[108] = 3;
    result = sub_41BEA6(thisx);
    if (result)
        thisx[35] = 0;
    return result;
}

