#include "sub.h" 
_DWORD* sub_470C48(int thisx)
{
    int v1; // edx
    _DWORD* result; // eax
    int v3; // eax
    char* v4; // eax
    int v5; // [esp-4h] [ebp-528h]
    int v7[256]; // [esp+4h] [ebp-520h] BYREF
    int v8; // [esp+404h] [ebp-120h]
    int v9; // [esp+408h] [ebp-11Ch]
    int v10; // [esp+40Ch] [ebp-118h]
    _DWORD* v11; // [esp+410h] [ebp-114h]
    __int16* v12; // [esp+414h] [ebp-110h]
    CHAR FileName[256]; // [esp+418h] [ebp-10Ch] BYREF
    int j; // [esp+518h] [ebp-Ch]
    int i; // [esp+51Ch] [ebp-8h]
    int v16; // [esp+520h] [ebp-4h]

    v16 = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        for (i = 0; i < (unsigned __int8)unk_4B9986; ++i)
        {
            sub_477F0C(i);
            LOBYTE(v1) = i;
            if (sub_476DC7(v1, 0))
                v16 = 1;
        }
        if (v16)
            *(_DWORD*)(thisx + 2540) = 240;
    }
    if ((int)++ * (_DWORD*)(thisx + 2540) <= 240 && (*(_BYTE*)(thisx + 2562) || *(int*)(thisx + 2540) <= 60))
        goto LABEL_30;
    while (*(unsigned __int16*)(thisx + 2564) < 4u)
    {
        for (j = *(unsigned __int16*)(thisx + 2566); j < 4; ++j)
        {
            if (*(unsigned __int16*)(thisx + 2564) + 1 == *(unsigned __int8*)(j + thisx + 13044))
            {
                *(_WORD*)(thisx + 2566) = j + 1;
                break;
            }
        }
        if (j != 4)
            break;
        ++* (_WORD*)(thisx + 2564);
        *(_WORD*)(thisx + 2566) = 0;
    }
    *(_DWORD*)(thisx + 2540) = 0;
    if ((unsigned __int8)++ * (_BYTE*)(thisx + 2562) < 5u)
    {
    LABEL_30:
        if (!*(_DWORD*)(thisx + 2540))
        {
            v9 = *(unsigned __int16*)(thisx + 2564);
            v8 = *(unsigned __int8*)(thisx + *(unsigned __int8*)(thisx + 2562) + 13047);
            v10 = *(__int16*)(thisx + 244 * v8 + 1628);
            v11 = (_DWORD*)sub_488E1E((_DWORD*)(thisx + 128), 0);
            v12 = (__int16*)(84 * v10 + unk_4B92D4);
            sub_475DB0(v11, v10);
            v3 = sub_475DD0(v12, v9);
            sub_48DC0D((int)v11, v3);
            wsprintfA(FileName, "Graphic\\CheerGirl_Palette%02d.bin", v8 + 1);
            sub_47846F(FileName, (int)v7);
            sub_4A0AE7((void*)unk_4B9290, (int)v7, 256);
            v5 = sub_475DF0((_DWORD*)v12, v9);
            v4 = unknown_libname_18((char*)v12);
            wsprintfA(FileName, aS_6, v4, v5);
            sub_47FA81((int*)(thisx + 736));
            sub_47F9D6(thisx + 736, FileName, 4);
            sub_470968(thisx);
        }
        sub_488981((_DWORD*)thisx + 128);
        sub_486476((_DWORD*)(thisx + 128));
        sub_47F211(thisx + 736);
        return sub_47F98B((_DWORD*)(thisx + 736));
    }
    else
    {
        if (*(unsigned __int8*)(thisx + 2476) >= (int)*(unsigned __int8*)(thisx + 2477))
        {
            *(_DWORD*)(thisx + 108) = 25;
            result = (_DWORD*)thisx;
        }
        else
        {
            result = (_DWORD*)thisx;
            *(_DWORD*)(thisx + 108) = 23;
        }
        *(_BYTE*)(thisx + 2516) = 2;
    }
    return result;
}

