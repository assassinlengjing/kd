#include "sub.h" 
__int16 sub_41D7FC(unsigned __int16* thisx, int a2)
{
    __int16 result; // ax
    int v3; // [esp+4h] [ebp-4h]

    v3 = a2 + thisx[107];
    if (v3 >= 0)
    {
        if (v3 > 255)
            LOWORD(v3) = 255;
    }
    else
    {
        LOWORD(v3) = 0;
    }
    result = v3;
    thisx[107] = v3;
    return result;
}

