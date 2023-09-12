#include "sub.h" 
int sub_464A8A(char* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        sub_494AC9((_DWORD)&thisx[196 * i + 7524]);
        result = i + 1;
    }
    return result;
}

