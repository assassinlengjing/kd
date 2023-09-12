#include "sub.h" 
BOOL sub_476928(_DWORD* thisx, char a2)
{
    BOOL result; // eax
    char v3; // [esp+Ch] [ebp-4h]

    if (a2 >= 0 || a2 < -4)
        return 0;
    if (*thisx)
    {
    LABEL_10:
        v3 = ((_BYTE*)thisx - a2)[75];
        if (v3 >= 0)
        {
            return sub_47646A(thisx, v3);
        }
        else
        {
            switch (v3)
            {
            case -4:
                goto LABEL_9;
            case -3:
                goto LABEL_8;
            case -2:
                goto LABEL_7;
            case -1:
                goto LABEL_6;
            default:
                result = 0;
                break;
            }
        }
    }
    else
    {
        switch (a2)
        {
        case -4:
        LABEL_9:
            result = sub_476274(thisx);
            break;
        case -3:
        LABEL_8:
            result = sub_476259(thisx);
            break;
        case -2:
        LABEL_7:
            result = sub_47623E(thisx);
            break;
        case -1:
        LABEL_6:
            result = sub_476223(thisx);
            break;
        default:
            goto LABEL_10;
        }
    }
    return result;
}
