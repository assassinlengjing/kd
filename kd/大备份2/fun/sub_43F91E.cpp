#include "sub.h" 
int sub_43F91E(_DWORD* thisx)
{
    int result; // eax

    result = (int)thisx;
    if (*thisx)
    {
        result = (*(int(**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 8))(*thisx, *thisx);
        *thisx = 0;
    }
    *((_BYTE*)thisx + 4) = 0;
    return result;
}

