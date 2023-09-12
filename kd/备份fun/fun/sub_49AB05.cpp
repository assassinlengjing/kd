#include "sub.h" 
unsigned __int16* sub_49AB05(int thisx, int* a2)
{
    unsigned __int16* result; // eax
    struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

    result = (unsigned __int16*)thisx;
    if (*(_BYTE*)(thisx + 50440) && *a2 < 2048)
    {
        if (a2[8])
        {
            a2[3] = thisx + 50452;
        }
        else
        {
            SetRect(&rc, 0, 0, *(__int16*)(thisx + 50448), *(__int16*)(thisx + 50450));
            a2[3] = (int)&rc;
        }
        a2[4] = 256;
        a2[5] = 256;
        if (*(_BYTE*)(thisx + 50443))
            return sub_49ABE2((unsigned __int16*)(24 * *a2 + thisx), *(_DWORD*)(thisx + 50520), (int)a2);
        else
            return sub_49ABE2((unsigned __int16*)(24 * *a2 + thisx), *(_DWORD*)(thisx + 50516), (int)a2);
    }
    return result;
}
