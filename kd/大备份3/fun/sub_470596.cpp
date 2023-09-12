#include "sub.h" 
int sub_470596(void* thisx, int a2, int a3)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 6; ++i)
    {
        sub_4705D7((int)thisx + 28 * i, a2, a3);
        result = i + 1;
    }
    return result;
}

