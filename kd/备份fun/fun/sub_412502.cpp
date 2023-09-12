#include "sub.h" 
int sub_412502(int thisx, int a2)
{
    int result; // eax

    if ((unsigned __int8)sub_425E70((char*)a2) == 1)
        *(_DWORD*)(thisx + 424) = sub_425D70((_DWORD*)a2) == 0;
    if (sub_425D70((_DWORD*)a2) == *(_DWORD*)(thisx + 424))
    {
        *(_DWORD*)(thisx + 432) = 55;
        *(_DWORD*)(thisx + 340) = 1600 * (*(_DWORD*)(thisx + 424) - (*(_DWORD*)(thisx + 424) == 0))
            + sub_426090((_DWORD*)a2)
            - *(_DWORD*)(thisx + 328);
    }
    else
    {
        *(_DWORD*)(thisx + 432) = 54;
        *(_DWORD*)(thisx + 340) = 1600 * ((*(_DWORD*)(thisx + 424) == 0) - *(_DWORD*)(thisx + 424))
            + sub_426090((_DWORD*)a2)
            - *(_DWORD*)(thisx + 328);
    }
    *(_DWORD*)(thisx + 304) = a2;
    *(_BYTE*)(thisx + 272) = 0;
    *(_DWORD*)(thisx + 332) = sub_4260B0((int*)a2);
    result = (unsigned __int8)sub_426030((char*)a2) - 1;
    *(_BYTE*)(thisx + 223) = result;
    return result;
}

