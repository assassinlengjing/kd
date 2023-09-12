#include "sub.h" 
int sub_49B04B(_DWORD* thisx)
{
    int result; // eax

    result = (int)thisx;
    if (*thisx)
    {
        result = (*(int(**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 8))(*thisx, *thisx);
        *thisx = 0;
    }
    if (thisx[3])
    {
        operator delete((void*)thisx[3]);
        result = (int)thisx;
        thisx[3] = 0;
    }
    thisx[4] = 0;
    return result;
}

