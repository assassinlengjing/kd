#include "sub.h" 
int sub_482D44(_DWORD* thisx, LPSTR lpString1)
{
    CHAR v4[20]; // [esp+4h] [ebp-24h] BYREF
    char v5; // [esp+18h] [ebp-10h]
    int v6; // [esp+1Ch] [ebp-Ch]
    int v7; // [esp+20h] [ebp-8h]
    int v8; // [esp+24h] [ebp-4h]

    if (!*thisx)
        return 0;
    v7 = 0;
    v8 = thisx[2];
    v6 = 0;
    while (1)
    {
        if (v6)
        {
            v6 = 0;
            *lpString1 = 0;
            v7 = 0;
            v8 = thisx[2];
        }
        if (thisx[2] >= thisx[1])
            break;
        v5 = *(_BYTE*)(*thisx + thisx[2]);
        if (v5 == 9)
            v5 = 32;
        switch (v5)
        {
        case 47:
            if (thisx[3] && !v7)
            {
                sub_482FAA(thisx);
                *lpString1 = 110;
                lpString1[1] = 0;
                thisx[3] = 0;
                dword_4CA1D0 = 0;
                return 1;
            }
            if (!sub_482FAA(thisx))
                return 0;
            v6 = 1;
            break;
        case 13:
        case 10:
            if (thisx[3] && v7)
                goto LABEL_35;
            ++thisx[2];
            if (thisx[3] && !v7)
            {
                *lpString1 = 110;
                lpString1[1] = 0;
                thisx[3] = 0;
                return 1;
            }
            v6 = 1;
            break;
        case 44:
            ++thisx[2];
            goto LABEL_35;
        default:
            if (v5 == 32 && v7)
            {
                ++thisx[2];
                goto LABEL_35;
            }
            if (v5 != 32 || v7)
            {
                ++v7;
                ++thisx[2];
                thisx[3] = 1;
            }
            else
            {
                v8 = ++thisx[2];
            }
            break;
        }
    }
    if (!v7)
    {
        wsprintfA(v4, " pos %d size %d ", thisx[2], thisx[1]);
        return 0;
    }
LABEL_35:
    lstrcpynA(lpString1, (LPCSTR)(v8 + *thisx), v7 + 1);
    return 1;
}

