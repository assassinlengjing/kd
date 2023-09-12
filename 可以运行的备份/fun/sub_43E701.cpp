#include "sub.h" 
int sub_43E701(void** thisx)
{
    int result; // eax
    int i; // [esp+Ch] [ebp-4h]
    int j; // [esp+Ch] [ebp-4h]

    for (i = 0; i < 4; ++i)
    {
        if (thisx[i + 10])
            operator delete(thisx[i + 10]);
        thisx[i + 10] = 0;
        result = i + 1;
    }
    for (j = 0; j < 5; ++j)
    {
        if (thisx[j + 14])
            operator delete(thisx[j + 14]);
        thisx[j + 14] = 0;
        result = j + 1;
    }
    return result;
}

