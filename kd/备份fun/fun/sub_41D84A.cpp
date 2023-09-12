#include "sub.h" 
__int16 sub_41D84A(int thisx)
{
    char* v1; // eax
    int v2; // eax
    char* v3; // eax
    int v6; // [esp+48h] [ebp-10h]
    int j; // [esp+4Ch] [ebp-Ch]
    int i; // [esp+50h] [ebp-8h]
    char* v9; // [esp+54h] [ebp-4h]

    if (*(_DWORD*)(thisx + 168))
    {
        v9 = (char*)sub_426590(byte_4B9B10, *(unsigned __int16*)(thisx + 186));
        v1 = sub_4266D0(v9);
        memcpy((void*)(thisx + 484), v1, 0xBu);
        *(_WORD*)(thisx + 190) = sub_4266F0((short*)v9);
        *(_WORD*)(thisx + 498) = (unsigned __int8)sub_426550(v9);
        *(_BYTE*)(thisx + 192) = sub_426570(v9);
        *(_WORD*)(thisx + 500) = sub_426710((short*)v9);
        *(_WORD*)(thisx + 502) = sub_426730((short*)v9);
        *(_WORD*)(thisx + 504) = sub_426750((short*)v9);
        *(_WORD*)(thisx + 506) = sub_426770((short*)v9);
        *(_WORD*)(thisx + 508) = sub_426790((short*)v9);
        *(_WORD*)(thisx + 510) = sub_4267B0((short*)v9);
        *(_WORD*)(thisx + 512) = sub_4267D0((short*)v9);
        *(_WORD*)(thisx + 514) = sub_4267F0((short*)v9);
        *(_WORD*)(thisx + 516) = sub_426810((short*)v9);
        *(_WORD*)(thisx + 518) = sub_426830((short*)v9);
        for (i = 0; i < 3; ++i)
            *(_BYTE*)(i + thisx + 520) = sub_426850(v9, i);
    }
    else
    {
        LOWORD(v2) = *(_WORD*)(thisx + 186);
        if ((unsigned __int16)v2 >= (int)Size)
            return v2;
        if (*(_BYTE*)(thisx + 188) == 3 || *(_BYTE*)(thisx + 188) == 4)
        {
            *(_WORD*)(thisx + 186) = *(unsigned __int8*)(thisx + 188) + 15;
            if (*(_BYTE*)(thisx + 188) == 3)
                *(_BYTE*)(thisx + 195) = 2;
            else
                *(_BYTE*)(thisx + 195) = 1;
        }
        if (*(_BYTE*)(thisx + 188) == 1 || *(_BYTE*)(thisx + 188) == 2)
        {
            wsprintfA((LPSTR)(thisx + 484), &byte_4B01A4);
            *(_WORD*)(thisx + 498) = 0;
            *(_WORD*)(thisx + 500) = 100 * *(unsigned __int8*)(thisx + 188) + 200;
            *(_WORD*)(thisx + 502) = 20 * *(unsigned __int8*)(thisx + 188) + 80;
            *(_WORD*)(thisx + 504) = 20 * *(unsigned __int8*)(thisx + 188) + 80;
            *(_WORD*)(thisx + 506) = 10 * *(unsigned __int8*)(thisx + 188) + 10;
            *(_WORD*)(thisx + 508) = 100;
            *(_WORD*)(thisx + 510) = 100;
            *(_WORD*)(thisx + 512) = 10 * *(unsigned __int8*)(thisx + 188) + 90;
            *(_WORD*)(thisx + 514) = 10 * *(unsigned __int8*)(thisx + 188) + 40;
            *(_WORD*)(thisx + 516) = 50;
            *(_WORD*)(thisx + 518) = 10 * *(unsigned __int8*)(thisx + 188) + 40;
        }
        else
        {
            v3 = unknown_libname_18((char*)(dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186)));
            memcpy((void*)(thisx + 484), v3, 0xBu);
            *(_WORD*)(thisx + 498) = (unsigned __int8)sub_401710((_BYTE*)(36 * *(unsigned __int16*)(thisx + 186)
                + dword_4B92E0));
            *(_BYTE*)(thisx + 192) = sub_4016F0((_BYTE*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 500) = (unsigned __int8)sub_4265B0((char*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 502) = (unsigned __int8)sub_426570((char*)dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186));
            *(_WORD*)(thisx + 504) = (unsigned __int8)sub_4265D0((char*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 506) = (unsigned __int8)sub_4265F0((char*)dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186));
            *(_WORD*)(thisx + 508) = (unsigned __int8)sub_426610((char*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 510) = (unsigned __int8)sub_426550((char*)dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186));
            *(_WORD*)(thisx + 512) = (unsigned __int8)sub_426670((char*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 514) = (unsigned __int8)sub_426630((char*)dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186));
            *(_WORD*)(thisx + 516) = (unsigned __int8)sub_426650((char*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
            *(_WORD*)(thisx + 518) = (unsigned __int8)sub_426690((char*)dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186));
            if (*(_BYTE*)(thisx + 195))
            {
                switch (*(_BYTE*)(thisx + 195))
                {
                case 1:
                    *(_WORD*)(thisx + 502) += 15;
                    break;
                case 2:
                    *(_WORD*)(thisx + 504) += 15;
                    break;
                case 3:
                    *(_WORD*)(thisx + 506) += 15;
                    break;
                }
            }
            else
            {
                *(_WORD*)(thisx + 502) += 5;
                *(_WORD*)(thisx + 504) += 5;
                *(_WORD*)(thisx + 506) += 5;
            }
            if (*(_BYTE*)(thisx + 195) == 4 || *(_BYTE*)(thisx + 188) == 3 || *(_BYTE*)(thisx + 188) == 4)
            {
                *(_WORD*)(thisx + 502) += 20;
                *(_WORD*)(thisx + 504) += 20;
                *(_WORD*)(thisx + 506) += 20;
                *(_WORD*)(thisx + 512) += 10;
            }
        }
        if (!sub_425CD0((_DWORD*)byte_4B9B10))
        {
            *(_WORD*)(thisx + 500) = 8 * *(unsigned __int16*)(thisx + 500) / 10;
            *(_WORD*)(thisx + 518) = 8 * *(unsigned __int16*)(thisx + 518) / 10;
            *(_WORD*)(thisx + 500) = (__int64)((double)*(unsigned __int16*)(thisx + 500)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2 * 3.0);
            *(_WORD*)(thisx + 502) = (__int64)((double)*(unsigned __int16*)(thisx + 502)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2);
            *(_WORD*)(thisx + 504) = (__int64)((double)*(unsigned __int16*)(thisx + 504)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2);
            *(_WORD*)(thisx + 506) = (__int64)((double)*(unsigned __int16*)(thisx + 506)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2);
            *(_WORD*)(thisx + 508) = (__int64)((double)*(unsigned __int16*)(thisx + 508)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2);
            *(_WORD*)(thisx + 510) = (__int64)((double)*(unsigned __int16*)(thisx + 510)
                + (double)*(unsigned __int16*)(thisx + 496) * 1.2);
            *(_WORD*)(thisx + 512) = (__int64)((double)*(unsigned __int16*)(thisx + 512)
                + (double)*(unsigned __int16*)(thisx + 496) * 0.9);
            *(_WORD*)(thisx + 514) += *(unsigned __int16*)(thisx + 496) / 10;
            *(_WORD*)(thisx + 516) += *(unsigned __int16*)(thisx + 496) / 10;
            *(_WORD*)(thisx + 518) += *(unsigned __int16*)(thisx + 496) / 10;
            if (*(_BYTE*)(thisx + 188) != 1)
            {
                if (*(_BYTE*)(thisx + 195))
                {
                    switch (*(_BYTE*)(thisx + 195))
                    {
                    case 1:
                        *(_WORD*)(thisx + 502) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 518) += *(unsigned __int16*)(thisx + 496) / 20;
                        break;
                    case 2:
                        *(_WORD*)(thisx + 504) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 514) += *(unsigned __int16*)(thisx + 496) / 20;
                        break;
                    case 3:
                        *(_WORD*)(thisx + 506) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 512) = (__int64)((double)*(unsigned __int16*)(thisx + 512)
                            + (double)*(unsigned __int16*)(thisx + 496) * 0.2);
                        break;
                    case 4:
                        *(_WORD*)(thisx + 502) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 504) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 506) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 508) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 510) += *(_WORD*)(thisx + 496);
                        *(_WORD*)(thisx + 512) += *(unsigned __int16*)(thisx + 496) / 2;
                        break;
                    }
                }
                else
                {
                    *(_WORD*)(thisx + 502) += *(unsigned __int16*)(thisx + 496) / 2;
                    *(_WORD*)(thisx + 504) += *(unsigned __int16*)(thisx + 496) / 2;
                    *(_WORD*)(thisx + 506) += *(unsigned __int16*)(thisx + 496) / 2;
                }
            }
        }
        if (*(_BYTE*)(thisx + 188) == 1)
        {
            *(_BYTE*)(thisx + 520) = 0x80;
            *(_BYTE*)(thisx + 521) = 0;
            *(_BYTE*)(thisx + 522) = 0;
        }
        else if (*(_BYTE*)(thisx + 188) == 2)
        {
            *(_BYTE*)(thisx + 520) = -127;
            *(_BYTE*)(thisx + 521) = 0;
            *(_BYTE*)(thisx + 522) = 0;
        }
        else
        {
            for (j = 0; j < 3; ++j)
                *(_BYTE*)(j + thisx + 520) = sub_4266B0((_BYTE*)(dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186)), j);
        }
        if (*(unsigned __int8*)(thisx + 188) >= 2u)
            --* (_BYTE*)(thisx + 188);
    }
    if (*(_DWORD*)(thisx + 168))
    {
        v6 = sub_426590(byte_4B9B10, *(unsigned __int16*)(thisx + 186));
        if (v6)
        {
            *(_WORD*)(thisx + 190) = sub_4266F0((short*)v6);
            *(_BYTE*)(thisx + 192) = sub_426570((char*)v6);
        }
    }
    else
    {
        *(_WORD*)(thisx + 190) = sub_475CB0((_WORD*)(dword_4B92E0 + 36 * *(unsigned __int16*)(thisx + 186)));
        *(_BYTE*)(thisx + 192) = sub_4016F0((_BYTE*)(36 * *(unsigned __int16*)(thisx + 186) + dword_4B92E0));
    }
    v2 = *(unsigned __int8*)(thisx + 195);
    if (v2 == 4)
    {
        LOWORD(v2) = thisx;
        *(_WORD*)(thisx + 190) = (*(_BYTE*)(thisx + 184) & 1) + 23;
        *(_BYTE*)(thisx + 192) = 3;
    }
    return v2;
}