#include "sub.h" 
void sub_47FDAB(void* thisx)
{
    if (*(_DWORD*)thisx)
        operator delete(*(void**)thisx);
    if (*((_DWORD*)thisx + 2))
        operator delete(*((void**)thisx + 2));
    if (*((_DWORD*)thisx + 3))
        operator delete(*((void**)thisx + 3));
}

