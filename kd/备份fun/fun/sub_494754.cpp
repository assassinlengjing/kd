#include "sub.h" 
int sub_494754(int thisx)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-1Ch]
    int v3; // [esp+4h] [ebp-18h]
    int v4; // [esp+8h] [ebp-14h]
    int v5; // [esp+Ch] [ebp-10h]
    int v6; // [esp+10h] [ebp-Ch]
    int v7; // [esp+14h] [ebp-8h]

    sub_49951D((int*)thisx);
    sub_4995EB((short*)thisx);
    if (*(_DWORD*)(thisx + 12) == 7)
    {
        result = thisx;
        *(_DWORD*)(thisx + 120) = -*(_DWORD*)(thisx + 120);
    }
    else
    {
        if (*(int*)(thisx + 120) <= 0)
            v7 = -*(_DWORD*)(thisx + 120);
        else
            v7 = *(_DWORD*)(thisx + 120);
        if (v7 > 500)
        {
            if (*(int*)(thisx + 120) <= 0)
                v6 = (*(_DWORD*)(thisx + 120) >= 0) - 1;
            else
                v6 = 1;
            *(_DWORD*)(thisx + 120) = 500 * v6;
        }
        if (*(int*)(thisx + 124) <= 0)
            v5 = -*(_DWORD*)(thisx + 124);
        else
            v5 = *(_DWORD*)(thisx + 124);
        if (v5 > 500)
        {
            if (*(int*)(thisx + 124) <= 0)
                v4 = (*(_DWORD*)(thisx + 124) >= 0) - 1;
            else
                v4 = 1;
            *(_DWORD*)(thisx + 124) = 500 * v4;
        }
        *(_DWORD*)(thisx + 16) = 3;
        *(_DWORD*)(thisx + 8) = 83;
        *(_DWORD*)(thisx + 120) = -*(_DWORD*)(thisx + 120) / 2;
        *(int*)(thisx + 124) /= 2;
        *(int*)(thisx + 128) /= 2;
        *(_DWORD*)(thisx + 144) = 0;
        *(_DWORD*)(thisx + 148) = 0;
        *(_DWORD*)(thisx + 168) = 0;
        *(_BYTE*)(thisx + 180) = 0;
        if (*(_DWORD*)(thisx + 172))
            *(_DWORD*)(thisx + 152) = 30;
        result = *(unsigned __int8*)(thisx + 72);
        if (result == 2)
        {
            v3 = *(_DWORD*)(thisx + 76);
            if (v3)
            {
                if (v3 == 1)
                    *(_DWORD*)(thisx + 76) = 2;
            }
            else
            {
                result = thisx;
                *(_DWORD*)(thisx + 76) = 3;
            }
        }
        else
        {
            result = *(unsigned __int8*)(thisx + 72);
            if (result == 3)
            {
                v2 = *(_DWORD*)(thisx + 76);
                if (v2)
                {
                    if (v2 == 1)
                        *(_DWORD*)(thisx + 76) = 3;
                }
                else
                {
                    result = thisx;
                    *(_DWORD*)(thisx + 76) = 4;
                }
            }
            else
            {
                result = *(unsigned __int8*)(thisx + 72);
                if (result == 12)
                {
                    *(_BYTE*)(thisx + 71) = 0;
                    *(_BYTE*)(thisx + 68) = 0;
                    result = thisx;
                    *(_DWORD*)(thisx + 168) = 0;
                }
            }
        }
    }
    return result;
}
