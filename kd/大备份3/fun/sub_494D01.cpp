#include "sub.h" 
int __fastcall sub_494D01(int a1, int a2, unsigned __int8 a3, _BYTE* a4, int a5)
{
    int result; // eax
    int v7; // [esp+4h] [ebp-Ch]
    int v8; // [esp+8h] [ebp-8h]
    _DWORD* v9; // [esp+Ch] [ebp-4h]

    result = a3;
    if (a3)
    {
        if (a3 == 1)
        {
            result = a1;
            if (*(_DWORD*)(a1 + 12) == 5 && *(_BYTE**)(a1 + 56) == a4)
            {
                v9 = (_DWORD*)sub_464AC9((char*)unk_4B9B10, a4, 0, 0);
                if (v9)
                {
                    v8 = rand() % 10 + 5;
                    *(_DWORD*)(a1 + 120) = (sub_426090(v9) - *(_DWORD*)(a1 + 96)) / v8;
                    *(_DWORD*)(a1 + 124) = (sub_4260B0(v9) - *(_DWORD*)(a1 + 100)) / v8;
                    *(_DWORD*)(a1 + 128) = (sub_4260D0(v9) - *(_DWORD*)(a1 + 104) - 800) / v8;
                    *(_DWORD*)(a1 + 152) = 0;
                    *(_DWORD*)(a1 + 148) = 0;
                    *(_DWORD*)(a1 + 144) = 0;
                    *(_DWORD*)(a1 + 16) = 2;
                    *(_DWORD*)(a1 + 12) = 2;
                    v7 = a5 * *(unsigned __int16*)(a1 + 190) / 100 + 50;
                    if ((unsigned __int8)unk_4B999A >= 4u)
                        v7 /= (int)(unsigned __int8)unk_4B999A >> 2;
                    if (v7 > 0xFFFF)
                        LOWORD(v7) = -1;
                    *(_WORD*)(a1 + 192) = v7;
                    *(_BYTE*)(a1 + 194) = 0;
                    *(_BYTE*)(a1 + 195) = 5;
                    *(_DWORD*)(a1 + 156) = 0;
                    *(_BYTE*)(a1 + 180) = 0;
                    *(_DWORD*)(a1 + 172) = 1;
                    *(_DWORD*)(a1 + 168) = 1;
                    *(_DWORD*)(a1 + 76) = 0;
                    if (*(_BYTE*)(a1 + 72) == 11 || *(_BYTE*)(a1 + 72) == 13)
                    {
                        if (*(int*)(a1 + 84) < 0)
                        {
                            *(_DWORD*)(a1 + 84) = rand() % 300 + 300;
                            *(_DWORD*)(a1 + 80) = *(_DWORD*)(a1 + 84);
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 80) = 0;
                    }
                    memset((void*)(a1 + 181), 0, 8u);
                    *(_BYTE*)(a1 + (unsigned __int8)sub_425EF0(*(_BYTE**)(a1 + 56)) + 181) = 1;
                    *(_BYTE*)(a1 + 68) = 0;
                    result = a1;
                    *(_BYTE*)(a1 + 71) = 0;
                }
                else
                {
                    return sub_494D01(a1, (_DWORD)a4, 2u, a4, a5);
                }
            }
        }
        else if (a3 == 2 && *(_DWORD*)(a1 + 12) == 5)
        {
            result = a1;
            if (*(_BYTE**)(a1 + 56) == a4)
            {
                *(_DWORD*)(a1 + 16) = 2;
                *(_DWORD*)(a1 + 12) = 2;
                *(_DWORD*)(a1 + 156) = 0;
                *(_DWORD*)(a1 + 76) = 255;
                result = a1;
                *(_DWORD*)(a1 + 152) = 30;
                *(_DWORD*)(a1 + 168) = 0;
                *(_BYTE*)(a1 + 180) = 0;
            }
        }
    }
    else if (!*(_DWORD*)(a1 + 12) && *(int*)(a1 + 96) >= 0)
    {
        result = a1;
        if (*(int*)(a1 + 100) >= 0)
        {
            *(_DWORD*)(a1 + 56) = (_DWORD)a4;
            *(_DWORD*)(a1 + 16) = 5;
            *(_DWORD*)(a1 + 12) = 5;
            *(_DWORD*)(a1 + 156) = 0;
            *(_DWORD*)(a1 + 76) = 0;
            if (*(_BYTE*)(a1 + 72) != 11 && *(_BYTE*)(a1 + 72) != 13)
                *(_DWORD*)(a1 + 80) = 0;
            result = a1;
            *(_DWORD*)(a1 + 128) = 0;
            *(_DWORD*)(a1 + 152) = 0;
        }
    }
    return result;
}

