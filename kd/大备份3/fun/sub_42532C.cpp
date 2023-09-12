#include "sub.h" 
int* sub_42532C(_DWORD* thisx, int a2, int a3, int a4, int* a5)
{
    char* v5; // eax
    char* v6; // eax
    int* result; // eax
    int v8; // [esp+0h] [ebp-48h]
    int v9; // [esp+4h] [ebp-44h]
    int v10; // [esp+8h] [ebp-40h]
    int v11; // [esp+Ch] [ebp-3Ch]
    int v13; // [esp+14h] [ebp-34h]
    int v14; // [esp+18h] [ebp-30h]
    int i; // [esp+1Ch] [ebp-2Ch]
    int v16; // [esp+20h] [ebp-28h]
    int v17; // [esp+24h] [ebp-24h]
    int v18; // [esp+28h] [ebp-20h]
    int v19; // [esp+2Ch] [ebp-1Ch]
    int v20; // [esp+2Ch] [ebp-1Ch]
    int v21; // [esp+30h] [ebp-18h]
    int v22; // [esp+30h] [ebp-18h]
    int v23; // [esp+34h] [ebp-14h]
    int v24; // [esp+38h] [ebp-10h]
    int v25; // [esp+3Ch] [ebp-Ch]
    int v26; // [esp+40h] [ebp-8h]
    int v27; // [esp+44h] [ebp-4h]

    v25 = sub_446465((char*)unk_4B9B10);
    v5 = sub_426210((char*)unk_4B9B10);
    v24 = sub_4897D0(v5) / 8;
    v6 = sub_426210((char*)unk_4B9B10);
    v23 = sub_4261D0(v6);
    v21 = 0;
    v19 = 0;
    if (a4)
    {
        if (a4 == 1)
        {
            if (a2 <= 0)
                v9 = (a2 >= 0) - 1;
            else
                v9 = 1;
            v21 = (v9 << 7) + thisx[82] / 100;
            if (a3 <= 0)
                v8 = (a3 >= 0) - 1;
            else
                v8 = 1;
            v19 = 44 * v8 + thisx[83] / 100;
        }
    }
    else
    {
        if (a2 <= 0)
            v11 = (a2 >= 0) - 1;
        else
            v11 = 1;
        v21 = (v11 << 7) + v25 + 160;
        if (a3 <= 0)
            v10 = (a3 >= 0) - 1;
        else
            v10 = 1;
        v19 = 3 * v23 * v10 + 4 * v23;
    }
    v22 = v21 / 8;
    v20 = v19 / 8;
    if (v22 > 0)
    {
        if (v22 >= v24)
            v22 = v24 - 2;
    }
    else
    {
        v22 = 1;
    }
    if (v20 >= 0)
    {
        if (v20 >= v23)
            v20 = v23 - 1;
    }
    else
    {
        v20 = 0;
    }
    v27 = (v25 + 7) / 8;
    v26 = 0;
    while (1)
    {
        v13 = 4 * v26;
        if (!(4 * v26))
            v13 = 1;
        v16 = v22;
        v14 = v20 - v26;
        v18 = 1;
        v17 = 1;
        for (i = 0;
            i < v13
            && (v16 < v27 || v16 >= v27 + 40 || v16 < 1 || v16 >= v24 - 1 || v14 < 0 || v14 >= v23 || !sub_4773CC(v16, v14));
            ++i)
        {
            v16 += v18;
            v14 += v17;
            if (v14 == v20)
                v18 = -v18;
            if (v16 == v22)
                v17 = -v17;
        }
        if (i < v13)
            break;
        if (++v26 > v24 && v26 > v23)
            goto LABEL_47;
    }
    v22 = 800 * v16 + 400;
    v20 = 800 * v14 + 400;
LABEL_47:
    *a5 = v22;
    result = a5;
    a5[1] = v20;
    return result;
}
