#include "sub.h" 
unsigned __int16* sub_48DD3C(int thisx)
{
    int v1; // esi
    unsigned __int16* result; // eax
    int* v3; // eax
    int* v4; // eax
    int v5; // esi
    int v7[4]; // [esp+8h] [ebp-84h] BYREF
    char v8[16]; // [esp+18h] [ebp-74h] BYREF
    int v9; // [esp+28h] [ebp-64h]
    int v10; // [esp+2Ch] [ebp-60h]
    int v11; // [esp+30h] [ebp-5Ch]
    int i; // [esp+34h] [ebp-58h]
    int v13; // [esp+38h] [ebp-54h]
    int v14; // [esp+3Ch] [ebp-50h]
    int v15; // [esp+40h] [ebp-4Ch]
    int v16; // [esp+44h] [ebp-48h]
    unsigned int v17; // [esp+48h] [ebp-44h]
    int v18; // [esp+4Ch] [ebp-40h]
    int v19; // [esp+50h] [ebp-3Ch]
    int v20; // [esp+54h] [ebp-38h] BYREF
    int v21; // [esp+58h] [ebp-34h]
    unsigned int v22; // [esp+5Ch] [ebp-30h]
    int v23; // [esp+6Ch] [ebp-20h]
    int v24; // [esp+70h] [ebp-1Ch]

    v19 = *(__int16*)(thisx + 72) * sub_446465((char*)byte_4B9B10) / 100;
    v18 = *(_DWORD*)(thisx + 104) / 100 - v19;
    v1 = *(_DWORD*)(thisx + 108) / 100 - *(_DWORD*)(thisx + 112) / 100;
    v17 = sub_4464BA((int)byte_4B9B10) + v1;
    result = (unsigned __int16*)sub_49C15E((int)&v20);
    if (dword_4B93A8)
    {
        v23 = 0;
        v24 = 0;
        for (i = 0; i < 2; ++i)
        {
            if (i)
            {
                if (i == 1)
                {
                    LOBYTE(v11) = sub_4754B0((_BYTE*)thisx);
                    v4 = sub_475F00((_DWORD*)thisx, v7, *(_DWORD*)(thisx + 52));
                    v13 = *v4;
                    v14 = v4[1];
                    v15 = v4[2];
                    v16 = v4[3];
                }
            }
            else
            {
                LOBYTE(v11) = sub_48E190((char*)thisx);
                v3 = sub_48E150((_DWORD*)thisx, (_DWORD*)v8, *(_DWORD*)(thisx + 52));
                v13 = *v3;
                v14 = v3[1];
                v15 = v3[2];
                v16 = v3[3];
            }
            result = (unsigned __int16*)(unsigned __int8)v11;
            if ((_BYTE)v11 && (v13 || v14 || v15 || v16))
            {
                if ((unsigned __int8)v11 == 1)
                {
                    v18 = -v19;
                    v17 = sub_4464BA((int)byte_4B9B10);
                }
                else
                {
                    v18 = *(_DWORD*)(thisx + 104) / 100 - v19;
                    v5 = *(_DWORD*)(thisx + 108) / 100 - *(_DWORD*)(thisx + 112) / 100;
                    v17 = sub_4464BA((int)byte_4B9B10) + v5;
                }
                if (v13 > v15)
                {
                    v10 = v13;
                    v13 = v15;
                    v15 = v10;
                }
                if (v14 > v16)
                {
                    v9 = v14;
                    v14 = v16;
                    v16 = v9;
                }
                v21 = v13 + v18;
                v22 = v14 + v17;
                v20 = dword_4B9210 + 4 * i;
                sub_49AB05((int)byte_4BDC60, &v20);
                v21 = v18 + v15 - 8;
                v22 = v14 + v17;
                v20 = dword_4B9210 + 4 * i + 1;
                sub_49AB05((int)byte_4BDC60, &v20);
                v21 = v13 + v18;
                v22 = v17 + v16 - 8;
                v20 = dword_4B9210 + 4 * i + 2;
                sub_49AB05((int)byte_4BDC60, &v20);
                v21 = v18 + v15 - 8;
                v22 = v17 + v16 - 8;
                v20 = dword_4B9210 + 4 * i + 3;
                result = sub_49AB05((int)byte_4BDC60, &v20);
            }
        }
    }
    return result;
}
