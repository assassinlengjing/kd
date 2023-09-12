#include "sub.h" 
_DWORD* sub_488981(_DWORD* thisx)
{
    _DWORD* result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = thisx;
    thisx[86] += thisx[85];
    while ((int)thisx[86] >= 100)
    {
        thisx[86] -= 100;
        for (i = 0; ; ++i)
        {
            result = thisx;
            if (i >= thisx[77])
                break;
            sub_48CD23(432 * i + thisx[82]);
        }
    }
    return result;
}
