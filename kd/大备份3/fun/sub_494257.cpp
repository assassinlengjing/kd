#include "sub.h" 
int sub_494257(int thisx, int a2, int a3, int a4)
{
    int result; // eax
    int v5; // [esp+4h] [ebp-Ch]
    int v6; // [esp+8h] [ebp-8h]

    sub_49951D((int*)thisx);
    sub_4995EB((_WORD*)thisx);
    result = thisx;
    if (*(_DWORD*)(thisx + 12) == 8)
    {
        if (a3)
        {
            result = thisx;
            *(_BYTE*)(thisx + *(unsigned __int8*)(a3 + 40) + 181) = 1;
        }
    }
    else if (a2 && !a4)
    {
        *(_DWORD*)(thisx + 56) = *(_DWORD*)(a3 + 32);
        *(_DWORD*)(thisx + 16) = 7;
        *(_DWORD*)(thisx + 12) = 7;
        *(_DWORD*)(thisx + 76) = (unsigned __int8)sub_425EF0(*(_BYTE**)(a3 + 32));
        memset((void*)(thisx + 181), 0, 8u);
        *(_BYTE*)(thisx + *(_DWORD*)(thisx + 76) + 181) = 1;
        *(_DWORD*)(thisx + 156) = 0;
        *(_DWORD*)(thisx + 120) = 10 * *(_DWORD*)a3;
        if (*(int*)(thisx + 120) >= 100)
        {
            if (*(int*)(thisx + 120) > 2000)
                *(_DWORD*)(thisx + 120) = 2000;
        }
        else
        {
            *(_DWORD*)(thisx + 120) = 100;
        }
        if (*(_BYTE*)(a3 + 4) == 5)
        {
            *(_DWORD*)(thisx + 172) = 1;
            *(_DWORD*)(thisx + 128) = 2 * *(_DWORD*)(thisx + 120) / -3;
            *(_DWORD*)(thisx + 152) = 30;
            *(int*)(thisx + 120) /= 5;
            if (*(_BYTE*)(thisx + 72) == 10 || *(_BYTE*)(thisx + 72) == 13)
            {
                *(_DWORD*)(thisx + 128) = 2 * *(_DWORD*)(thisx + 128) / 3;
                *(_DWORD*)(thisx + 120) = 2 * *(_DWORD*)(thisx + 120) / 3;
            }
        }
        if (!*(_DWORD*)(a3 + 12))
            *(_DWORD*)(thisx + 120) = -*(_DWORD*)(thisx + 120);
        *(_DWORD*)(thisx + 124) = 0;
        *(_WORD*)(thisx + 192) = *(unsigned __int16*)(thisx + 190) / 5 + *(_DWORD*)a3;
        *(_BYTE*)(thisx + 194) = 0;
        *(_BYTE*)(thisx + 69) = 1;
        if (*(_BYTE*)(thisx + 72) == 10)
        {
            *(_BYTE*)(thisx + 22) = (*(char*)(thisx + 22) + 1) % 4;
        }
        else if (*(_BYTE*)(thisx + 72) == 13)
        {
            *(int*)(thisx + 120) /= 2;
            if (*(int*)(thisx + 84) > 0)
            {
                *(_DWORD*)(thisx + 84) -= 60;
                if (*(int*)(thisx + 84) < 0)
                    *(_DWORD*)(thisx + 84) = 0;
            }
        }
        result = *(unsigned __int8*)(thisx + 72);
        switch (*(_BYTE*)(thisx + 72))
        {
        case 8:
            result = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9ABC, -1, 100, 100, 0);
            break;
        case 9:
            result = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9AC0, -1, 100, 100, 0);
            break;
        case 0xA:
        case 0xD:
            result = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A14, -1, 100, 100, 0);
            break;
        default:
            return result;
        }
    }
    else
    {
        if (*(_DWORD*)(thisx + 8) == 190 && !*(_DWORD*)(thisx + 88))
        {
            *(_DWORD*)(thisx + 88) = 1;
            *(int*)(thisx + 120) /= 2;
            result = thisx;
            *(_DWORD*)(thisx + 152) = -60;
        }
        if (*(_BYTE*)(thisx + 68) && a4)
        {
            result = thisx;
            if (*(_DWORD*)(thisx + 8) != 190)
            {
                *(_WORD*)(thisx + 192) = *(unsigned __int16*)(thisx + 192) / 2;
                result = thisx;
                if (!*(_WORD*)(thisx + 192))
                    *(_WORD*)(thisx + 192) = 1;
            }
        }
        else if (a4)
        {
            sub_494754(thisx);
            *(int*)(thisx + 120) /= 2;
            result = *(_DWORD*)(thisx + 124) / 2;
            *(_DWORD*)(thisx + 124) = result;
            if (*(_DWORD*)(thisx + 12) == 7)
            {
                if (*(int*)(thisx + 120) <= 0)
                    v6 = -*(_DWORD*)(thisx + 120);
                else
                    v6 = *(_DWORD*)(thisx + 120);
                if (v6 >= 100)
                {
                    if (*(int*)(thisx + 120) <= 0)
                        v5 = (*(_DWORD*)(thisx + 120) >= 0) - 1;
                    else
                        v5 = 1;
                    *(_DWORD*)(thisx + 120) = 100 * v5;
                }
                *(_DWORD*)(thisx + 128) = -300;
                *(_DWORD*)(thisx + 152) = 30;
                *(_DWORD*)(thisx + 172) = 1;
                *(_DWORD*)(thisx + 16) = 2;
                *(_DWORD*)(thisx + 12) = 2;
                result = thisx;
                *(_BYTE*)(thisx + 180) = 0;
            }
        }
        if (!a4)
        {
            result = thisx;
            *(_BYTE*)(thisx + *(unsigned __int8*)(a3 + 40) + 181) = 1;
        }
        if (*(_BYTE*)(thisx + 72) == 11 || (result = thisx, *(_BYTE*)(thisx + 72) == 13))
        {
            if (*(_DWORD*)(thisx + 12) != 8)
            {
                if (*(_DWORD*)(thisx + 56) && (result = sub_41BA53(*(_DWORD*)(thisx + 56), 0x8Au, 0)) != 0)
                {
                    *(_DWORD*)(thisx + 84) = 0;
                }
                else
                {
                    result = thisx;
                    if (*(int*)(thisx + 84) > 0)
                    {
                        result = thisx;
                        *(_DWORD*)(thisx + 84) -= 60;
                        if (*(int*)(thisx + 84) < 0)
                            *(_DWORD*)(thisx + 84) = 0;
                    }
                }
            }
        }
    }
    return result;
}

