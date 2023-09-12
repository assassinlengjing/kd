#include "sub.h" 
void sub_485B78(void* thisx)
{
    *(_DWORD*)thisx = off_4AC360;
    if (*((_DWORD*)thisx + 4))
        operator delete(*((void**)thisx + 4));
    if (*((_DWORD*)thisx + 5))
        operator delete(*((void**)thisx + 5));
}
