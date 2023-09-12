#include "sub.h" 
int sub_45CF7B(int thisx)
{
    int v1; // eax
    __int16 v2; // ax
    __int16 v3; // ax
    __int16 v4; // ax
    __int16 v5; // ax
    __int16 v6; // ax
    __int16 v7; // ax
    __int16 v8; // ax
    __int16 v9; // ax
    __int16 v10; // ax
    __int16 v11; // ax
    __int16 v12; // ax
    char* v13; // eax
    unsigned __int8 v14; // al
    int v16; // [esp-4h] [ebp-1F0h]
    int v17; // [esp-4h] [ebp-1F0h]
    char v19[8]; // [esp+8h] [ebp-1E4h]
    char v20[8]; // [esp+10h] [ebp-1DCh]
    int v21; // [esp+18h] [ebp-1D4h]
    int v22; // [esp+1Ch] [ebp-1D0h]
    int j; // [esp+20h] [ebp-1CCh]
    char* v24; // [esp+24h] [ebp-1C8h]
    __int16 v25[11]; // [esp+28h] [ebp-1C4h]
    __int16 v26[11]; // [esp+3Eh] [ebp-1AEh]
    int v27; // [esp+54h] [ebp-198h]
    int i; // [esp+58h] [ebp-194h]
    CHAR v29[4]; // [esp+5Ch] [ebp-190h] BYREF
    char v30; // [esp+60h] [ebp-18Ch]
    int v31; // [esp+61h] [ebp-18Bh]
    int v32; // [esp+65h] [ebp-187h]
    int v33; // [esp+69h] [ebp-183h]
    char v34; // [esp+6Dh] [ebp-17Fh]
    int v35; // [esp+6Eh] [ebp-17Eh]
    int v36; // [esp+72h] [ebp-17Ah]
    int v37; // [esp+76h] [ebp-176h]
    __int16 v38; // [esp+7Ah] [ebp-172h]
    char v39; // [esp+7Ch] [ebp-170h]
    int v40; // [esp+7Dh] [ebp-16Fh]
    __int16 v41; // [esp+81h] [ebp-16Bh]
    int v42; // [esp+83h] [ebp-169h]
    int v43; // [esp+87h] [ebp-165h]
    char v44; // [esp+8Bh] [ebp-161h]
    int v45; // [esp+8Ch] [ebp-160h]
    int v46; // [esp+90h] [ebp-15Ch]
    int v47; // [esp+94h] [ebp-158h]
    char v48; // [esp+98h] [ebp-154h]
    int v49; // [esp+99h] [ebp-153h]
    int v50; // [esp+9Dh] [ebp-14Fh]
    char v51; // [esp+A1h] [ebp-14Bh]
    int v52; // [esp+A2h] [ebp-14Ah]
    int v53; // [esp+A6h] [ebp-146h]
    int v54; // [esp+AAh] [ebp-142h]
    char v55; // [esp+AEh] [ebp-13Eh]
    int v56; // [esp+AFh] [ebp-13Dh]
    int v57; // [esp+B3h] [ebp-139h]
    int v58; // [esp+B7h] [ebp-135h]
    int v59; // [esp+BBh] [ebp-131h]
    char v60; // [esp+BFh] [ebp-12Dh]
    int v61; // [esp+C0h] [ebp-12Ch]
    int v62; // [esp+C4h] [ebp-128h]
    int v63; // [esp+C8h] [ebp-124h]
    char v64; // [esp+CCh] [ebp-120h]
    int v65; // [esp+CDh] [ebp-11Fh]
    int v66; // [esp+D1h] [ebp-11Bh]
    int v67; // [esp+D5h] [ebp-117h]
    char v68; // [esp+D9h] [ebp-113h]
    int v69; // [esp+DAh] [ebp-112h]
    int v70; // [esp+DEh] [ebp-10Eh]
    int v71; // [esp+E2h] [ebp-10Ah]
    char v72; // [esp+E6h] [ebp-106h]
    int v73; // [esp+E7h] [ebp-105h]
    CHAR String[256]; // [esp+ECh] [ebp-100h] BYREF

    *(_DWORD*)(thisx + 104) = 18;
    *(_BYTE*)(thisx + 2516) = 1;
    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 5, 1, 30, 3);
    wsprintfA(String, a1);
    v16 = dword_4B9248;
    v1 = lstrlenA(String);
    sub_47B91A(160 - 2 * v1, 16, String, 0, v16);
    *(_DWORD*)v29 = dword_4B2A18;
    v30 = byte_4B2A1C;
    v31 = 0;
    v32 = 0;
    v33 = dword_4B2A20;
    v34 = byte_4B2A24;
    v35 = 0;
    v36 = 0;
    v37 = dword_4B2A28;
    v38 = word_4B2A2C;
    v39 = byte_4B2A2E;
    v40 = 0;
    v41 = 0;
    v42 = dword_4B2A30;
    v43 = dword_4B2A34;
    v44 = byte_4B2A38;
    v45 = 0;
    v46 = dword_4B2A3C;
    v47 = dword_4B2A40;
    v48 = byte_4B2A44;
    v49 = 0;
    v50 = dword_4B2A48;
    v51 = byte_4B2A4C;
    v52 = 0;
    v53 = 0;
    v54 = dword_4B2A50;
    v55 = byte_4B2A54;
    v56 = 0;
    v57 = 0;
    v58 = dword_4B2A58;
    v59 = dword_4B2A5C;
    v60 = byte_4B2A60;
    v61 = 0;
    v62 = dword_4B2A64;
    v63 = dword_4B2A68;
    v64 = byte_4B2A6C;
    v65 = 0;
    v66 = dword_4B2A70;
    v67 = dword_4B2A74;
    v68 = byte_4B2A78;
    v69 = 0;
    v70 = dword_4B2A7C;
    v71 = dword_4B2A80;
    v72 = byte_4B2A84;
    v73 = 0;
    for (i = 0; i < 2; ++i)
    {
        sub_452045((_BYTE*)thisx, 20 * i, 5, 20, 15);
        v22 = 160 * i + 8;
        v21 = 48;
        v24 = (char*)(thisx + 76 * i + 11816);
        for (j = 0; j < 2; ++j)
        {
            v2 = sub_4750D0(v24);
            v25[11 * j] = v2;
            v3 = sub_426710((short*)v24);
            v25[11 * j + 1] = v3;
            v4 = sub_426730((short*)v24);
            v25[11 * j + 2] = v4;
            v5 = sub_426750((short*)v24);
            v25[11 * j + 3] = v5;
            v6 = sub_426770((short*)v24);
            v25[11 * j + 4] = v6;
            v7 = sub_426810((short*)v24);
            v25[11 * j + 5] = v7;
            v8 = sub_426790((short*)v24);
            v25[11 * j + 6] = v8;
            v9 = sub_4267B0((short*)v24);
            v25[11 * j + 7] = v9;
            v10 = sub_4267D0((short*)v24);
            v25[11 * j + 8] = v10;
            v11 = sub_4267F0((short*)v24);
            v25[11 * j + 9] = v11;
            v12 = sub_426830((short*)v24);
            v25[11 * j + 10] = v12;
            if (!j)
                sub_45D835((short*)v24, *(unsigned __int16*)(thisx + 2 * i + 2566));
        }
        for (j = 0; j < 11; ++j)
            v26[j] -= v25[j];
        v17 = dword_4B9248;
        v13 = sub_4266D0(v24);
        sub_47B91A(v22 + 8, v21, v13, 0, v17);
        sub_47B91A(v22, v21 + 16, v29, 0, dword_4B9248);
        if (v26[0])
            wsprintfA(String, "+%2d", (unsigned __int16)v26[0]);
        else
            wsprintfA(String, asc_4B2A88);
        sub_47B7ED(v22 + 40, v21 + 16, String, 0, dword_4B9248);
        for (j = 1; j < 11; ++j)
        {
            sub_47B91A(80 * ((j - 1) / 5) + v22, v21 + 16 * ((j - 1) % 5) + 32, &v29[13 * j], 0, dword_4B9248);
            if (v26[j])
                wsprintfA(String, "+%2d", (unsigned __int16)v26[j]);
            else
                wsprintfA(String, asc_4B2A94);
            sub_47B7ED(v22 + 80 * ((j - 1) / 5) + 40, v21 + 16 * ((j - 1) % 5) + 32, String, 0, dword_4B9248);
        }
        LOBYTE(v27) = sub_4684DD(v24);
        if ((unsigned __int8)v27 < 3u
            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(thisx + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
        {
            v19[0] = 34;
            v19[1] = 17;
            v19[2] = 17;
            v19[3] = 17;
            v19[4] = 17;
            v20[0] = 0x80;
            v20[1] = -125;
            v20[2] = -124;
            v20[3] = -123;
            v20[4] = -122;
            for (j = 0; j < 5; ++j)
            {
                v14 = sub_4758B0(v24, j);
                if (v14 >= (int)(unsigned __int8)v19[j] && !sub_467E11(v24, (unsigned __int8)v20[j]))
                {
                    sub_475890(v24, j, 0);
                    sub_468529(v24, v20[j]);
                    sub_43FFC3((_DWORD*)dword_4BDB28, (_DWORD)dword_4B9AD4, -1, 100, 100, 0);
                }
            }
        }
    }
    return sub_47B91A(16, 208, &byte_4B2AA0, 0, dword_4B9248);
}