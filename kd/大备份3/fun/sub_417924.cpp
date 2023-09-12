#include "sub.h" 
__int16 sub_417924(int thisx, int a2, int a3)
{
    int v5; // [esp+8h] [ebp-Ch]
    int v6; // [esp+Ch] [ebp-8h]
    unsigned __int16 v7; // [esp+10h] [ebp-4h]

    v7 = *(_WORD*)(thisx + 512);
    if (a3 && sub_41BA53(thisx, 0x8Cu, 0) && *(_BYTE*)(thisx + 609) == 11)
        v7 += *(_WORD*)(thisx + 496) + 10;
    if (sub_41BA53(thisx, 0x83u, 0))
    {
        v6 = 100 * *(unsigned __int16*)(thisx + 214) / *(unsigned __int16*)(thisx + 500);
        if (v6 >= 10)
        {
            if (v6 >= 20)
            {
                if (v6 >= 30)
                {
                    if (v6 >= 40)
                    {
                        if (v6 < 50)
                            v7 = 110 * v7 / 100;
                    }
                    else
                    {
                        v7 = 120 * v7 / 100;
                    }
                }
                else
                {
                    v7 = 130 * v7 / 100;
                }
            }
            else
            {
                v7 = 140 * v7 / 100;
            }
        }
        else
        {
            v7 = 150 * v7 / 100;
        }
    }
    if (*(_DWORD*)(thisx + 428) == 44
        || *(_DWORD*)(thisx + 428) == 45
        || *(_DWORD*)(thisx + 428) == 46
        || *(_DWORD*)(thisx + 428) == 47)
    {
        if (a2 == 148)
        {
            v7 = 125 * v7 / 100;
        }
        else if (a2 == 177)
        {
            v7 *= 2;
        }
        else
        {
            v7 = 175 * v7 / 100;
        }
    }
    if (*(int*)(thisx + 428) >= 31 && *(int*)(thisx + 428) <= 43)
        v7 = 150 * v7 / 100;
    if (*(_DWORD*)(thisx + 428) == 135 || *(_DWORD*)(thisx + 428) == 89)
        v7 = 75 * v7 / 100;
    if (sub_425CD0((_DWORD*)&unk_4B9B10) == 3 && *(_DWORD*)(thisx + 164))
    {
        v5 = v7 * sub_426250((_DWORD*)&unk_4B9B10) / 100;
        if (v5 > 255)
            LOWORD(v5) = 255;
        v7 = v5;
    }
    if (v7)
        return v7;
    else
        return 1;
}

