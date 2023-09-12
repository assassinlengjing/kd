#include "sub.h" 
int sub_451AF1(int thisx)
{
    _DWORD* v3; // [esp+4h] [ebp-184h]
    int v4; // [esp+8h] [ebp-180h]
    int v5; // [esp+Ch] [ebp-17Ch] BYREF
    int v6; // [esp+10h] [ebp-178h]
    int v7; // [esp+14h] [ebp-174h]
    int v8; // [esp+1Ch] [ebp-16Ch]
    int v9; // [esp+20h] [ebp-168h]
    int v10; // [esp+44h] [ebp-144h]
    int i; // [esp+48h] [ebp-140h]
    int v12; // [esp+4Ch] [ebp-13Ch] BYREF
    int v13; // [esp+50h] [ebp-138h]
    int v14; // [esp+54h] [ebp-134h]
    int v15; // [esp+58h] [ebp-130h]
    int v16; // [esp+5Ch] [ebp-12Ch]
    int v17; // [esp+60h] [ebp-128h]
    int v18; // [esp+70h] [ebp-118h]
    CHAR FileName[256]; // [esp+88h] [ebp-100h] BYREF

    *(_DWORD*)(thisx + 104) = 9;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 29) = 0;
    *(_DWORD*)(thisx + 2540) = 0;
    sub_49DB90(&v12);
    v13 = 0;
    v14 = 0;
    v15 = 32;
    v16 = 32;
    v17 = 2;
    v18 = 0;
    v12 = -1;
    sub_49DA45((_DWORD*)byte_4BDC60, aGraphicStagese, (int)&v12);
    if (v12 <= 0)
        dword_4B9244 = 0;
    else
        dword_4B9244 = v12;
    for (i = 0; i < *(_DWORD*)(thisx + 13388); ++i)
    {
        v13 = 0;
        v14 = 0;
        v15 = -1;
        v16 = -1;
        v17 = 1;
        v18 = -1;
        v12 = -1;
        wsprintfA(FileName, "Stage\\Stage%02d_Select.bmp", i + 1);
        sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)&v12);
        sub_475770((_WORD*)(20 * i + *(_DWORD*)(thisx + 13392)), v12);
        if (v12 <= 0)
        {
            v4 = sub_49CB92((int)byte_4BDC60, -1, 32, 32, 0, 0);
            if (v4 != -1)
            {
                wsprintfA(FileName, "Stage\\Stage%02d.bmp", i + 1);
                if (sub_49B9E0((_DWORD*)byte_4BDC60, FileName))
                {
                    v3 = (_DWORD*)sub_475750((_DWORD*)byte_4BDC60);
                    v10 = unknown_libname_13(v3);
                    v13 = v10 / 2 - 88;
                    v14 = 0;
                    v15 = 176;
                    v16 = 176;
                    v17 = 1;
                    v18 = -1;
                    v12 = -1;
                    if (sub_49D318((int)byte_4BDC60, (int)&v12))
                    {
                        sub_49C15E((int)&v5);
                        v6 = 0;
                        v7 = 0;
                        v5 = v12;
                        v8 = 46;
                        v9 = 46;
                        sub_49CC5B((short*)byte_4BDC60, v4, &v5);
                        v6 = 0;
                        v7 = 0;
                        v5 = dword_4B9244;
                        v8 = 256;
                        v9 = 256;
                        sub_49CC5B((short*)byte_4BDC60, v4, &v5);
                        sub_475770((_WORD*)(20 * i + *(_DWORD*)(thisx + 13392)), v4);
                        sub_49DA8A((_DWORD*)byte_4BDC60, v12);
                    }
                }
            }
        }
    }
    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 10, 2, 20, 4);
    sub_452045((_BYTE*)thisx, 7, 8, 27, 12);
    return sub_456D33((const CHAR*)thisx, aCharselWav_0, 1, 0);
}

