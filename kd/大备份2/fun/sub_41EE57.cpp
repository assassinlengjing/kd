#include "sub.h" 
unsigned __int16* sub_41EE57(unsigned __int16* thisx, int a2)
{
    unsigned __int16* result; // eax
    int v3; // [esp+4h] [ebp-4h]

    v3 = a2 + thisx[107];
    if (v3 >= 0)
    {
        if (v3 > thisx[250])
            LOWORD(v3) = thisx[250];
    }
    else
    {
        LOWORD(v3) = 0;
    }
    result = thisx;
    thisx[107] = v3;
    return result;
}

