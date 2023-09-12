#include "sub.h" 
int sub_440C1D(_DWORD** thisx, int a2)
{
    int v4; // [esp+Ch] [ebp-4h]

    if (a2 >= 0)
    {
        if (a2 > 100)
            a2 = 100;
    }
    else
    {
        a2 = 0;
    }
    if (a2 == 100)
        return (*(int(__stdcall**)(_DWORD*, _DWORD))(*thisx[49] + 60))(thisx[49], 0);
    if (!a2)
        return (*(int(__stdcall**)(_DWORD*, int))(*thisx[49] + 60))(thisx[49], -10000);
    v4 = (__int64)(log10((double)a2 / 100.0) * 1000.0);
    return (*(int(**)(_DWORD*, _DWORD*, int))(*thisx[49] + 60))(thisx[49], thisx[49], v4);
}

