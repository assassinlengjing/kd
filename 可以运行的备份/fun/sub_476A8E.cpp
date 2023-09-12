#include "sub.h" 
BOOL sub_476A8E(_DWORD* thisx, char a2)
{
    BOOL result; // eax

    switch (a2)
    {
    case -4:
        result = sub_476274(thisx);
        break;
    case -3:
        result = sub_476259(thisx);
        break;
    case -2:
        result = sub_47623E(thisx);
        break;
    case -1:
        result = sub_476223(thisx);
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

