#include "sub.h" 
void sub_401870(void* thisx)
{
    int i; // [esp+4h] [ebp-4h]

    sub_401E17((_DWORD*)thisx + 144);
    *(_DWORD*)thisx = (_DWORD)off_4AC24C;
    *((_BYTE*)thisx + 4) = 0;
    *((_BYTE*)thisx + 5) = 0;
    *((_BYTE*)thisx + 6) = 0;
    *((_BYTE*)thisx + 7) = 0;
    *((_BYTE*)thisx + 8) = 0;
    *((_BYTE*)thisx + 9) = 0;
    *((_BYTE*)thisx + 10) = 0;
    *((_BYTE*)thisx + 15) = 0;
    for (i = 0; i < 2; ++i)
    {
        *((_BYTE*)thisx + i + 11) = 0;
        *((_BYTE*)thisx + i + 13) = 0;
    }
    SetRect((LPRECT)thisx + 1, 0, 0, 0, 0);
    SetRect((LPRECT)thisx + 5, 0, 0, 0, 0);
}

