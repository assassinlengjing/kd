#include "sub.h" 
int sub_49C8A6(int thisx, int* a2, _DWORD* a3)
{
    int result; // eax

    result = thisx;
    if (*(_BYTE*)(thisx + 50440) && *a2 < 2048)
    {
        a2[3] = thisx + 50452;
        if (*(_BYTE*)(thisx + 50443))
            return sub_49C541((_DWORD*)(24 * *a2 + thisx), *(_DWORD*)(thisx + 50520), (int)a2, (tagRECT*)a3);
        else
            return sub_49C541((_DWORD*)(24 * *a2 + thisx), *(_DWORD*)(thisx + 50516), (int)a2, (tagRECT*)a3);
    }
    return result;
}
