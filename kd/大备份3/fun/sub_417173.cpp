#include "sub.h" 
int sub_417173(int thisx, unsigned __int8 a2)
{
    int v2; // esi
    unsigned __int16 v3; // ax
    int v4; // esi
    int result; // eax
    int v6; // esi
    int v8; // [esp+8h] [ebp-Ch]
    int v9; // [esp+Ch] [ebp-8h]
    _DWORD* v10; // [esp+10h] [ebp-4h]

    v10 = (_DWORD*)sub_446714(unk_4B9B10, a2);
    if (v10 && *(_DWORD*)(thisx + 428) == 44 || *(_DWORD*)(thisx + 428) == 45)
    {
        *(_DWORD*)(thisx + 304) = (_DWORD)v10;
        *(_DWORD*)(thisx + 316) = (_DWORD)v10;
        if (sub_41BA53((int)v10, 0x24u, 0))
        {
            *(_DWORD*)(thisx + 432) = 178;
            *(_DWORD*)(thisx + 424) = sub_425D70(v10);
            v9 = sub_4175B4(*(_DWORD*)(thisx + 304), 1) / 2;
            sub_41EF8A((_WORD*)thisx, v9);
            v2 = sub_4175B4(*(_DWORD*)(thisx + 304), 1);
            v3 = sub_417924(thisx, 3, 1);
            sub_41F169((_WORD*)thisx, (v2 + v3) / 2);
            memset((void*)(thisx + 453), 0, 8u);
            memset((void*)(thisx + 461), 0, 8u);
            *(_BYTE*)(thisx + a2 + 453) = -1;
        }
        else
        {
            *(_DWORD*)(thisx + 432) = 138;
            v8 = sub_4175B4(*(_DWORD*)(thisx + 304), 1) / 10;
            sub_41EF8A((_WORD*)thisx, v8);
            sub_41F169((_WORD*)thisx, *(unsigned __int16*)(thisx + 242));
            *(_BYTE*)(thisx + 248) = 2;
            *(_DWORD*)(thisx + 436) = a2;
        }
    }
    else if (v10 && sub_426070((char*)v10) == *(_BYTE*)(thisx + 193) && sub_420FA1(v10))
    {
        sub_426230((char*)v10);
        *(_DWORD*)(thisx + 432) = 84;
        *(_DWORD*)(thisx + 424) = sub_425D70(v10);
        *(_DWORD*)(thisx + 304) = 0;
    }
    else
    {
        *(_DWORD*)(thisx + 432) = 50;
        *(_DWORD*)(thisx + 304) = 0;
    }
    *(_DWORD*)(thisx + 292) = 0;
    if (*(_DWORD*)(thisx + 432) == 178)
    {
        v4 = sub_425D70(v10);
        *(_DWORD*)(thisx + 372) = 150 * ((__PAIR64__(v4, sub_425D70(v10)) - 1) >> 32);
        *(_DWORD*)(thisx + 340) = 5;
        result = thisx;
        *(_DWORD*)(thisx + 348) = -340;
        *(_DWORD*)(thisx + 360) = 30;
    }
    else
    {
        v6 = sub_425D70(v10);
        *(_DWORD*)(thisx + 372) = 250 * ((__PAIR64__(v6, sub_425D70(v10)) - 1) >> 32);
        *(_DWORD*)(thisx + 348) = -340;
        *(_DWORD*)(thisx + 360) = 25;
        result = thisx;
    }
    *(_DWORD*)(thisx + 436) = 0;
    return result;
}
