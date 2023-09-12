#include "sub.h" 
int sub_41BA53(int thisx, unsigned __int8 a2, int a3)
{
    int i; // [esp+4h] [ebp-4h]

    if (!*(_DWORD*)(thisx + 524) || a3)
    {
        if (*(_BYTE*)(thisx + 195) == 4)
        {
            return a2 <= 0xAu || a2 == 16 || a2 == 23;
        }
        else
        {
            for (i = 0; i < 3; ++i)
            {
                if (a2 == *(unsigned __int8*)(i + thisx + 520))
                    return 1;
            }
            return 0;
        }
    }
    else if (a2 == 38)
    {
        return 0;
    }
    else
    {
        return sub_41BA53(*(_DWORD*)(thisx + 524), a2, 1);
    }
}

