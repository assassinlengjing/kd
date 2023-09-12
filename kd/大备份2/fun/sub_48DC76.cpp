#include "sub.h" 
void sub_48DC76(int thisx, int a2, int a3)
{
    int v3; // [esp+4h] [ebp-4h]

    if (!a2)
    {
        if ((*(_BYTE*)(thisx + *(unsigned __int8*)(a3 + 40) + 336) = *(_BYTE*)(thisx + 313), !*(_DWORD*)(a3 + 24))
            && *(int*)(thisx + 188) >= 0
            || *(_DWORD*)(a3 + 24) && *(int*)(thisx + 220) >= 0)
        {
            if (*(_DWORD*)(a3 + 24))
                v3 = 6;
            else
                v3 = 2;
            *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 8 * v3 + 172);
            *(_DWORD*)(thisx + 8 * v3 + 172) = -1;
            *(_BYTE*)(thisx + 148) = 0;
            *(_DWORD*)(thisx + 152) = 0;
            sub_48A94C(thisx, 0, 1);
        }
    }
}
