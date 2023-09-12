#include "sub.h" 
char* sub_4836CD(char* thisx)
{
    char* result; // eax
    int i; // [esp+4h] [ebp-4h]

    thisx[24] = 0;
    *(_DWORD*)thisx = 0;
    *((_DWORD*)thisx + 1) = 0;
    memset(thisx + 8, 0, 0x10u);
    memset(thisx + 25, 0, 4u);
    memset(thisx + 29, 0, 0x40u);
    memset(thisx + 93, 0, 0x80u);
    *((_DWORD*)thisx + 57) = 0;
    *((_DWORD*)thisx + 56) = 0;
    result = thisx;
    thisx[264] = 0;
    thisx[269] = 0;
    thisx[270] = 0;
    for (i = 0; i < 4; ++i)
    {
        *(_DWORD*)&thisx[4 * i + 248] = 0;
        thisx[i + 265] = 0;
        *(_DWORD*)&thisx[4 * i + 232] = 0;
        thisx[i + 271] = 0;
        result = (char*)(i + 1);
    }
    return result;
}
