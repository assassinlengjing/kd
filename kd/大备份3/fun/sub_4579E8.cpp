#include "sub.h" 
int sub_4579E8(int thisx, int a2)
{
    int result; // eax
    CHAR v4[256]; // [esp+4h] [ebp-214h] BYREF
    CHAR String[256]; // [esp+104h] [ebp-114h] BYREF
    int v6; // [esp+204h] [ebp-14h]
    int j; // [esp+208h] [ebp-10h]
    int v8; // [esp+20Ch] [ebp-Ch]
    int v9; // [esp+210h] [ebp-8h]
    int i; // [esp+214h] [ebp-4h]

    if (a2 == -1)
    {
        sub_451EB5((_BYTE*)thisx, 1, 0);
        sub_4579E8(thisx, 1);
        sub_4579E8(thisx, 0);
        return sub_4579E8(thisx, 2);
    }
    else if (a2)
    {
        if (a2 == 1)
        {
            sub_452045((_BYTE*)thisx, 6, 0, 28, 7);
            sub_47B91A(72, 40, &unk_4B2510, 0, unk_4B9248);
            sub_47B91A(136, 40, &unk_4B2518, 0, unk_4B9248);
            sub_47B91A(160, 40, &unk_4B251C, 0, unk_4B9248);
            sub_47B91A(184, 40, &unk_4B2520, 0, unk_4B9248);
            sub_47B91A(184, 16, &unk_4B2530, 0, unk_4B9248);
            return sub_47B91A(240, 24, &unk_4B253C, 0, unk_4B9248);
        }
        else if (a2 == 2)
        {
            sub_451EB5((_BYTE*)thisx, 0, 1);
            LOBYTE(v6) = *(_BYTE*)(thisx + 2566);
            if ((_BYTE)v6)
            {
                if ((unsigned __int8)v6 == 1)
                {
                    return sub_47B91A(16, 208, &unk_4B2570, 0, unk_4B9248);
                }
                else
                {
                    result = (unsigned __int8)v6;
                    switch ((unsigned __int8)v6)
                    {
                    case 2u:
                        return sub_47B91A(16, 208, &unk_4B259C, 0, unk_4B9248);
                    case 3u:
                        sub_47B91A(16, 208, &unk_4B25C8, 0, unk_4B9248);
                        return sub_47B91A(16, 224, &unk_4B25E0, 0, unk_4B9248);
                    case 4u:
                        wsprintfA(v4, "%dP", *(unsigned __int16*)(thisx + 2568) + 1);
                        sub_47B7ED(16, 208, v4, 0, unk_4B9248);
                        sub_47B91A(32, 208, &unk_4B260C, 0, unk_4B9248);
                        return sub_47B91A(128, 224, &unk_4B2640, 0, unk_4B9248);
                    }
                }
            }
            else
            {
                wsprintfA(String, "%dP", *(unsigned __int16*)(thisx + 2568) + 1);
                sub_47B7ED(16, 208, String, 0, unk_4B9248);
                return sub_47B91A(32, 208, &unk_4B2544, 0, unk_4B9248);
            }
        }
    }
    else
    {
        sub_452045((_BYTE*)thisx, 6, 8, 28, 15);
        v9 = 64;
        v8 = 80;
        for (i = 0; i < 6; ++i)
        {
            for (j = 0; j < 10; ++j)
                sub_47B91A(
                    16 * j + v9 + 8 * (j >= 5),
                    16 * i + v8,
                    (LPCSTR)&unk_4B0710[180 * *(unsigned __int16*)(thisx + 2564) + 30 * i + 3 * j],
                    0,
                    unk_4B9248);
        }
        sub_47B91A(v9 + 164, v8 - 5, &unk_4B24D4, 0, unk_4B9248);
        sub_47B91A(v9 + 182, v8 - 3, &unk_4B24D8, 0, unk_4B9248);
        sub_47B91A(v9 + 168, v8 + 16, &unk_4B24DC, 0, unk_4B9248);
        if (*(_WORD*)(thisx + 2564))
            sub_47B91A(v9 + 168, v8 + 32, &unk_4B24EC, 0, unk_4B9248);
        else
            sub_47B91A(v9 + 168, v8 + 32, &unk_4B24E0, 0, unk_4B9248);
        sub_47B91A(v9 + 168, v8 + 48, &unk_4B24F8, 0, unk_4B9248);
        sub_47B91A(v9 + 168, v8 + 64, &unk_4B2500, 0, unk_4B9248);
        return sub_47B91A(v9 + 168, v8 + 80, &unk_4B2508, 0, unk_4B9248);
    }
    return result;
}