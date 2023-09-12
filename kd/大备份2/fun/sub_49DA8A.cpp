#include "sub.h" 
_DWORD*  sub_49DA8A(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = thisx;
    if (thisx[12288] && thisx[12288] >= (unsigned int)a2)
    {
        for (i = thisx[12288] - 1; ; --i)
        {
            result = (_DWORD*)i;
            if (i < a2)
                break;
            sub_49B04B(&thisx[6 * i]);
            --thisx[12288];
        }
    }
    return result;
}
