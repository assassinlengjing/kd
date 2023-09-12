#include "sub.h" 
int sub_4A0A7B(int thisx, unsigned __int16 a2)
{
    sub_4A0A40(thisx);
    *(_DWORD*)thisx = (_DWORD)operator new(2 * a2);
    if (!*(_DWORD*)thisx)
        return 0;
    *(_WORD*)(thisx + 4) = a2;
    memset(*(void**)thisx, 0, 2 * a2);
    return 1;
}
