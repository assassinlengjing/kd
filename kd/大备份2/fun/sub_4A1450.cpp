#include "sub.h" 
_DWORD* sub_4A1450(_DWORD* thisx)
{
    memset(thisx + 16, 0, 0x400u);
    thisx[15] = 0;
    thisx[337] = 0;
    return thisx;
}
