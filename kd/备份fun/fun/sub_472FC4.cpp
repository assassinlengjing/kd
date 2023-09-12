#include "sub.h" 
void sub_472FC4(int thisx)
{
    _DWORD* v2; // [esp+4h] [ebp-184h]
    int v3; // [esp+8h] [ebp-180h]
    int v4; // [esp+Ch] [ebp-17Ch] BYREF
    int v5; // [esp+10h] [ebp-178h]
    int v6; // [esp+14h] [ebp-174h]
    int v7; // [esp+1Ch] [ebp-16Ch]
    int v8; // [esp+20h] [ebp-168h]
    int v9; // [esp+44h] [ebp-144h]
    int i; // [esp+48h] [ebp-140h]
    int v11; // [esp+4Ch] [ebp-13Ch] BYREF
    int v12; // [esp+50h] [ebp-138h]
    int v13; // [esp+54h] [ebp-134h]
    int v14; // [esp+58h] [ebp-130h]
    int v15; // [esp+5Ch] [ebp-12Ch]
    int v16; // [esp+60h] [ebp-128h]
    int v17; // [esp+70h] [ebp-118h]
    CHAR FileName[256]; // [esp+88h] [ebp-100h] BYREF

    *(_DWORD*)(thisx + 104) = 21;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2604) = 0;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_DWORD*)(thisx + 2528) = 0;
    sub_49DB90(&v11);
    v12 = 0;
    v13 = 0;
    v14 = 32;
    v15 = 32;
    v16 = 2;
    v17 = 0;
    v11 = -1;
    sub_49DA45((_DWORD*)byte_4BDC60, aGraphicStagese_0, (int)&v11);
    if (v11 <= 0)
        dword_4B9244 = 0;
    else
        dword_4B9244 = v11;
    for (i = 0; i < *(_DWORD*)(thisx + 13388); ++i)
    {
        v12 = 0;
        v13 = 0;
        v14 = -1;
        v15 = -1;
        v16 = 1;
        v17 = -1;
        v11 = -1;
        wsprintfA(FileName, "Stage\\Stage%02d_Select.bmp", i + 1);
        sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)&v11);
        sub_475770((_WORD*)(*(_DWORD*)(thisx + 13392) + 20 * i), v11);
        if (v11 <= 0)
        {
            v3 = sub_49CB92((int)byte_4BDC60, -1, 32, 32, 0, 0);
            if (v3 != -1)
            {
                wsprintfA(FileName, "Stage\\Stage%02d.bmp", i + 1);
                if (sub_49B9E0((_DWORD*)byte_4BDC60, FileName))
                {
                    v2 = (_DWORD*)sub_475750((_DWORD*)byte_4BDC60);
                    v9 = unknown_libname_13(v2);
                    v12 = v9 / 2 - 88;
                    v13 = 0;
                    v14 = 176;
                    v15 = 176;
                    v16 = 1;
                    v17 = -1;
                    v11 = -1;
                    if (sub_49D318((int)byte_4BDC60, (int)&v11))
                    {
                        sub_49C15E((int)&v4);
                        v5 = 0;
                        v6 = 0;
                        v4 = v11;
                        v7 = 46;
                        v8 = 46;
                        sub_49CC5B((short*)byte_4BDC60, v3, &v4);
                        v5 = 0;
                        v6 = 0;
                        v4 = dword_4B9244;
                        v7 = 256;
                        v8 = 256;
                        sub_49CC5B((short*)byte_4BDC60, v3, &v4);
                        sub_475770((_WORD*)(20 * i + *(_DWORD*)(thisx + 13392)), v3);
                        sub_49DA8A((_DWORD*)byte_4BDC60, v11);
                    }
                }
            }
        }
    }
    sub_4737C8(thisx);
}