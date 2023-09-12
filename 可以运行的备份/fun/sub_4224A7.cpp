#include "sub.h" 
int sub_4224A7(void* thisx)
{
    int v2; // [esp+4h] [ebp-4h]

    v2 = sub_41CA5F((int)thisx, 0) + 5;
    if (v2 < 50)
        return 50;
    return v2;
}

