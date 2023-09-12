#include "sub.h" 
int sub_41242D(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 304))
    {
        result = sub_425F30((_DWORD*)(thisx + 304));
        if (result == 15)
        {
            if (*(_DWORD*)(thisx + 424) == sub_425D70((_DWORD*)*(_DWORD*)(thisx + 304)))
                *(_DWORD*)(thisx + 432) = 53;
            else
                *(_DWORD*)(thisx + 432) = 52;
            if (*(_BYTE*)(thisx + 188) == 1)
                *(_DWORD*)(thisx + 432) = 52;
            *(_BYTE*)(thisx + 223) = 0x80;
            sub_412502(*(_DWORD*)(thisx + 304), (_DWORD)thisx);
            result = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A1C, -1, 100, 100, 0);
            *(_DWORD*)(thisx + 444) = 0;
        }
        else
        {
            *(_DWORD*)(thisx + 304) = 0;
        }
    }
    return result;
}

