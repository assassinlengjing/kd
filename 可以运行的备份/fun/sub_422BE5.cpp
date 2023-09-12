#include "sub.h" 
char sub_422BE5(int thisx)
{
    if (*(_DWORD*)(thisx + 524))
        return *(_BYTE*)(thisx + 536);
    else
        return *(_BYTE*)(thisx + 192);
}

