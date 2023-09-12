#include "sub.h" 
unsigned int sub_4805DF(unsigned int thisx)
{
    unsigned int result; // eax

    result = unknown_libname_23((_DWORD*)thisx);
    if (result)
    {
        sub_47B91A(
            8 * *(unsigned __int8*)(thisx + 28) + 8 * *(unsigned __int8*)(thisx + 4) - 12,
            16 * (*(_DWORD*)(thisx + 20) - *(_DWORD*)(thisx + 24)) + 8 * *(unsigned __int8*)(thisx + 5) + 12,
            asc_4B6B6C,
            0,
            -1);
        result = dword_4B93B0 / 5u / 2;
        if (!(dword_4B93B0 / 5u % 2))
        {
            if (*(int*)(thisx + 24) > 0)
                sub_47B91A(
                    4 * *(unsigned __int8*)(thisx + 6) + 8 * *(unsigned __int8*)(thisx + 4),
                    8 * *(unsigned __int8*)(thisx + 5),
                    &byte_4B6B70,
                    0,
                    -1);
            result = thisx;
            if ((*(unsigned __int8*)(thisx + 7) - 2) / 2 + *(_DWORD*)(thisx + 24) < *(_DWORD*)(thisx + 16))
                return sub_47B91A(
                    4 * *(unsigned __int8*)(thisx + 6) + 8 * *(unsigned __int8*)(thisx + 4),
                    8 * *(unsigned __int8*)(thisx + 7) + 8 * *(unsigned __int8*)(thisx + 5) - 11,
                    &byte_4B6B74,
                    0,
                    -1);
        }
    }
    return result;
}

