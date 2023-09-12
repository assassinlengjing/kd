#include "sub.h" 
__int16 sub_423AC3(int thisx, int a2)
{
    int v4; // [esp+4h] [ebp-Ch]
    int v5; // [esp+8h] [ebp-8h]
    unsigned __int16 v6; // [esp+Ch] [ebp-4h]

    v6 = *(_WORD*)(thisx + 518);
    if (sub_41BA53(thisx, 0x83u, 0))
    {
        v5 = 100 * *(unsigned __int16*)(thisx + 214) / *(unsigned __int16*)(thisx + 500);
        if (v5 >= 10)
        {
            if (v5 >= 20)
            {
                if (v5 >= 30)
                {
                    if (v5 >= 40)
                    {
                        if (v5 < 50)
                            v6 = 110 * v6 / 100;
                    }
                    else
                    {
                        v6 = 120 * v6 / 100;
                    }
                }
                else
                {
                    v6 = 130 * v6 / 100;
                }
            }
            else
            {
                v6 = 140 * v6 / 100;
            }
        }
        else
        {
            v6 = 150 * v6 / 100;
        }
    }
    if (sub_41BA53(thisx, 0x82u, 0))
    {
        v4 = 100 * *(unsigned __int16*)(thisx + 214) / *(unsigned __int16*)(thisx + 500);
        if (v4 >= 10)
        {
            if (v4 >= 20)
            {
                if (v4 >= 30)
                {
                    if (v4 >= 40)
                    {
                        if (v4 < 50)
                            v6 = 110 * v6 / 100;
                    }
                    else
                    {
                        v6 = 120 * v6 / 100;
                    }
                }
                else
                {
                    v6 = 130 * v6 / 100;
                }
            }
            else
            {
                v6 = 140 * v6 / 100;
            }
        }
        else
        {
            v6 = 150 * v6 / 100;
        }
    }
    if (sub_41BA53(thisx, 0x8Cu, 0) && *(_BYTE*)(thisx + 609) == 11)
        v6 += *(_WORD*)(thisx + 496) + 10;
    if (v6)
        return v6;
    else
        return 1;
}

