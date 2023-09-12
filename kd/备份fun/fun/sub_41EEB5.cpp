#include "sub.h" 
int sub_41EEB5(_BYTE* thisx, _DWORD* a2, char a3)
{
    int v4; // [esp+4h] [ebp-8h]
    int v5; // [esp+8h] [ebp-4h]

    if (!a2)
        return 0;
    v5 = 0;
    if (thisx[188])
    {
        if (thisx[188] == 1)
        {
            v4 = 0;
        }
        else if (thisx[188] == 2 || thisx[188] == 3)
        {
            v4 = 1;
        }
        return dword_4B9308[v4] + 12 * (unsigned __int16)sub_401BEF(a2, a3);
    }
    else
    {
        if (thisx[212] == 1)
            v5 = (unsigned __int8)thisx[195] + 1;
        return dword_4B9348[v5] + 12 * (unsigned __int16)sub_401BEF(a2, a3);
    }
}

