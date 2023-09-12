#include "sub.h" 
void sub_42455B(int thisx, __int16* a2)
{
    char* v2; // eax
    int v3; // esi
    int v4; // edi
    int v5; // [esp+Ch] [ebp-50h]
    int v6; // [esp+10h] [ebp-4Ch]
    int v8; // [esp+1Ch] [ebp-40h]
    int v9; // [esp+20h] [ebp-3Ch]
    int v10; // [esp+24h] [ebp-38h]
    int v11; // [esp+28h] [ebp-34h]
    int v12; // [esp+2Ch] [ebp-30h]
    int v13; // [esp+30h] [ebp-2Ch] BYREF
    int v14; // [esp+38h] [ebp-24h]
    int v15; // [esp+3Ch] [ebp-20h]
    int i; // [esp+40h] [ebp-1Ch]
    int v17[6]; // [esp+44h] [ebp-18h]

    v17[0] = thisx + 372;
    v17[1] = thisx + 376;
    v17[2] = thisx + 348;
    v17[3] = thisx + 352;
    v17[4] = thisx + 356;
    v17[5] = thisx + 360;
    if (*((_BYTE*)a2 + 10))
    {
        sub_41F6DE((_DWORD*)thisx);
        if (*(_DWORD*)(thisx + 304))
        {
            if (*(_DWORD*)(thisx + 288))
            {
                sub_417E42(*(_DWORD*)(thisx + 304));
                sub_417E1D((_DWORD*)thisx);
            }
            else if (*(_DWORD*)(thisx + 428) == 52 || *(_DWORD*)(thisx + 428) == 53 || *(_DWORD*)(thisx + 428) == 56)
            {
                sub_417FC1(*(_DWORD*)(thisx + 304));
                sub_417EE0(thisx);
            }
            else if (*(_DWORD*)(thisx + 428) == 54 || *(_DWORD*)(thisx + 428) == 55)
            {
                sub_417EE0(*(_DWORD*)(thisx + 304));
                sub_417FC1(thisx);
            }
            else
            {
                sub_417DCC(*(_DWORD*)(thisx + 304));
                *(_DWORD*)(thisx + 304) = 0;
                sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
            }
        }
    }
    v15 = 0;
    v14 = 0;
    for (i = 0; i < 6; ++i)
    {
        v11 = 0;
        switch (*((unsigned __int8*)a2 + i + 11) / 10)
        {
        case 1:
            v11 = 1;
            break;
        case 2:
            sub_4097DF((void*)thisx, (int)&v13);
            if (i && i != 3)
            {
                if (i == 1 || i == 4)
                {
                    v2 = sub_426210((char*)byte_4B9B10);
                    if (*(_DWORD*)(thisx + 332) >= 400 * sub_4261D0(v2))
                        v11 = -1;
                    else
                        v11 = 1;
                }
                else
                {
                    v11 = 1;
                }
            }
            else if (v13 >= 160)
            {
                v11 = -1;
            }
            else
            {
                v11 = 1;
            }
            break;
        case 3:
            if (i && i != 3)
            {
                v11 = 1;
            }
            else if (*(_DWORD*)(thisx + 424))
            {
                v11 = 1;
            }
            else
            {
                v11 = -1;
            }
            break;
        case 4:
            if (*(int*)v17[i] <= 0)
                v6 = (*(_DWORD*)v17[i] >= 0) - 1;
            else
                v6 = 1;
            v11 = v6;
            break;
        default:
            break;
        }
        v12 = v11 * *(_DWORD*)&a2[2 * i + 10];
        v5 = *((unsigned __int8*)a2 + i + 11) % 10;
        switch (v5)
        {
        case 1:
            *(_DWORD*)v17[i] = v12;
            break;
        case 2:
            *(_DWORD*)v17[i] += v12;
            break;
        case 3:
            *(_DWORD*)v17[i] = v12 * *(_DWORD*)v17[i] / 100;
            break;
        }
        if (i)
        {
            if (i == 1)
                v14 = v11;
        }
        else
        {
            v15 = v11;
        }
    }
    if (*((_BYTE*)a2 + 11))
    {
        if ((v10 = v15 * *((_DWORD*)a2 + 11), v10 > 0) && *(_DWORD*)(thisx + 372) > v10
            || v10 < 0 && *(_DWORD*)(thisx + 372) < v10)
        {
            *(_DWORD*)(thisx + 372) = v10;
        }
    }
    if (*((_BYTE*)a2 + 12))
    {
        if ((v9 = v14 * *((_DWORD*)a2 + 12), v9 > 0) && *(_DWORD*)(thisx + 376) > v9
            || v9 < 0 && *(_DWORD*)(thisx + 376) < v9)
        {
            *(_DWORD*)(thisx + 376) = v9;
        }
    }
    switch (*((_BYTE*)a2 + 10))
    {
    case 1:
        *(_DWORD*)(thisx + 432) = 38;
        break;
    case 2:
        *(_DWORD*)(thisx + 432) = 17;
        break;
    case 3:
        *(_DWORD*)(thisx + 432) = 22;
        break;
    case 4:
        *(_DWORD*)(thisx + 432) = 23;
        break;
    case 5:
        *(_DWORD*)(thisx + 432) = 18;
        break;
    case 6:
        *(_DWORD*)(thisx + 432) = 24;
        break;
    case 7:
        *(_DWORD*)(thisx + 432) = 20;
        break;
    case 8:
        *(_DWORD*)(thisx + 432) = 25;
        break;
    case 9:
        *(_DWORD*)(thisx + 432) = 21;
        break;
    case 0xA:
        *(_DWORD*)(thisx + 432) = 19;
        break;
    default:
        break;
    }
    if (*((_BYTE*)a2 + 10))
    {
        *(_DWORD*)(thisx + 392) = 1;
        *(_DWORD*)(thisx + 340) = 0;
        *(_DWORD*)(thisx + 344) = 0;
        *(_DWORD*)(thisx + 380) = 0;
        *(_DWORD*)(thisx + 384) = 0;
        *(_DWORD*)(thisx + 444) = 0;
        *(_BYTE*)(thisx + 176) = 0;
        *(_BYTE*)(thisx + 177) = 0;
        *(_BYTE*)(thisx + 178) = 1;
    }
    else if (!*(_DWORD*)(thisx + 392) && *((_BYTE*)a2 + 13) && *(int*)(thisx + 348) < 0)
    {
        *(_DWORD*)(thisx + 432) = 50;
    }
    if (byte_4B99DF)
    {
        if (!a2[2])
            a2[2] = 1;
        v3 = *a2;
        v4 = a2[1];
        v8 = sub_426970((int*)byte_4B9B10) * v4 / a2[2] + v3;
        if (v8 > 0)
            sub_41261C((_WORD*)thisx, v8, 0, 1);
    }
    sub_4747D2((int*)byte_4B9B10, *((unsigned __int8*)a2 + 6), a2[4]);
    if ((a2[26] & 0xC) != 0)
        sub_451A0A((int*)byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
}