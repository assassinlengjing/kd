#include "sub.h" 
LONG sub_42142F(LONG thisx)
{
    LONG result; // eax
    int v3; // [esp+4h] [ebp-8Ch]
    LONG v4; // [esp+8h] [ebp-88h]
    int v5; // [esp+Ch] [ebp-84h]
    int v6; // [esp+18h] [ebp-78h]
    int v7; // [esp+1Ch] [ebp-74h]
    int m; // [esp+24h] [ebp-6Ch]
    int n; // [esp+28h] [ebp-68h]
    char v10; // [esp+2Ch] [ebp-64h]
    int v11; // [esp+30h] [ebp-60h]
    LONG k; // [esp+34h] [ebp-5Ch]
    LONG yTop; // [esp+38h] [ebp-58h]
    LONG yBottom; // [esp+3Ch] [ebp-54h]
    LONG j; // [esp+40h] [ebp-50h]
    LONG xRight; // [esp+44h] [ebp-4Ch]
    LONG xLeft; // [esp+48h] [ebp-48h]
    int v18; // [esp+4Ch] [ebp-44h]
    char* v19; // [esp+50h] [ebp-40h]
    int i; // [esp+54h] [ebp-3Ch]
    int v21; // [esp+64h] [ebp-2Ch]
    int v22; // [esp+64h] [ebp-2Ch]
    int v23; // [esp+6Ch] [ebp-24h]
    int v24; // [esp+70h] [ebp-20h]
    int v25; // [esp+78h] [ebp-18h]
    struct tagRECT rc; // [esp+80h] [ebp-10h] BYREF

    result = thisx;
    if (*(_DWORD*)(thisx + 52) && *(_DWORD*)(thisx + 124))
    {
        memset(*(void**)(thisx + 52), 0, 2 * *(_DWORD*)(thisx + 68) * *(_DWORD*)(thisx + 64));
        if (!sub_425D30(*(_DWORD**)(thisx + 124)))
        {
            *(_DWORD*)(thisx + 44) = sub_426090(*(_DWORD**)(thisx + 124)) / 800;
            *(_DWORD*)(thisx + 48) = sub_4260B0(*(_DWORD**)(thisx + 124)) / 800;
        }
        *(_WORD*)(*(_DWORD*)(thisx + 52) + 2 * (*(_DWORD*)(thisx + 64) * *(_DWORD*)(thisx + 48) + *(_DWORD*)(thisx + 44))) = 1;
        v23 = sub_446465((char*)byte_4B9B10) / 8;
        v21 = sub_426090(*(_DWORD**)(thisx + 124)) / 800 - v23;
        if (sub_425CD0((int*)byte_4B9B10) == 3 && (v21 < 0 || v21 >= 40))
        {
            v22 = v21 - 20;
            if (v22 >= 0)
            {
                if (v22 + 40 >= *(_DWORD*)(thisx + 64))
                    v22 = *(_DWORD*)(thisx + 64) - 40;
            }
            else
            {
                v22 = 0;
            }
            v24 = v22;
            v25 = v22 + 40;
        }
        else
        {
            v24 = v23;
            v25 = v23 + 40;
        }
        rc.right = *(_DWORD*)(thisx + 44);
        rc.left = rc.right;
        rc.bottom = *(_DWORD*)(thisx + 48);
        rc.top = rc.bottom;
        sub_41D067(*(_DWORD*)(thisx + 124), 0);
        sub_41D067(*(_DWORD*)(thisx + 124), 0);
        v19 = sub_426210((char*)byte_4B9B10);
        sub_4224A7((void*)(thisx + 124));
        for (i = 1; ; ++i)
        {
            v18 = 0;
            xLeft = rc.left;
            xRight = rc.right;
            yTop = rc.top;
            yBottom = rc.bottom;
            for (j = rc.top; ; ++j)
            {
                result = j;
                if (j > rc.bottom)
                    break;
                for (k = rc.left; k <= rc.right; ++k)
                {
                    v11 = *(_DWORD*)(thisx + 64) * j + k;
                    if (*(unsigned __int16*)(*(_DWORD*)(thisx + 52) + 2 * v11) == i)
                    {
                        v18 = 1;
                        sub_486633((int*)v19, 8 * k + 4, 8 * j + 4);
                        v10 = 1;
                        for (m = 0; m < 9; ++m)
                        {
                            if (m != 4)
                            {
                                if (m > 0)
                                    v10 *= 2;
                                v7 = m % 3 - 1 + k;
                                v6 = m / 3 - 1 + j;
                                if (v7 >= 0
                                    && v6 >= 0
                                    && v7 < *(_DWORD*)(thisx + 64)
                                    && v6 < *(_DWORD*)(thisx + 68)
                                    && v7 >= v24
                                    && v7 <= v25)
                                {
                                    v5 = *(_DWORD*)(thisx + 64) * v6 + v7;
                                    if (!*(_WORD*)(*(_DWORD*)(thisx + 52) + 2 * v5)
                                        && ((unsigned __int8)v10 & *(_BYTE*)(*(_DWORD*)(thisx + 56) + v11)) != 0)
                                    {
                                        *(_WORD*)(*(_DWORD*)(thisx + 52) + 2 * v5) = i + 1;
                                        if (v7 < xLeft)
                                            xLeft = m % 3 - 1 + k;
                                        if (v7 > xRight)
                                            xRight = m % 3 - 1 + k;
                                        if (v6 < yTop)
                                            yTop = m / 3 - 1 + j;
                                        if (v6 > yBottom)
                                            yBottom = m / 3 - 1 + j;
                                    }
                                }
                            }
                        }
                        for (n = 0; n < 2; ++n)
                        {
                            if (*(_BYTE*)(*(_DWORD*)(thisx + 60) + 2 * v11 + n))
                            {
                                v3 = *(char*)(*(_DWORD*)(thisx + 60) + 2 * v11 + n) + v11;
                                if (!*(_WORD*)(*(_DWORD*)(thisx + 52) + 2 * v3))
                                {
                                    *(_WORD*)(*(_DWORD*)(thisx + 52) + 2 * v3) = i + 1;
                                    v4 = *(char*)(*(_DWORD*)(thisx + 60) + 2 * v11 + n) + k;
                                    if (v4 < xLeft)
                                        xLeft = *(char*)(*(_DWORD*)(thisx + 60) + 2 * v11 + n) + k;
                                    if (v4 > xRight)
                                        xRight = *(char*)(*(_DWORD*)(thisx + 60) + 2 * v11 + n) + k;
                                }
                            }
                        }
                    }
                }
            }
            if (!v18)
                break;
            SetRect(&rc, xLeft, yTop, xRight, yBottom);
        }
    }
    return result;
}

