#include "sub.h" 
struct tagRECT* sub_488A07(_DWORD* thisx, struct tagRECT* a2, unsigned __int8 a3, unsigned __int8 a4)
{
    int v4; // eax
    unsigned __int8 v7; // [esp+8h] [ebp-2Ch]
    int v8; // [esp+Ch] [ebp-28h]
    int v9; // [esp+Ch] [ebp-28h]
    LONG v10; // [esp+10h] [ebp-24h]
    _WORD* v11; // [esp+14h] [ebp-20h]
    int i; // [esp+18h] [ebp-1Ch]
    __int16 v13; // [esp+1Ch] [ebp-18h]
    __int16 v14; // [esp+1Ch] [ebp-18h]
    int v15; // [esp+20h] [ebp-14h]
    struct tagRECT rc; // [esp+24h] [ebp-10h] BYREF

    SetRect(&rc, 0, 0, 0, 0);
    v10 = a3;
    v15 = 0;
    while (1)
    {
        v11 = (_WORD*)sub_4816F5((int)(thisx + 1), v10, a4);
        if (!v11)
            break;
        v13 = sub_4260F0(v11);
        if (!v13)
            break;
        v8 = sub_489C74(thisx, v13 - 1);
        if (!v8)
            break;
        v15 = 1;
        if ((*(_BYTE*)(v8 + 52) & 0xC) == 4 || !v10)
            break;
        --v10;
    }
    if (v15)
    {
        rc.left = v10;
        rc.top = a4;
        rc.bottom = a4 + 1;
        do
        {
            sub_489F40(v11, 0);
            v11 = (_WORD*)sub_4816F5((int)(thisx + 1), ++v10, a4);
            if (!v11)
                break;
            v14 = sub_4260F0(v11);
            if (!v14)
                break;
            v9 = sub_489C74(thisx, v14 - 1);
            if (!v9)
                break;
        } while ((*(_BYTE*)(v9 + 52) & 8) == 8);
        rc.right = v10;
        for (i = 0; i < thisx[77]; ++i)
        {
            if (unknown_libname_6((_BYTE*)(thisx[82] + 432 * i)) == 1)
            {
                v7 = sub_475F40((_DWORD*)(thisx[82] + 432 * i)) / 8;
                v4 = sub_474DD0((_DWORD*)(thisx[82] + 432 * i));
                if (rc.left - 1 <= v7 && rc.right > v7 && a4 == (unsigned __int8)((v4 - thisx[9]) / 8))
                    sub_489F60((_BYTE*)(thisx[82] + 432 * i), 0);
            }
        }
    }
    *a2 = rc;
    return a2;
}