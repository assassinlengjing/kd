#include "sub.h" 
BOOL sub_46DCBB(_DWORD* thisx, int a2, int a3)
{
    int v4; // [esp+4h] [ebp-Ch]
    int i; // [esp+8h] [ebp-8h]

    for (i = 0; i < 6; ++i)
    {
        v4 = *(_DWORD*)(244 * a2 + thisx[3907] + 28 * i);
        if (v4 >= 0)
        {
            if (*((_BYTE*)dword_4B92DC + v4))
            {
                if (a3)
                    return 1;
            }
            else if (!a3)
            {
                return 0;
            }
        }
        else if (!a3)
        {
            return 0;
        }
    }
    return a3 == 0;
}

