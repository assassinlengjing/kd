#include "sub.h" 
void sub_45E15F(int thisx, int a2)
{
    int v2; // eax
    int v3; // [esp-4h] [ebp-1C0h]
    int v4; // [esp+0h] [ebp-1BCh]
    int i; // [esp+10h] [ebp-1ACh]
    int v7[15]; // [esp+14h] [ebp-1A8h] BYREF
    CHAR String[256]; // [esp+50h] [ebp-16Ch] BYREF
    CHAR v9[4]; // [esp+150h] [ebp-6Ch] BYREF
    int v10; // [esp+154h] [ebp-68h]
    int v11; // [esp+158h] [ebp-64h]
    char v12; // [esp+15Ch] [ebp-60h]
    int v13; // [esp+15Dh] [ebp-5Fh]
    int v14; // [esp+161h] [ebp-5Bh]
    __int16 v15; // [esp+165h] [ebp-57h]
    char v16; // [esp+167h] [ebp-55h]
    __int16 v17; // [esp+168h] [ebp-54h]
    int v18; // [esp+16Ah] [ebp-52h]
    int v19; // [esp+16Eh] [ebp-4Eh]
    __int16 v20; // [esp+172h] [ebp-4Ah]
    char v21; // [esp+174h] [ebp-48h]
    __int16 v22; // [esp+175h] [ebp-47h]
    int v23; // [esp+177h] [ebp-45h]
    __int16 v24; // [esp+17Bh] [ebp-41h]
    char v25; // [esp+17Dh] [ebp-3Fh]
    int v26; // [esp+17Eh] [ebp-3Eh]
    __int16 v27; // [esp+182h] [ebp-3Ah]
    int v28[14]; // [esp+184h] [ebp-38h] BYREF

    if (a2 == -1)
    {
        sub_451EB5((_BYTE*)thisx, 1, 1);
        sub_45E15F(thisx, 0);
        sub_45E15F(thisx, 1);
    }
    else if (a2)
    {
        if (a2 == 1)
        {
            sub_451EB5((_BYTE*)thisx, 0, 1);
            switch (*(_BYTE*)(thisx + 13101))
            {
            case 1:
                switch (*(_WORD*)(thisx + 2564))
                {
                case 1:
                    sub_47B91A(16, 208, &unk_4B2B9C, 0, unk_4B9248);
                    break;
                case 2:
                    sub_47B91A(16, 208, &unk_4B2BBC, 0, unk_4B9248);
                    sub_47B91A(16, 224, &unk_4B2C00, 0, unk_4B9248);
                    break;
                case 3:
                    sub_47B91A(16, 208, &unk_4B2C18, 0, unk_4B9248);
                    break;
                }
                break;
            case 2:
                if (*(_WORD*)(thisx + 2564) == 1)
                {
                    sub_47B91A(16, 208, &unk_4B2C44, 0, unk_4B9248);
                }
                else if (*(_WORD*)(thisx + 2564) == 2)
                {
                    sub_47B91A(16, 208, &unk_4B2C7C, 0, unk_4B9248);
                }
                break;
            case 3:
                if (*(_WORD*)(thisx + 2564) == 1)
                {
                    sub_47B91A(16, 208, &unk_4B2CA8, 0, unk_4B9248);
                }
                else if (*(_WORD*)(thisx + 2564) == 2)
                {
                    sub_47B91A(16, 208, &unk_4B2CE8, 0, unk_4B9248);
                }
                break;
            case 4:
                v4 = *(unsigned __int16*)(thisx + 2564);
                if (v4 == 1)
                {
                    sub_47B91A(16, 208, &unk_4B2D20, 0, unk_4B9248);
                }
                else if (v4 == 2)
                {
                    sub_47B91A(16, 208, &unk_4B2D50, 0, unk_4B9248);
                }
                break;
            }
            if (!*(_WORD*)(thisx + 2564))
            {
                if (*(_DWORD*)(thisx + 2528))
                {
                    switch (*(_DWORD*)(thisx + 2528))
                    {
                    case 1:
                        sub_47B91A(16, 208, &unk_4B2DA0, 0, unk_4B9248);
                        break;
                    case 2:
                        sub_47B91A(16, 208, &unk_4B2DD0, 0, unk_4B9248);
                        break;
                    case 3:
                        sub_47B91A(16, 208, &unk_4B2E00, 0, unk_4B9248);
                        break;
                    }
                }
                else
                {
                    sub_47B91A(16, 208, &unk_4B2D84, 0, unk_4B9248);
                }
            }
        }
    }
    else
    {
        sub_452045((_BYTE*)thisx, 9, 3, 22, 14);
        sub_452045((_BYTE*)thisx, 11, 1, 18, 4);
        wsprintfA(String, &unk_4B2B30);
        v3 = unk_4B9248;
        v2 = lstrlenA(String);
        sub_47B91A(160 - 2 * v2, 20, String, 0, v3);
        sub_49DB90(v7);
        v7[1] = 0;
        v7[2] = 0;
        v7[3] = 110;
        v7[4] = 78;
        v7[9] = -1;
        v7[5] = 1;
        v7[0] = -1;
        sub_49DA45((_DWORD*)unk_4BDC60, aGraphicAnteroo_0, (int)v7);
        sub_49C15E((int)v28);
        v28[1] = 104;
        v28[2] = 48;
        v28[0] = v7[0];
        sub_49CC5B((short*)unk_4BDC60, unk_4B9248, v28);
        sub_49DA8A((_DWORD*)unk_4BDC60, v28[0]);
        sub_452045((_BYTE*)thisx, 8, 18, 24, 5);
        *(_DWORD*)v9 = unk_4B2B6C;
        v10 = unk_4B2B70;
        v11 = unk_4B2B74;
        v12 = unk_4B2B78;
        v13 = unk_4B2B7C;
        v14 = unk_4B2B80;
        v15 = unk_4B2B84;
        v16 = unk_4B2B86;
        v17 = 0;
        v18 = unk_4B2B88;
        v19 = unk_4B2B8C;
        v20 = unk_4B2B90;
        v21 = unk_4B2B92;
        v22 = 0;
        v23 = unk_4B2B94;
        v24 = unk_4B2B98;
        v25 = unk_4B2B9A;
        v26 = 0;
        v27 = 0;
        for (i = 0; i < 4; ++i)
        {
            if ((i || *(_WORD*)(thisx + 2566)) && (i != 2 || *(_WORD*)(thisx + 2568)))
                sub_47B91A(72 * (i % 2) + 96, 16 * (i / 2) + 152, &v9[13 * i], 0, unk_4B9248);
        }
    }
}

