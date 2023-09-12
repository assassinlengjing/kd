#include "sub.h" 
int sub_41B6F5(int thisx)
{
    int result; // eax
    int v3; // [esp+4h] [ebp-4h]

    result = thisx;
    if (*(_DWORD*)(thisx + 304))
    {
        v3 = 207;
        if (*(_BYTE*)(thisx + 188) == 1)
        {
            if (rand() % 2)
                *(_DWORD*)(thisx + 432) = 86;
            else
                *(_DWORD*)(thisx + 432) = 57;
        }
        else if ((*(_BYTE*)(thisx + 188) == 2 || *(_BYTE*)(thisx + 188) == 3)
            && (*(_DWORD*)(thisx + 432) == 57 || *(_DWORD*)(thisx + 432) == 58))
        {
            *(_DWORD*)(thisx + 432) = 99;
        }
        if (*(_DWORD*)(thisx + 432) == 99)
        {
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 113);
        }
        else if (*(_DWORD*)(thisx + 432) == 102)
        {
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 116);
        }
        else if (sub_41BA53(thisx, 0x10u, 0))
        {
            *(_DWORD*)(thisx + 432) = 90;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 110);
        }
        else if (sub_41BA53(thisx, 0x1Bu, 0))
        {
            *(_DWORD*)(thisx + 432) = 93;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 111);
        }
        else if (sub_41BA53(thisx, 0x2Du, 0))
        {
            *(_DWORD*)(thisx + 432) = 101;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 115);
        }
        else if (sub_41BA53(thisx, 0x37u, 0))
        {
            *(_DWORD*)(thisx + 432) = 103;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 117);
        }
        else if (sub_41BA53(thisx, 0x38u, 0))
        {
            *(_DWORD*)(thisx + 432) = 104;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 118);
        }
        else if (sub_41BA53(thisx, 0x39u, 0))
        {
            *(_DWORD*)(thisx + 432) = 105;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 119);
        }
        else if (sub_41BA53(thisx, 0x3Au, 0))
        {
            *(_DWORD*)(thisx + 432) = 106;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 120);
        }
        else if (sub_41BA53(thisx, 0x3Bu, 0))
        {
            *(_DWORD*)(thisx + 432) = 107;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 121);
        }
        else if (sub_41BA53(thisx, 0x47u, 0))
        {
            *(_DWORD*)(thisx + 432) = 108;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 122);
        }
        else if (*(_DWORD*)(thisx + 432) == 86)
        {
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 87);
        }
        else if (*(_DWORD*)(thisx + 432) == 57)
        {
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, 59);
        }
        else
        {
            if (*(_DWORD*)(thisx + 432) == 58)
                v3 = 60;
            return sub_41B990(*(_DWORD*)(thisx + 304), thisx, v3);
        }
    }
    return result;
}

