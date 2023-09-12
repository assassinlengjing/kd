#include "sub.h" 
int sub_462234(_DWORD* thisx, int a2, int a3)
{
    int v4; // [esp+4h] [ebp-10h]
    int v5; // [esp+10h] [ebp-4h]

    if (a2)
    {
        if (a2 < 1 || a2 > 4)
        {
            return 0;
        }
        else
        {
            v5 = (unsigned __int8)sub_4264F0((char*)&thisx[153 * ((a2 - 1) % 2) + 657]);
            v4 = (a2 - 1) / 2;
            if (v4 == 1)
                v4 = v5 + 1;
            if (a3 >= 0 && a3 < (unsigned __int16)word_4B9318[v4])
                return 152 * a3 + dword_4B9324[v4];
            else
                return 0;
        }
    }
    else if (a3 >= 0 && (unsigned int)a3 < thisx[3277])
    {
        return 152 * a3 + thisx[3278];
    }
    else
    {
        return 0;
    }
}

