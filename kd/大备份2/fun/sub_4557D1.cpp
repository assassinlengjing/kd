#include "sub.h" 
unsigned __int16 sub_4557D1(int thisx, int a2)
{
    unsigned __int16 result; // ax
    int v4; // [esp+4h] [ebp-110h]
    int v5; // [esp+8h] [ebp-10Ch]
    int i; // [esp+10h] [ebp-104h]
    CHAR String[256]; // [esp+14h] [ebp-100h] BYREF

    if (a2 == -1)
    {
        sub_451EB5((_BYTE*)thisx, 1, 1);
        sub_452045((_BYTE*)thisx, 13, 1, 14, 3);
        sub_47B91A(120, 16, &byte_4B20CC, 0, dword_4B9248);
        sub_4557D1(thisx, 0);
        return sub_4557D1(thisx, -2);
    }
    else if (a2)
    {
        if (a2 == -2)
        {
            sub_451EB5((_BYTE*)thisx, 0, 1);
            if (*(_DWORD*)(thisx + 2528))
            {
                switch (*(_DWORD*)(thisx + 2528))
                {
                case 1:
                    return sub_47B91A(16, 208, &byte_4B2250, 0, dword_4B9248);
                case 2:
                    return sub_47B91A(16, 208, &byte_4B2274, 0, dword_4B9248);
                case 3:
                    return sub_47B91A(16, 208, &byte_4B22A4, 0, dword_4B9248);
                case 4:
                    return sub_47B91A(16, 208, &byte_4B22E4, 0, dword_4B9248);
                case 5:
                    return sub_47B91A(16, 208, &byte_4B2310, 0, dword_4B9248);
                case 6:
                    return sub_47B91A(16, 208, &byte_4B233C, 0, dword_4B9248);
                case 7:
                    sub_47B91A(16, 208, &byte_4B2378, 0, dword_4B9248);
                    return sub_47B91A(16, 224, &byte_4B23B0, 0, dword_4B9248);
                default:
                    result = thisx;
                    if (*(_DWORD*)(thisx + 2528) == 8)
                    {
                        return sub_47B91A(16, 208, &byte_4B23F0, 0, dword_4B9248);
                    }
                    else if (*(_DWORD*)(thisx + 2528) == 9)
                    {
                        return sub_47B91A(16, 208, &byte_4B2428, 0, dword_4B9248);
                    }
                    break;
                }
            }
            else
            {
                return sub_47B91A(16, 208, &byte_4B2228, 0, dword_4B9248);
            }
        }
    }
    else
    {
        result = sub_452045((_BYTE*)thisx, 10, 5, 20, 18);
        for (i = 0; i < 7; ++i)
        {
            result = *(_WORD*)(thisx + 2564);
            v4 = result + i;
            v5 = 16 * i + 60;
            if (v4)
            {
                switch (v4)
                {
                case 1:
                    sub_47B91A(104, v5, &byte_4B2100, 0, dword_4B9248);
                    switch (*(_BYTE*)(thisx + 2496))
                    {
                    case 1:
                        wsprintfA(String, a100);
                        break;
                    case 2:
                        wsprintfA(String, a50);
                        break;
                    case 3:
                        wsprintfA(String, a66);
                        break;
                    case 4:
                        wsprintfA(String, a75);
                        break;
                    case 5:
                        wsprintfA(String, a80);
                        break;
                    case 6:
                        wsprintfA(String, a83);
                        break;
                    case 7:
                        wsprintfA(String, a85);
                        break;
                    case 8:
                        wsprintfA(String, a87);
                        break;
                    case 9:
                        wsprintfA(String, a88);
                        break;
                    case 0xA:
                        wsprintfA(String, a90);
                        break;
                    }
                    result = sub_47B7ED(192, v5, String, 0, dword_4B9248);
                    break;
                case 2:
                    sub_47B91A(104, v5, &byte_4B2160, 0, dword_4B9248);
                    if (*(_BYTE*)(thisx + 77))
                        result = sub_47B7ED(200, v5, aOn_0, 0, dword_4B9248);
                    else
                        result = sub_47B7ED(200, v5, (LPCSTR)off_4B2174, 0, dword_4B9248);
                    break;
                case 3:
                    sub_47B91A(104, v5, &byte_4B2178, 0, dword_4B9248);
                    if (*(_BYTE*)(thisx + 81))
                        result = sub_47B7ED(200, v5, aOn_1, 0, dword_4B9248);
                    else
                        result = sub_47B7ED(200, v5, (LPCSTR)off_4B2190, 0, dword_4B9248);
                    break;
                case 4:
                    sub_47B91A(104, v5, &byte_4B2194, 0, dword_4B9248);
                    if (dword_4B99F0)
                        result = sub_47B7ED(200, v5, aOn_2, 0, dword_4B9248);
                    else
                        result = sub_47B7ED(200, v5, (LPCSTR)off_4B21AC, 0, dword_4B9248);
                    break;
                case 5:
                    sub_47B91A(104, v5, &byte_4B21B0, 0, dword_4B9248);
                    wsprintfA(String, "%d", *(unsigned __int8*)(thisx + 30));
                    result = sub_47B7ED(200, v5, String, 0, dword_4B9248);
                    break;
                case 6:
                    sub_47B91A(104, v5, &byte_4B21C0, 0, dword_4B9248);
                    if (*(_BYTE*)(thisx + 78))
                        result = sub_47B7ED(200, v5, aOn_3, 0, dword_4B9248);
                    else
                        result = sub_47B7ED(200, v5, (LPCSTR)off_4B21DC, 0, dword_4B9248);
                    break;
                case 7:
                    sub_47B91A(104, v5, &byte_4B21E0, 0, dword_4B9248);
                    if (*(_BYTE*)(thisx + 98))
                        result = sub_47B7ED(200, v5, aOn_4, 0, dword_4B9248);
                    else
                        result = sub_47B7ED(200, v5, (LPCSTR)off_4B21FC, 0, dword_4B9248);
                    break;
                case 8:
                    result = sub_47B91A(104, v5, &byte_4B2200, 0, dword_4B9248);
                    break;
                case 9:
                    result = sub_47B91A(104, v5, &byte_4B2218, 0, dword_4B9248);
                    break;
                }
            }
            else
            {
                sub_47B91A(104, v5, &byte_4B20E4, 0, dword_4B9248);
                if (dword_4B99F4)
                    result = sub_47B7ED(200, v5, aOn, 0, dword_4B9248);
                else
                    result = sub_47B7ED(200, v5, (LPCSTR)off_4B20FC, 0, dword_4B9248);
            }
        }
    }
    return result;
}

