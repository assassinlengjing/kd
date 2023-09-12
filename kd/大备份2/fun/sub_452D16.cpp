#include "sub.h" 
int sub_452D16(int thisx, double a2, double a3, double a4)
{
    int* v6; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]
    int j; // [esp+8h] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 10;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2520) = 0;
    *(_BYTE*)(thisx + 2544) = 0;
    *(_BYTE*)(thisx + 2545) = 0;
    sub_488CCB(thisx + 128);
    *(_DWORD*)(thisx + 11376) = 0;
    sub_456617(thisx);
    for (i = 0; i < 8; ++i)
        *(_WORD*)(thisx + 2 * i + 11404) = 0;
    for (j = 0; j < (unsigned __int8)byte_4B9985; ++j)
    {
        sub_41BF1D(thisx + 612 * j + 2628);
        sub_41D84A(thisx + 612 * j + 2628);
        sub_42371C(thisx + 612 * j + 2628);
        sub_452E9A(thisx);
        sub_417763((_WORD*)(thisx + 612 * j + 2628));
        if (sub_41BEA6((_DWORD*)(thisx + 612 * j + 2628)))
        {
            v6 = sub_41F0A9((_DWORD*)(thisx + 612 * j + 2628));
            sub_41F712(v6);
            sub_4224D9(v6);
            sub_422526(v6);
        }
    }
    sub_4647F2(thisx, a2, a3, a4);
    return sub_489C36((const CHAR*)(thisx + 128));
}

