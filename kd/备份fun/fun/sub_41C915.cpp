#include "sub.h" 
int sub_41C915(int thisx)
{
    int v2; // [esp+4h] [ebp-8h]
    int v3; // [esp+8h] [ebp-4h]

    if (*(_BYTE*)(thisx + 188))
    {
        if (*(_BYTE*)(thisx + 188) == 1)
        {
            v2 = 0;
        }
        else if (*(_BYTE*)(thisx + 188) == 2 || *(_BYTE*)(thisx + 188) == 3)
        {
            v2 = 1;
        }
        if (*(_BYTE*)(thisx + 212))
        {
            if (*(unsigned __int16*)(thisx + 204) >= (int)(unsigned __int16)word_4B92F8[v2])
                return 0;
            v3 = *(unsigned __int16*)(thisx + 204);
        }
        else
        {
            v3 = *((unsigned __int16*)*(&dword_4B9310 + v2) + *(unsigned __int16*)(thisx + 204));
        }
        return 152 * v3 + dword_4B92FC[v2];
    }
    else if (*(_BYTE*)(thisx + 212))
    {
        return 152 * *(unsigned __int16*)(thisx + 204) + dword_4B9328[*(unsigned __int8*)(thisx + 195)];
    }
    else
    {
        return dword_4B9324[0] + 152 * *(unsigned __int16*)(thisx + 204);
    }
}

