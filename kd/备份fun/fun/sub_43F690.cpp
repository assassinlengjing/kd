#include "sub.h" 
_DWORD* sub_43F690(_DWORD* thisx)
{
    int i; // [esp+4h] [ebp-4h]
    int j; // [esp+4h] [ebp-4h]

    *thisx = 0;
    thisx[1] = 0;
    for (i = 0; i < 16; ++i)
    {
        thisx[i + 2] = 0;
        thisx[i + 18] = -1;
    }
    for (j = 0; j < 2; ++j)
        thisx[j + 68] = (_DWORD)CreateEventA(0, 0, 0, 0);
    thisx[34] = 0;
    thisx[35] = 0;
    *((_BYTE*)thisx + 154) = 0;
    thisx[44] = -1;
    memset(thisx + 36, 0, 0xAu);
    thisx[41] = 0;
    thisx[43] = 0;
    thisx[40] = 1;
    thisx[48] = 0;
    thisx[50] = 0;
    thisx[52] = 0;
    thisx[49] = 0;
    return thisx;
}

