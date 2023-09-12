#include "sub.h" 
int sub_465804(_DWORD* thisx, _DWORD* a2)
{
    int i; // [esp+4h] [ebp-4h]

    if (!a2)
        return 0;
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        if (a2 != &thisx[153 * i + 657] && a2 == (_DWORD*)sub_426430(&thisx[153 * i + 657]))
            return (int)&thisx[153 * i + 657];
    }
    return 0;
}

