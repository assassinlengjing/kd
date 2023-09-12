#include "sub.h" 
void sub_4842BE(int thisx)
{
    int i; // [esp+Ch] [ebp-4h]

    if (*(_DWORD*)(thisx + 228))
        operator delete(*(void**)(thisx + 228));
    *(_DWORD*)(thisx + 228) = 0;
    *(_DWORD*)(thisx + 4) = 0;
    for (i = 0; i < 4; ++i)
    {
        if (*(_DWORD*)(thisx + 4 * i + 248))
            operator delete(*(void**)(thisx + 4 * i + 248));
        *(_DWORD*)(thisx + 4 * i + 248) = 0;
        *(_DWORD*)(thisx + 4 * i + 8) = 0;
    }
}
