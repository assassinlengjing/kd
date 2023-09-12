#include "sub.h" 
void sub_466F20(int thisx, int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // [esp-4h] [ebp-170h]
    int yTop; // [esp+4h] [ebp-168h]
    int xLeft; // [esp+8h] [ebp-164h]
    int v9; // [esp+Ch] [ebp-160h]
    int Src[14]; // [esp+10h] [ebp-15Ch] BYREF
    int v11; // [esp+48h] [ebp-124h]
    int j; // [esp+4Ch] [ebp-120h]
    struct tagRECT rc; // [esp+50h] [ebp-11Ch] BYREF
    int i; // [esp+68h] [ebp-104h]
    CHAR String[256]; // [esp+6Ch] [ebp-100h] BYREF

    if (a2 == -1)
    {
        sub_451EB5((_BYTE*)thisx, 1, 1);
        sub_452045((_BYTE*)thisx, 2, 1, 25, 3);
        sub_47B91A(24, 18, &unk_4B3248, 0, unk_4B9248);
        sub_452045((_BYTE*)thisx, 2, 4, 36, 19);
        for (i = 0; i < 8; ++i)
        {
            sub_47B91A(136 * (i / 4) + 76, 34 * (i % 4) + 48, &unk_4B3258, 0, unk_4B9248);
            sub_47B91A(136 * (i / 4) + 68, 34 * (i % 4) + 60, &unk_4B3264, 0, unk_4B9248);
        }
        sub_466F20(thisx, 0);
        sub_466F20(thisx, 1);
    }
    else if (a2)
    {
        if (a2 == 1)
        {
            sub_451EB5((_BYTE*)thisx, 0, 1);
            if (*(_BYTE*)(thisx + 2562))
            {
                if (*(_BYTE*)(thisx + 2562) == 1)
                {
                    sub_47B91A(16, 208, &unk_4B3330, 0, unk_4B9248);
                    sub_47B91A(16, 224, aLeri, 0, unk_4B9248);
                }
            }
            else
            {
                sub_47B91A(16, 208, &unk_4B329C, 0, unk_4B9248);
                if (*(_WORD*)(thisx + 2566))
                    sub_47B91A(16, 224, &unk_4B32F8, 0, unk_4B9248);
                else
                    sub_47B91A(16, 224, &unk_4B32C4, 0, unk_4B9248);
            }
        }
    }
    else
    {
        SetRect(&rc, 96, 18, 204, 26);
        sub_4A02E9((_DWORD*)unk_4BDC60, (int)&rc, (int)&rc, 0, unk_4B9248);
        v11 = 10000 * *(unsigned __int16*)(thisx + 2566) / 140;
        wsprintfA(String, "%4dP(%3d.%02d%%)", *(unsigned __int16*)(thisx + 2566), v11 / 100, v11 % 100);
        sub_47B7ED(96, 18, String, 0, unk_4B9248);
        for (j = 0; j < 8; ++j)
        {
            xLeft = 136 * (j % 2) + 36;
            yTop = 34 * (j / 2) + 44;
            sub_49C15E((int)Src);
            SetRect(&rc, xLeft + 40, yTop + 4, xLeft + 64, yTop + 12);
            sub_4A02E9((_DWORD*)unk_4BDC60, unk_4B9248, (int)&rc, 0, unk_4B9248);
            SetRect(&rc, xLeft + 40, yTop + 16, xLeft + 88, yTop + 24);
            sub_4A02E9((_DWORD*)unk_4BDC60, v2, (int)&rc, 0, unk_4B9248);
            v9 = j + 2 * *(unsigned __int16*)(thisx + 2564);
            SetRect(&rc, xLeft, yTop, xLeft + 24, yTop + 24);
            v5 = unk_4B9248;
            v3 = sub_49FFEC(198, 113, 0);
            sub_4A02E9((_DWORD*)unk_4BDC60, v4, (int)&rc, v3, v5);
            if (v9 < 14)
            {
                Src[1] = xLeft + 12;
                Src[2] = yTop + 20;
                Src[0] = unk_4B91E8;
                Src[9] = unk_4B9248;
                sub_490A5B((void*)(140 * unk_4B719C[11 * v9] + unk_4B92E8), Src);
                wsprintfA(String, "%3d", *(unsigned __int16*)(thisx + 2 * v9 + 48));
                sub_47B7ED(xLeft + 40, yTop + 4, String, 0, unk_4B9248);
                v11 = 10000 * *(unsigned __int16*)(thisx + 2 * v9 + 48) / 140;
                wsprintfA(String, "%3d.%02d", v11 / 100, v11 % 100);
                sub_47B7ED(xLeft + 40, yTop + 16, String, 0, unk_4B9248);
            }
        }
    }
}
