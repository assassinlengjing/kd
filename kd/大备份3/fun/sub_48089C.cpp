#include "sub.h" 
int sub_48089C(int thisx, int a2)
{
    int result; // eax
    int v3; // [esp+4h] [ebp-4h]

    if (a2 >= 0)
    {
        result = thisx;
        if (a2 < *(_DWORD*)(thisx + 16))
        {
            v3 = (*(unsigned __int8*)(thisx + 7) - 2) / 2;
            *(_DWORD*)(thisx + 20) = a2;
            if (*(_DWORD*)(thisx + 24) <= *(_DWORD*)(thisx + 20))
            {
                result = thisx;
                if (v3 + *(_DWORD*)(thisx + 24) <= *(_DWORD*)(thisx + 20))
                {
                    result = thisx;
                    *(_DWORD*)(thisx + 24) = *(_DWORD*)(thisx + 20) - v3 + 1;
                }
            }
            else
            {
                result = thisx;
                *(_DWORD*)(thisx + 24) = *(_DWORD*)(thisx + 20);
            }
        }
    }
    return result;
}
