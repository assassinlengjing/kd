#include "sub.h" 
int sub_4805AD(_DWORD* thisx)
{
    if (thisx[2])
        return thisx[2] + *(unsigned __int16*)(thisx[3] + 2 * thisx[4]);
    else
        return 0;
}
