#include "sub.h" 
int sub_417780(int thisx)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-Ch]

    result = thisx;
    if (*(_DWORD*)(thisx + 292))
    {
        if (*(_DWORD*)(thisx + 304))
        {
            *(_DWORD*)(thisx + 388) = sub_426270(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 328) = sub_426090(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 332) = sub_4260B0(*(_DWORD**)(thisx + 304));
            result = sub_4260D0(*(_DWORD**)(thisx + 304)) - 2400;
            *(_DWORD*)(thisx + 336) = result;
        }
    }
    else if (*(_DWORD*)(thisx + 428) == 69)
    {
        result = thisx;
        if (*(_DWORD*)(thisx + 304))
        {
            *(_DWORD*)(thisx + 328) = sub_426090(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 332) = sub_4260B0(*(_DWORD**)(thisx + 304));
            *(_BYTE*)(thisx + 223) = sub_426030(*(char**)(thisx + 304)) + 1;
            result = sub_4260D0(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 336) = result;
        }
    }
    else if (*(_DWORD*)(thisx + 428) == 56)
    {
        result = thisx;
        if (*(_DWORD*)(thisx + 304))
        {
            v2 = *(_DWORD*)(thisx + 332) - sub_4260B0(*(_DWORD**)(thisx + 304)) <= 0 ? sub_4260B0(*(_DWORD**)(thisx + 304))
                - *(_DWORD*)(thisx + 332) : *(_DWORD*)(thisx + 332) - sub_4260B0(*(_DWORD**)(thisx + 304));
            result = v2;
            if (v2 >= 1)
            {
                result = sub_4260B0(*(_DWORD**)(thisx + 304));
                *(_DWORD*)(thisx + 332) = result;
            }
        }
    }
    return result;
}

