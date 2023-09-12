#include "sub.h" 
int sub_456AD1(char* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        sub_47F138(&thisx[40 * i + 10760]);
        result = i + 1;
    }
    return result;
}

