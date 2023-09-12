#include "sub.h" 
_DWORD* sub_4724BD(int thisx)
{
    char v3; // [esp+10h] [ebp-170h]
    int v4; // [esp+14h] [ebp-16Ch]
    int v5; // [esp+1Ch] [ebp-164h]
    _DWORD* v6; // [esp+20h] [ebp-160h]
    CHAR String[2]; // [esp+24h] [ebp-15Ch] BYREF
    char v8; // [esp+26h] [ebp-15Ah]
    __int16 v9; // [esp+27h] [ebp-159h]
    char v10; // [esp+29h] [ebp-157h]
    __int16 v11; // [esp+2Ah] [ebp-156h]
    char v12; // [esp+2Ch] [ebp-154h]
    __int16 v13; // [esp+2Dh] [ebp-153h]
    char v14; // [esp+2Fh] [ebp-151h]
    __int16 v15; // [esp+30h] [ebp-150h]
    char v16; // [esp+32h] [ebp-14Eh]
    __int16 v17; // [esp+33h] [ebp-14Dh]
    char v18; // [esp+35h] [ebp-14Bh]
    __int16 v19; // [esp+36h] [ebp-14Ah]
    char v20; // [esp+38h] [ebp-148h]
    __int16 v21; // [esp+39h] [ebp-147h]
    char v22; // [esp+3Bh] [ebp-145h]
    __int16 v23; // [esp+3Ch] [ebp-144h]
    char v24; // [esp+3Eh] [ebp-142h]
    __int16 v25; // [esp+3Fh] [ebp-141h]
    char v26; // [esp+41h] [ebp-13Fh]
    int v27; // [esp+44h] [ebp-13Ch]
    int j; // [esp+48h] [ebp-138h]
    int v29; // [esp+4Ch] [ebp-134h]
    int v30; // [esp+50h] [ebp-130h]
    int v31; // [esp+54h] [ebp-12Ch]
    int v32; // [esp+58h] [ebp-128h]
    int v33; // [esp+5Ch] [ebp-124h]
    CHAR v34[256]; // [esp+60h] [ebp-120h] BYREF
    _WORD* v35; // [esp+160h] [ebp-20h]
    int i; // [esp+164h] [ebp-1Ch]
    int v37; // [esp+168h] [ebp-18h]
    _WORD* v38; // [esp+16Ch] [ebp-14h]
    int v39; // [esp+170h] [ebp-10h]
    int v40; // [esp+174h] [ebp-Ch]
    int v41; // [esp+178h] [ebp-8h]
    int v42; // [esp+17Ch] [ebp-4h]

    if (*(_BYTE*)(thisx + 2562))
    {
        if (*(unsigned __int8*)(thisx + 2562) > 4u)
        {
            if (*(_BYTE*)(thisx + 2562) == 5)
            {
                if (*(_DWORD*)(thisx + 2540) == 1)
                    sub_47F9D6(thisx + 736, &unk_4B3CB0, 4);
                if (sub_475E70((_DWORD*)thisx + 736) >= 300)
                {
                    *(_DWORD*)(thisx + 108) = 27;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
            }
        }
        else
        {
            v41 = 4 - (*(unsigned __int8*)(thisx + 2562) - 1);
            v38 = (_WORD*)(thisx + 2564);
            v39 = *(unsigned __int8*)(v41 + thisx + 13047);
            v42 = v39 - *(unsigned __int16*)(thisx + 2564);
            if (*(_DWORD*)(thisx + 2540) == 1)
            {
                v35 = (_WORD*)(thisx + 2574);
                while (1)
                {
                    *v38 = *(unsigned __int8*)(v41 + thisx + 13047);
                    if (*v38)
                        break;
                    --v41;
                }
                *(_BYTE*)(thisx + 2562) = 5 - v41;
                v37 = 0;
                for (i = 0; i < 4; ++i)
                {
                    if (*(unsigned __int8*)(i + thisx + 13044) == v41)
                        *(_WORD*)(thisx + 2 * v37++ + 2566) = i;
                }
                sub_47FBA3(thisx + 736);
                if (*v35)
                {
                    if (v41 == 1)
                        sub_47F9D6(thisx + 736, &unk_4B3B28, 4);
                }
                else
                {
                    sub_47F9D6(thisx + 736, &unk_4B3B1C, 4);
                }
                ++* v35;
                switch (v41)
                {
                case 1:
                    sub_47FADE(thisx + 736, &unk_4B3B34);
                    break;
                case 2:
                    sub_47FADE(thisx + 736, &unk_4B3B44);
                    break;
                case 3:
                    sub_47FADE(thisx + 736, &unk_4B3B54);
                    break;
                case 4:
                    sub_47FADE(thisx + 736, &unk_4B3B64);
                    break;
                default:
                    break;
                }
            }
            else if (*(_DWORD*)(thisx + 2540) == 2)
            {
                if (*v38)
                {
                    switch (v42)
                    {
                    case 1:
                        sub_47FADE(thisx + 736, &unk_4B3B74);
                        break;
                    case 2:
                        sub_47FA81((int*)(thisx + 736));
                        sub_47FBA3(thisx + 736);
                        sub_47FADE(thisx + 736, &unk_4B3B80);
                        break;
                    case 3:
                        sub_47FADE(thisx + 736, &unk_4B3B8C);
                        break;
                    }
                    v32 = *(unsigned __int16*)(thisx + 2 * v42 + 2566);
                    v33 = thisx + 244 * v32 + 1392;
                    if (!v42)
                    {
                        *(_WORD*)String = unk_4B3B98;
                        v8 = unk_4B3B9A;
                        v9 = unk_4B3B9C;
                        v10 = unk_4B3B9E;
                        v11 = unk_4B3BA0;
                        v12 = unk_4B3BA2;
                        v13 = unk_4B3BA4;
                        v14 = unk_4B3BA6;
                        v15 = unk_4B3BA8;
                        v16 = unk_4B3BAA;
                        v17 = unk_4B3BAC;
                        v18 = unk_4B3BAE;
                        v19 = unk_4B3BB0;
                        v20 = unk_4B3BB2;
                        v21 = unk_4B3BB4;
                        v22 = unk_4B3BB6;
                        v23 = unk_4B3BB8;
                        v24 = unk_4B3BBA;
                        v25 = unk_4B3BBC;
                        v26 = unk_4B3BBE;
                        v29 = *(_DWORD*)(v33 + 168);
                        if (v29 < 0)
                        {
                            sub_47FADE(thisx + 736, &unk_4B3BC0);
                            v29 = -v29;
                        }
                        v30 = 1;
                        v27 = 1;
                        v31 = v29;
                        while (v31 > 9)
                        {
                            v31 /= 10;
                            ++v30;
                            v27 *= 10;
                        }
                        for (j = 0; j < v30; ++j)
                        {
                            sub_47FADE(thisx + 736, &String[3 * (v29 / v27 % 10)]);
                            v29 %= 10 * v27;
                            v27 /= 10;
                        }
                        sub_47FADE(thisx + 736, &unk_4B3BC4);
                    }
                    wsprintfA(v34, aS_7, v33 + 172);
                    sub_47FADE(thisx + 736, v34);
                    if (v42 == 3)
                        sub_47FADE(thisx + 736, &unk_4B3BE0);
                    else
                        sub_47FADE(thisx + 736, &unk_4B3BD8);
                    if (v41 <= 3 && v32 < 4)
                    {
                        v3 = *(_BYTE*)(v33 + 4);
                        v5 = *(_DWORD*)v33;
                        v4 = 0;
                        switch (v39)
                        {
                        case 2:
                            if (v41 == 2)
                                v4 = 16 * v42 - 12;
                            else
                                v4 = 16 * v42 - 4;
                            break;
                        case 3:
                            if (v41 == 1)
                                v4 = 16 * v42 - 16;
                            else
                                v4 = 10 * v42 - 16;
                            break;
                        case 4:
                            v4 = 12 * v42 - 16;
                            break;
                        }
                        v6 = (_DWORD*)sub_488E1E((_DWORD*)(thisx + 128), *(_DWORD*)(thisx + 2528) + 2);
                        if (v6)
                        {
                            sub_475E50(v6, v3 + unk_4B9234);
                            sub_475DB0(v6, v5);
                            sub_475E30((char*)v6, v32);
                            sub_475E10(v6, v4);
                            sub_48DC0D((int)v6, *(__int16*)(thisx + 2 * v41 + 11402));
                        }
                        ++* (_DWORD*)(thisx + 2528);
                    }
                }
                else
                {
                    if (v42 == 2 || v42 == 4)
                    {
                        sub_47FA81((int*)(thisx + 736));
                        sub_47FBA3(thisx + 736);
                    }
                    if (v42 == 4)
                    {
                        sub_47FADE(thisx + 736, &unk_4B3C40);
                    }
                    else
                    {
                        switch (v41)
                        {
                        case 1:
                            sub_47FADE(thisx + 736, &unk_4B3C34);
                            break;
                        case 2:
                            sub_47FADE(thisx + 736, &unk_4B3C28);
                            break;
                        case 3:
                            sub_47FADE(thisx + 736, &unk_4B3C1C);
                            break;
                        case 4:
                            sub_47FADE(thisx + 736, &unk_4B3BEC);
                            break;
                        default:
                            break;
                        }
                    }
        }
      }
            if (*v38)
                v40 = 60;
            else
                v40 = 360;
            if (v41 == 4 && sub_475E70((_DWORD*)thisx + 736) >= 120
                || *v38 == 1 && v39 == 1 && *(int*)(thisx + 2540) > 3
                || *v38 == 3 && v39 == 3 && *(int*)(thisx + 2540) > 3
                || *v38 && *(int*)(thisx + 2540) >= 241
                || !*v38 && *(int*)(thisx + 2540) > 420)
            {
                if (*v38)
                {
                    --* v38;
                    *(_DWORD*)(thisx + 2540) = 1;
                }
                else
                {
                    ++* (_BYTE*)(thisx + 2562);
                    *(_DWORD*)(thisx + 2540) = 0;
                }
            }
        }
    }
    else
    {
        if (!*(_DWORD*)(thisx + 2540))
            sub_47F9D6(thisx + 736, &unk_4B3AB8, 4);
        if (sub_475E70((_DWORD*)thisx + 736) > 120)
        {
            *(_DWORD*)(thisx + 2540) = 0;
            ++* (_BYTE*)(thisx + 2562);
        }
    }
    ++* (_DWORD*)(thisx + 2540);
    sub_488981((_DWORD*)thisx + 128);
    sub_486476((_DWORD*)(thisx + 128));
    sub_47F211(thisx + 736);
    return sub_47F98B((_DWORD*)(thisx + 736));
}

