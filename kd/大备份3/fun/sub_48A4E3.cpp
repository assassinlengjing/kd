#include "sub.h" 
int sub_48A4E3(__int16* thisx, unsigned __int8 a2)
{
    if (a2 >= 0x10u)
        return 0;
    if (*((_BYTE*)thisx + a2 + 34))
        return unk_4B9AEC[thisx[a2 + 1]];
    return thisx[a2 + 1];
}
