#include "sub.h" 
int(*** sub_489289(void* thisx))(_DWORD, int)
{
    int( * **result)(_DWORD, int); // eax
    int i; // [esp+4h] [ebp-4h]

    result = sub_4869CF((int)thisx);
    for (i = 0; i < 3; ++i)
    {
        sub_401404((int)thisx + 32 * i + 512);
        result = (int(***)(_DWORD, int))(i + 1);
    }
    return result;
}
