#include "sub.h" 
int sub_47C5F0()
{
    unsigned __int16 v1; // ax
    unsigned __int16 v2; // ax
    char v3; // al
    char v4; // al
    int* v5; // eax
    int* v6; // eax
    char v7; // al
    char v8; // al
    int* v9; // eax
    int* v10; // eax
    char v11[16]; // [esp+0h] [ebp-40Ch] BYREF
    char v12[16]; // [esp+10h] [ebp-3FCh] BYREF
    char v13[16]; // [esp+20h] [ebp-3ECh] BYREF
    char v14[16]; // [esp+30h] [ebp-3DCh] BYREF
    struct tagRECT v15; // [esp+40h] [ebp-3CCh] BYREF
    int v16; // [esp+50h] [ebp-3BCh]
    int v17; // [esp+54h] [ebp-3B8h]
    int v18; // [esp+58h] [ebp-3B4h]
    int v19; // [esp+5Ch] [ebp-3B0h]
    int v20; // [esp+60h] [ebp-3ACh]
    int v21; // [esp+64h] [ebp-3A8h]
    int v22; // [esp+68h] [ebp-3A4h]
    int m; // [esp+6Ch] [ebp-3A0h]
    int v24; // [esp+70h] [ebp-39Ch]
    char* v25; // [esp+74h] [ebp-398h]
    char* v26; // [esp+78h] [ebp-394h]
    int v27; // [esp+7Ch] [ebp-390h]
    int v28; // [esp+80h] [ebp-38Ch]
    struct tagRECT rc; // [esp+84h] [ebp-388h] BYREF
    int v30; // [esp+94h] [ebp-378h]
    int yTop; // [esp+98h] [ebp-374h]
    int v32; // [esp+9Ch] [ebp-370h]
    int yBottom; // [esp+A0h] [ebp-36Ch]
    int v34; // [esp+A4h] [ebp-368h]
    int v35; // [esp+A8h] [ebp-364h]
    char* v36; // [esp+ACh] [ebp-360h]
    int k; // [esp+B0h] [ebp-35Ch]
    int v38; // [esp+B4h] [ebp-358h]
    int v39[15]; // [esp+B8h] [ebp-354h] BYREF
    int v40[15]; // [esp+F4h] [ebp-318h] BYREF
    int v41[15]; // [esp+130h] [ebp-2DCh] BYREF
    int v42[15]; // [esp+16Ch] [ebp-2A0h] BYREF
    int v43[15]; // [esp+1A8h] [ebp-264h] BYREF
    int v44[15]; // [esp+1E4h] [ebp-228h] BYREF
    int v45[15]; // [esp+220h] [ebp-1ECh] BYREF
    int v46; // [esp+25Ch] [ebp-1B0h] BYREF
    int v47; // [esp+260h] [ebp-1ACh]
    int v48; // [esp+264h] [ebp-1A8h]
    int v49; // [esp+268h] [ebp-1A4h]
    int v50; // [esp+26Ch] [ebp-1A0h]
    int v51; // [esp+270h] [ebp-19Ch]
    int v52; // [esp+280h] [ebp-18Ch]
    int v53; // [esp+298h] [ebp-174h] BYREF
    int v54; // [esp+29Ch] [ebp-170h]
    int v55; // [esp+2A0h] [ebp-16Ch]
    int v56; // [esp+2A4h] [ebp-168h]
    int v57; // [esp+2A8h] [ebp-164h]
    int v58; // [esp+2ACh] [ebp-160h]
    int v59; // [esp+2BCh] [ebp-150h]
    int v60; // [esp+2D4h] [ebp-138h] BYREF
    int v61; // [esp+2D8h] [ebp-134h]
    int v62; // [esp+2DCh] [ebp-130h]
    int v63; // [esp+2E0h] [ebp-12Ch]
    int v64; // [esp+2E4h] [ebp-128h]
    int v65; // [esp+2E8h] [ebp-124h]
    int v66; // [esp+2F8h] [ebp-114h]
    int v67; // [esp+310h] [ebp-FCh] BYREF
    int v68; // [esp+314h] [ebp-F8h]
    int v69; // [esp+318h] [ebp-F4h]
    int v70; // [esp+31Ch] [ebp-F0h]
    int v71; // [esp+320h] [ebp-ECh]
    int v72; // [esp+324h] [ebp-E8h]
    int v73; // [esp+334h] [ebp-D8h]
    int v74; // [esp+34Ch] [ebp-C0h] BYREF
    int v75; // [esp+350h] [ebp-BCh]
    int v76; // [esp+354h] [ebp-B8h]
    int v77; // [esp+358h] [ebp-B4h]
    int v78; // [esp+35Ch] [ebp-B0h]
    int v79; // [esp+360h] [ebp-ACh]
    int v80; // [esp+370h] [ebp-9Ch]
    int v81[15]; // [esp+388h] [ebp-84h] BYREF
    int v82; // [esp+3C4h] [ebp-48h] BYREF
    int v83; // [esp+3C8h] [ebp-44h]
    int v84; // [esp+3CCh] [ebp-40h]
    int v85; // [esp+3D0h] [ebp-3Ch]
    int v86; // [esp+3D4h] [ebp-38h]
    int v87; // [esp+3D8h] [ebp-34h]
    int v88; // [esp+3E8h] [ebp-24h]
    int j; // [esp+400h] [ebp-Ch]
    int i; // [esp+404h] [ebp-8h]
    int v91; // [esp+408h] [ebp-4h]

    sub_467CD0((int*)byte_4B9B10);
    v91 = sub_49CB92((int)byte_4BDC60, -1, 320, 240, 0, 0);
    if (v91 == -1)
        return 0;
    dword_4B9248 = v91;
    sub_49DB90(&v82);
    v83 = 0;
    v84 = 0;
    v85 = -1;
    v86 = -1;
    v87 = 1;
    v88 = 0;
    v82 = -1;
    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicFont00B, (int)&v82))
    {
        dword_4B921C = v82;
        v83 = 0;
        v84 = 0;
        v85 = -1;
        v86 = -1;
        v87 = 1;
        v88 = 0;
        v82 = -1;
        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicFont01B, (int)&v82))
        {
            dword_4B9218 = v82;
            sub_49DB90(v81);
            v81[1] = 0;
            v81[2] = 0;
            v81[3] = 8;
            v81[4] = 8;
            v81[5] = -1;
            v81[9] = 0;
            v81[0] = -1;
            v81[14] = 0;
            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicDamagef, (int)v81))
            {
                dword_4B91FC = v81[0];
                sub_49DB90(&v74);
                v75 = 0;
                v76 = 0;
                v77 = 40;
                v78 = 8;
                v79 = 1;
                v80 = -1;
                v74 = -1;
                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_2, (int)&v74))
                {
                    dword_4B91F8 = v74;
                    v75 = 0;
                    v76 = 8;
                    v77 = 8;
                    v78 = 8;
                    v79 = 5;
                    v80 = -1;
                    v74 = -1;
                    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_3, (int)&v74))
                    {
                        v75 = 0;
                        v76 = 16;
                        v77 = 8;
                        v78 = 8;
                        v79 = 10;
                        v80 = -1;
                        v74 = -1;
                        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_4, (int)&v74))
                        {
                            dword_4B91F4 = v74;
                            sub_49DB90(&v67);
                            v68 = 0;
                            v69 = 0;
                            v70 = 8;
                            v71 = 8;
                            v72 = 8;
                            v73 = 0;
                            v67 = -1;
                            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicEffect0, (int)&v67))
                            {
                                dword_4B91F0 = v67;
                                v68 = 0;
                                v69 = 16;
                                v70 = 16;
                                v71 = 16;
                                v72 = 2;
                                v73 = 0;
                                v67 = -1;
                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicEffect0_0, (int)&v67))
                                {
                                    v68 = 0;
                                    v69 = 32;
                                    v70 = 8;
                                    v71 = 8;
                                    v72 = 3;
                                    v73 = 0;
                                    v67 = -1;
                                    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicEffect0_1, (int)&v67))
                                    {
                                        v68 = 0;
                                        v69 = 40;
                                        v70 = 8;
                                        v71 = 8;
                                        v72 = 2;
                                        v73 = 0;
                                        v67 = -1;
                                        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicEffect0_2, (int)&v67))
                                        {
                                            v68 = 0;
                                            v69 = 48;
                                            v70 = 32;
                                            v71 = 8;
                                            v72 = 13;
                                            v73 = 0;
                                            v67 = -1;
                                            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicEffect0_3, (int)&v67))
                                            {
                                                sub_49DB90(&v60);
                                                v61 = 0;
                                                v62 = 0;
                                                v63 = -1;
                                                v64 = -1;
                                                v65 = 1;
                                                v66 = -1;
                                                v60 = -1;
                                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_5, (int)&v60))
                                                    dword_4B9208 = v60;
                                                else
                                                    dword_4B9208 = 0;
                                                v61 = 0;
                                                v62 = 0;
                                                v63 = -1;
                                                v64 = -1;
                                                v65 = 1;
                                                v66 = -1;
                                                v60 = -1;
                                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_6, (int)&v60))
                                                {
                                                    dword_4B920C = v60;
                                                    if (!dword_4B9208)
                                                        dword_4B9208 = v60;
                                                    sub_49DB90(&v53);
                                                    v54 = 0;
                                                    v55 = 0;
                                                    v56 = 48;
                                                    v57 = 8;
                                                    v58 = 3;
                                                    v59 = 0;
                                                    v53 = -1;
                                                    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_7, (int)&v53))
                                                    {
                                                        v54 = 0;
                                                        v55 = 32;
                                                        v56 = 48;
                                                        v57 = 8;
                                                        v58 = 2;
                                                        v59 = 0;
                                                        v53 = -1;
                                                        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_8, (int)&v53))
                                                        {
                                                            dword_4B91DC = v53;
                                                            v54 = 96;
                                                            v55 = 32;
                                                            v56 = 8;
                                                            v57 = 8;
                                                            v58 = 5;
                                                            v59 = 0;
                                                            v53 = -1;
                                                            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_9, (int)&v53))
                                                            {
                                                                sub_49DB90(&v46);
                                                                v47 = 0;
                                                                v48 = 24;
                                                                v49 = 8;
                                                                v50 = 8;
                                                                v51 = 11;
                                                                v52 = 0;
                                                                v46 = -1;
                                                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_10, (int)&v46))
                                                                {
                                                                    dword_4B9200 = v46;
                                                                    v47 = 104;
                                                                    v48 = 8;
                                                                    v49 = 40;
                                                                    v50 = 8;
                                                                    v51 = 1;
                                                                    v46 = -1;
                                                                    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_11, (int)&v46))
                                                                    {
                                                                        dword_4B91E4 = v46;
                                                                        v47 = 136;
                                                                        v48 = 16;
                                                                        v49 = 8;
                                                                        v50 = 8;
                                                                        v51 = 1;
                                                                        v46 = -1;
                                                                        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_12, (int)&v46))
                                                                        {
                                                                            sub_49DB90(v45);
                                                                            v45[1] = 0;
                                                                            v45[2] = 0;
                                                                            v45[3] = -1;
                                                                            v45[4] = -1;
                                                                            v45[5] = 1;
                                                                            v45[9] = 0;
                                                                            v45[0] = -1;
                                                                            v45[6] = 0;
                                                                            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicShadowB, (int)v45))
                                                                            {
                                                                                dword_4B9214 = v45[0];
                                                                                sub_49DB90(v44);
                                                                                v44[1] = 0;
                                                                                v44[2] = 0;
                                                                                v44[3] = 8;
                                                                                v44[4] = 8;
                                                                                v44[5] = -1;
                                                                                v44[9] = 0;
                                                                                v44[0] = -1;
                                                                                v44[6] = 0;
                                                                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicRectBmp, (int)v44))
                                                                                {
                                                                                    dword_4B9210 = v44[0];
                                                                                    sub_49DB90(v43);
                                                                                    v43[1] = 0;
                                                                                    v43[2] = 0;
                                                                                    v43[3] = -1;
                                                                                    v43[4] = 8;
                                                                                    v43[5] = -1;
                                                                                    v43[9] = 0;
                                                                                    v43[0] = -1;
                                                                                    dword_4B936C = sub_49DA45((_DWORD*)byte_4BDC60, aGraphicFaceBmp, (int)v43);
                                                                                    if (dword_4B936C)
                                                                                    {
                                                                                        dword_4B9238 = v43[0];
                                                                                        sub_49DB90(v42);
                                                                                        v42[1] = 0;
                                                                                        v42[2] = 0;
                                                                                        v42[3] = 72;
                                                                                        v42[4] = 40;
                                                                                        v42[5] = -1;
                                                                                        v42[9] = 0;
                                                                                        v42[0] = -1;
                                                                                        if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicSystem0_13, (int)v42))
                                                                                        {
                                                                                            dword_4B9240 = v42[0];
                                                                                            sub_49DB90(v41);
                                                                                            v41[1] = 0;
                                                                                            v41[2] = 0;
                                                                                            v41[3] = 32;
                                                                                            v41[4] = 32;
                                                                                            v41[5] = -1;
                                                                                            v41[9] = -1;
                                                                                            v41[0] = -1;
                                                                                            if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicStagese_1, (int)v41))
                                                                                            {
                                                                                                dword_4B9244 = v41[0];
                                                                                                sub_49DB90(v40);
                                                                                                v40[1] = 0;
                                                                                                v40[2] = 0;
                                                                                                v40[3] = 16;
                                                                                                v40[4] = 16;
                                                                                                v40[5] = -1;
                                                                                                v40[9] = 0;
                                                                                                v40[0] = -1;
                                                                                                if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicItemBmp, (int)v40))
                                                                                                {
                                                                                                    dword_4B91EC = v40[0];
                                                                                                    sub_49DB90(v39);
                                                                                                    v39[1] = 0;
                                                                                                    v39[2] = 0;
                                                                                                    memset(&v39[3], 255, 12);
                                                                                                    v39[9] = 0;
                                                                                                    v39[0] = -1;
                                                                                                    if (sub_49DA45((_DWORD*)byte_4BDC60, aGraphicWeaponB, (int)v39))
                                                                                                    {
                                                                                                        dword_4B91E8 = v39[0];
                                                                                                        for (i = 0; i < 60; ++i)
                                                                                                            dword_4B99FC[i] = -1;
                                                                                                        dword_4B99FC[0] = sub_43FC18((_DWORD*)dword_4BDB28, aSoundCursourWa);
                                                                                                        dword_4B9A00 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundClickWav);
                                                                                                        dword_4B9A04 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundJumpWav);
                                                                                                        dword_4B9A08 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundKaraburiW);
                                                                                                        dword_4B9A0C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit01Wav);
                                                                                                        dword_4B9A10 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit02Wav);
                                                                                                        dword_4B9A14 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundDown01Wav);
                                                                                                        dword_4B9A18 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSlidingWa);
                                                                                                        dword_4B9A1C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundTsukamiWa);
                                                                                                        dword_4B9A20 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit03Wav);
                                                                                                        dword_4B9A24 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundTsukitoba);
                                                                                                        dword_4B9A28 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundGuard01Wa);
                                                                                                        dword_4B9A2C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundDown03Wav);
                                                                                                        dword_4B9A30 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundGoodbyWav);
                                                                                                        dword_4B9A34 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundExplosion);
                                                                                                        dword_4B9A38 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial01);
                                                                                                        dword_4B9A3C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial02);
                                                                                                        dword_4B9A40 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial03);
                                                                                                        dword_4B9A44 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial04);
                                                                                                        dword_4B9A48 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundDown02Wav);
                                                                                                        dword_4B9A4C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundTaihouWav);
                                                                                                        dword_4B9A50 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial05);
                                                                                                        dword_4B9A54 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial06);
                                                                                                        dword_4B9A58 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial07);
                                                                                                        dword_4B9A5C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit04Wav);
                                                                                                        dword_4B9A60 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial08);
                                                                                                        dword_4B9A64 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit05Wav);
                                                                                                        dword_4B9A68 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial09);
                                                                                                        dword_4B9A6C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial10);
                                                                                                        dword_4B9A70 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial11);
                                                                                                        dword_4B9A74 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundWeaponget);
                                                                                                        dword_4B9A78 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound01Wa);
                                                                                                        dword_4B9A7C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound02Wa);
                                                                                                        dword_4B9A80 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound03Wa);
                                                                                                        dword_4B9A84 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound04Wa);
                                                                                                        dword_4B9A88 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundKaraburi2);
                                                                                                        dword_4B9A8C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound05Wa);
                                                                                                        dword_4B9A90 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial12);
                                                                                                        dword_4B9A94 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial13);
                                                                                                        dword_4B9A98 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial14);
                                                                                                        dword_4B9A9C = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial15);
                                                                                                        dword_4B9AA0 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial16);
                                                                                                        dword_4B9AA4 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial17);
                                                                                                        dword_4B9AA8 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial18);
                                                                                                        dword_4B9AAC = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial19);
                                                                                                        dword_4B9AB0 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial20);
                                                                                                        dword_4B9AB4 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundCommand01);
                                                                                                        dword_4B9AB8 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSpecial21);
                                                                                                        dword_4B9ABC = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit06Wav);
                                                                                                        dword_4B9AC0 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit07Wav);
                                                                                                        dword_4B9AC4 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundExplosion_0);
                                                                                                        dword_4B9AC8 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundDashWav);
                                                                                                        dword_4B9ACC = sub_43FC18((_DWORD*)dword_4BDB28, aSoundBound06Wa);
                                                                                                        dword_4B9AD0 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundThrow01Wa);
                                                                                                        dword_4B9AD4 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundLvupWav);
                                                                                                        dword_4B9AD8 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundCheerWav);
                                                                                                        dword_4B9ADC = sub_43FC18((_DWORD*)dword_4BDB28, aSoundHit08Wav);
                                                                                                        dword_4B9AE0 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSupercomb);
                                                                                                        dword_4B9AE4 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundSplashdow);
                                                                                                        dword_4B9AE8 = sub_43FC18((_DWORD*)dword_4BDB28, aSoundTeleportW);
                                                                                                        if (sub_47AC9D())
                                                                                                        {
                                                                                                            for (j = 0; j < 6; ++j)
                                                                                                            {
                                                                                                                for (i = 0; i < (unsigned __int16)word_4B9318[j]; ++i)
                                                                                                                {
                                                                                                                    v36 = (char*)(152 * i + dword_4B9324[j]);
                                                                                                                    LOBYTE(v38) = sub_401DFE(v36);
                                                                                                                    v38 = (unsigned __int8)v38;
                                                                                                                    for (k = 0; k < v38; ++k)
                                                                                                                    {
                                                                                                                        v1 = sub_401BEF((_DWORD*)v36, k);
                                                                                                                        LOBYTE(v35) = sub_425F50((_BYTE*)(12 * v1 + dword_4B9348[j]));
                                                                                                                        v35 = (unsigned __int8)v35;
                                                                                                                        v2 = sub_401BEF((_DWORD*)v36, k);
                                                                                                                        LOBYTE(v34) = sub_425F90((_BYTE*)(12 * v2 + dword_4B9348[j]));
                                                                                                                        v34 = (unsigned __int8)v34;
                                                                                                                        v3 = sub_401C1E((_DWORD*)v36, k, 0);
                                                                                                                        v27 = -v3 - 8 * v35;
                                                                                                                        v4 = sub_401C5B((_DWORD*)v36, k, 0);
                                                                                                                        v28 = -v4 - 8 * v34;
                                                                                                                        sub_401D24((_DWORD*)v36, k, v27, 1);
                                                                                                                        sub_401D62((_DWORD*)v36, k, v28, 1);
                                                                                                                        v5 = sub_425B90(v36, (_DWORD*)v14, 0, 0);
                                                                                                                        v30 = *v5;
                                                                                                                        yTop = v5[1];
                                                                                                                        v32 = v5[2];
                                                                                                                        yBottom = v5[3];
                                                                                                                        SetRect(&rc, -v32, yTop, -v30, yBottom);
                                                                                                                        sub_475910(v36, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
                                                                                                                        v6 = sub_425BD0(v36, (_DWORD*)v13, 0, 0);
                                                                                                                        v30 = *v6;
                                                                                                                        yTop = v6[1];
                                                                                                                        v32 = v6[2];
                                                                                                                        yBottom = v6[3];
                                                                                                                        SetRect(&rc, -v32, yTop, -v30, yBottom);
                                                                                                                        sub_475950(v36, rc.left, rc.top, rc.right, rc.bottom, 1, 0);
                                                                                                                        v7 = sub_4758D0(v36, 0);
                                                                                                                        sub_475990(v36, -v7, 1);
                                                                                                                        v8 = sub_4758F0(v36, 0);
                                                                                                                        sub_4759B0(v36, -v8, 1);
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                            for (i = 0; i < (unsigned __int16)word_4B92EC; ++i)
                                                                                                            {
                                                                                                                v26 = (char*)(140 * i + dword_4B92E8);
                                                                                                                v25 = sub_47EF20(v26);
                                                                                                                v22 = unknown_libname_2((_DWORD*)v25);
                                                                                                                LOBYTE(v24) = unknown_libname_3(v25);
                                                                                                                v24 = (unsigned __int8)v24;
                                                                                                                for (m = 0; m < v24; ++m)
                                                                                                                {
                                                                                                                    LOBYTE(v21) = sub_425F50((_BYTE*)(12
                                                                                                                        * *(unsigned __int16*)(v22 + 8 * m)
                                                                                                                        + dword_4B92F0));
                                                                                                                    v21 = (unsigned __int8)v21;
                                                                                                                    LOBYTE(v20) = sub_425F90((_BYTE*)(12
                                                                                                                        * *(unsigned __int16*)(v22 + 8 * m)
                                                                                                                        + dword_4B92F0));
                                                                                                                    v20 = (unsigned __int8)v20;
                                                                                                                    *(_BYTE*)(v22 + 8 * m + 3) = -*(_BYTE*)(v22 + 8 * m + 2)
                                                                                                                        - 8 * v21;
                                                                                                                    *(_BYTE*)(v22 + 8 * m + 5) = -*(_BYTE*)(v22 + 8 * m + 4)
                                                                                                                        - 8 * v20;
                                                                                                                    v9 = sub_47EE20(v26, (_DWORD*)v12, 0, 0);
                                                                                                                    v16 = *v9;
                                                                                                                    v17 = v9[1];
                                                                                                                    v18 = v9[2];
                                                                                                                    v19 = v9[3];
                                                                                                                    SetRect(&v15, -v18, v17, -v16, v19);
                                                                                                                    sub_47EEA0(v26, v15.left, v15.top, v15.right, v15.bottom, 1, 0);
                                                                                                                    v10 = sub_47EE60(v26, (_DWORD*)v11, 0, 0);
                                                                                                                    v16 = *v10;
                                                                                                                    v17 = v10[1];
                                                                                                                    v18 = v10[2];
                                                                                                                    v19 = v10[3];
                                                                                                                    SetRect(&v15, -v18, v17, -v16, v19);
                                                                                                                    sub_47EEE0(v26,v15.left, v15.top, v15.right, v15.bottom, 1, 0);
                                                                                                                }
                                                                                                            }
                                                                                                            sub_47732A();
                                                                                                            sub_476F0D();
                                                                                                            byte_4B91D9 = 0;
                                                                                                            byte_4B91D8 = 0;
                                                                                                            return 1;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            sub_47B2C4();
                                                                                                            return 0;
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        MessageBoxA(hWnd, &byte_4B65A4, aError_37, 0);
                                                                                                        return 0;
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    MessageBoxA(hWnd, &byte_4B6554, aError_36, 0);
                                                                                                    return 0;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                MessageBoxA(hWnd, &byte_4B64FC, aError_35, 0);
                                                                                                return 0;
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            MessageBoxA(hWnd, &byte_4B64A4, aError_34, 0);
                                                                                            return 0;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        MessageBoxA(hWnd, &byte_4B6460, aError_33, 0);
                                                                                        return 0;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    MessageBoxA(hWnd, &byte_4B6420, aError_32, 0);
                                                                                    return 0;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                MessageBoxA(hWnd, &byte_4B63E0, aError_31, 0);
                                                                                return 0;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            MessageBoxA(hWnd, &byte_4B63A0, aError_30, 0);
                                                                            return 0;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        MessageBoxA(hWnd, &byte_4B635C, aError_29, 0);
                                                                        return 0;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    MessageBoxA(hWnd, &byte_4B6304, aError_28, 0);
                                                                    return 0;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                MessageBoxA(hWnd, &byte_4B62AC, aError_27, 0);
                                                                return 0;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            MessageBoxA(hWnd, &byte_4B6258, aError_26, 0);
                                                            return 0;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        MessageBoxA(hWnd, &byte_4B6210, aError_25, 0);
                                                        return 0;
                                                    }
                                                }
                                                else
                                                {
                                                    MessageBoxA(hWnd, &byte_4B61C8, aError_24, 0);
                                                    return 0;
                                                }
                                            }
                                            else
                                            {
                                                MessageBoxA(hWnd, &byte_4B6160, aError_23, 0);
                                                return 0;
                                            }
                                        }
                                        else
                                        {
                                            MessageBoxA(hWnd, &byte_4B6110, aError_22, 0);
                                            return 0;
                                        }
                                    }
                                    else
                                    {
                                        MessageBoxA(hWnd, &byte_4B60C0, aError_21, 0);
                                        return 0;
                                    }
                                }
                                else
                                {
                                    MessageBoxA(hWnd, &byte_4B6070, aError_20, 0);
                                    return 0;
                                }
                            }
                            else
                            {
                                MessageBoxA(hWnd, &byte_4B6020, aError_19, 0);
                                return 0;
                            }
                        }
                        else
                        {
                            MessageBoxA(hWnd, &byte_4B5FD0, aError_18, 0);
                            return 0;
                        }
                    }
                    else
                    {
                        MessageBoxA(hWnd, &byte_4B5F80, aError_17, 0);
                        return 0;
                    }
                }
                else
                {
                    MessageBoxA(hWnd, &byte_4B5F34, aError_16, 0);
                    return 0;
                }
            }
            else
            {
                MessageBoxA(hWnd, &byte_4B5EE4, aError_15, 0);
                return 0;
            }
        }
        else
        {
            MessageBoxA(hWnd, &byte_4B5E9C, aError_14, 0);
            return 0;
        }
    }
    else
    {
        MessageBoxA(hWnd, &byte_4B5E58, aError_13, 0);
        return 0;
    }
}