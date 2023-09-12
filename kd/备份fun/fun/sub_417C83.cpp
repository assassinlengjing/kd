#include "sub.h" 
_BYTE* sub_417C83(int thisx)
{
    _BYTE* result; // eax

    result = (_BYTE*)thisx;
    if (*(_DWORD*)(thisx + 428) != 78 && *(_DWORD*)(thisx + 428) != 79)
    {
        if (*(_DWORD*)(thisx + 432) == 59
            || *(_DWORD*)(thisx + 432) == 60
            || *(_DWORD*)(thisx + 432) == 117
            || *(_DWORD*)(thisx + 432) == 120
            || *(_DWORD*)(thisx + 432) == 121
            || *(_DWORD*)(thisx + 432) == 87)
        {
            *(_DWORD*)(thisx + 432) = 76;
        }
        else if (*(_DWORD*)(thisx + 432) != 76)
        {
            if (*(_DWORD*)(thisx + 392))
                *(_DWORD*)(thisx + 432) = 50;
            else
                *(_DWORD*)(thisx + 432) = 3;
        }
        *(_DWORD*)(thisx + 304) = 0;
        *(_DWORD*)(thisx + 372) = 0;
        *(_DWORD*)(thisx + 376) = 0;
        *(_DWORD*)(thisx + 340) = 0;
        *(_DWORD*)(thisx + 344) = 0;
        *(_DWORD*)(thisx + 348) = 0;
        *(_DWORD*)(thisx + 352) = 0;
        *(_DWORD*)(thisx + 356) = 0;
        *(_DWORD*)(thisx + 360) = 0;
        *(_DWORD*)(thisx + 444) = 0;
        return sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
    }
    return result;
}

