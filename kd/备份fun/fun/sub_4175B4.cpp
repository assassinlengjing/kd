#include "sub.h" 
__int16 sub_4175B4(int thisx, int a2)
{
    int v4; // [esp+8h] [ebp-Ch]
    int v5; // [esp+Ch] [ebp-8h]
    unsigned __int16 v6; // [esp+10h] [ebp-4h]

    v6 = *(_WORD*)(thisx + 506);
    if (a2)
    {
        if (sub_41BA53(thisx, 0x82u, 0))
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
        if (sub_41BA53(thisx, 0x8Cu, 0) && *(_BYTE*)(thisx + 609) == 11)
            v6 += *(_WORD*)(thisx + 496) + 15;
    }
    if (sub_425CD0((_DWORD*)&byte_4B9B10) == 3 && *(_DWORD*)(thisx + 164))
    {
        v4 = v6 * sub_426250((_DWORD*)&byte_4B9B10) / 100;
        if (v4 > 255)
            LOWORD(v4) = 255;
        v6 = v4;
    }
    if (!v6)
        return 1;
    return v6;
}

