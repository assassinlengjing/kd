#include "sub.h" 
void sub_4097FE(int a1, double a2, double a3, double a4)
{
    int v4; // esi
    int v5; // esi
    unsigned __int16 v6; // ax
    unsigned __int16 v7; // ax
    int v8; // esi
    int v9; // esi
    int v10; // eax
    int v11; // [esp+4h] [ebp-12Ch]
    int v12; // [esp+8h] [ebp-128h]
    bool v13; // [esp+Ch] [ebp-124h]
    bool v14; // [esp+10h] [ebp-120h]
    bool v15; // [esp+14h] [ebp-11Ch]
    bool v16; // [esp+18h] [ebp-118h]
    int j; // [esp+20h] [ebp-110h]
    int v19; // [esp+24h] [ebp-10Ch]
    int v20; // [esp+28h] [ebp-108h]
    int i; // [esp+2Ch] [ebp-104h]
    int k; // [esp+2Ch] [ebp-104h]
    int v23; // [esp+30h] [ebp-100h]
    char v24[24]; // [esp+34h] [ebp-FCh]
    int v25; // [esp+4Ch] [ebp-E4h] BYREF
    int v26; // [esp+50h] [ebp-E0h]
    int v27; // [esp+54h] [ebp-DCh]
    char v28; // [esp+58h] [ebp-D8h]
    BOOL v29; // [esp+5Ch] [ebp-D4h]
    int v30; // [esp+60h] [ebp-D0h]
    struct Concurrency::ISchedulerProxy* v31; // [esp+64h] [ebp-CCh]
    int v32; // [esp+68h] [ebp-C8h]
    int v33; // [esp+6Ch] [ebp-C4h]
    int v34; // [esp+70h] [ebp-C0h]
    int v35; // [esp+74h] [ebp-BCh]
    int v36; // [esp+78h] [ebp-B8h]
    int v37; // [esp+7Ch] [ebp-B4h]
    int v38; // [esp+80h] [ebp-B0h]
    int v39; // [esp+84h] [ebp-ACh]
    int v40; // [esp+88h] [ebp-A8h]
    int v41; // [esp+8Ch] [ebp-A4h]
    int v42; // [esp+90h] [ebp-A0h]
    char v43; // [esp+94h] [ebp-9Ch]
    int v44; // [esp+98h] [ebp-98h]
    int v45; // [esp+9Ch] [ebp-94h] BYREF
    int v46; // [esp+A4h] [ebp-8Ch]
    int v47; // [esp+A8h] [ebp-88h]
    int v48; // [esp+ACh] [ebp-84h]
    int v49; // [esp+B0h] [ebp-80h]
    int v50[6]; // [esp+B4h] [ebp-7Ch] BYREF
    int v51; // [esp+CCh] [ebp-64h]
    int v52; // [esp+D0h] [ebp-60h]
    int v53; // [esp+D4h] [ebp-5Ch]
    int v54; // [esp+D8h] [ebp-58h]
    int v55; // [esp+DCh] [ebp-54h]
    int v56; // [esp+E0h] [ebp-50h]
    int v57; // [esp+E4h] [ebp-4Ch]
    int v58; // [esp+E8h] [ebp-48h]
    int v59; // [esp+ECh] [ebp-44h]
    int v60; // [esp+F0h] [ebp-40h]
    int v61; // [esp+F4h] [ebp-3Ch]
    int v62; // [esp+F8h] [ebp-38h]
    int v63; // [esp+FCh] [ebp-34h]
    int v64; // [esp+100h] [ebp-30h]
    int v65; // [esp+104h] [ebp-2Ch]
    struct Concurrency::ISchedulerProxy* v66; // [esp+108h] [ebp-28h]
    struct Concurrency::ISchedulerProxy* v67; // [esp+10Ch] [ebp-24h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+110h] [ebp-20h]
    int v69; // [esp+118h] [ebp-18h]
    _DWORD v70[2]; // [esp+11Ch] [ebp-14h] BYREF
    char v71; // [esp+124h] [ebp-Ch]
    int v72; // [esp+128h] [ebp-8h]
    int v73; // [esp+12Ch] [ebp-4h]

    if (*(int*)(a1 + 428) >= 44 && *(int*)(a1 + 428) <= 47 && !*(_WORD*)(a1 + 214))
    {
        if (*(_DWORD*)(a1 + 428) == 44 || *(_DWORD*)(a1 + 428) == 46)
            *(_DWORD*)(a1 + 432) = 78;
        else
            *(_DWORD*)(a1 + 432) = 79;
        return;
    }
    if (*(_DWORD*)(a1 + 444) == 1)
    {
        *(_BYTE*)(a1 + 253) = 0;
        *(_BYTE*)(a1 + 213) = -1;
        *(_BYTE*)(a1 + 257) = 0;
        *(_BYTE*)(a1 + 249) = 0;
        *(_WORD*)(a1 + 244) = 0;
        *(_BYTE*)(a1 + 254) = 0;
        *(_BYTE*)(a1 + 255) = 1;
        *(_BYTE*)(a1 + 256) = 6;
        *(_BYTE*)(a1 + 250) = 5;
        *(_BYTE*)(a1 + 251) = 1;
        *(_BYTE*)(a1 + 252) = 1;
        *(_BYTE*)(a1 + 452) = -1;
        *(_BYTE*)(a1 + 259) = 0;
        *(_BYTE*)(a1 + 260) = 0;
        *(_DWORD*)(a1 + 264) = 83;
        if (*(int*)(a1 + 428) > 83)
            sub_4239D3(a1, 5);
        if (*(int*)(a1 + 428) > 203 && *(_DWORD*)(a1 + 444) == 1)
        {
            sub_4239D3(a1, -100);
            sub_473DA5((int*)unk_4B9B10, 60, a1);
            sub_43FFC3((int*)unk_4BDB28, unk_4B9AE0, -1, 100, 100, 0);
            sub_442863(v70);
            v72 = 0;
            v71 = 19;
            v70[1] = -16;
            v73 = a1;
            sub_4561A5((char*)unk_4B9B10, (int)v70);
        }
    }
    if (*(int*)(a1 + 428) > 83)
    {
        sub_426990(a1, a2, a3, a4);
        return;
    }
    switch (*(_DWORD*)(a1 + 428))
    {
    case 3:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 288))
            *(_WORD*)(a1 + 204) = 44;
        else
            *(_WORD*)(a1 + 204) = 0;
        if (*(_DWORD*)(a1 + 480))
        {
            if (sub_494AA9(*(_BYTE**)(a1 + 480), 0))
            {
                *(_WORD*)(a1 + 204) = 135;
            }
            else if (sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
            {
                *(_WORD*)(a1 + 204) = 215;
            }
        }
        if (*(char*)(a1 + 608) > 0)
            *(_WORD*)(a1 + 204) = *(char*)(a1 + 608);
        *(_DWORD*)(a1 + 444) = 0;
        *(_DWORD*)(a1 + 448) = 0;
        *(_DWORD*)(a1 + 396) = 1;
        *(_DWORD*)(a1 + 404) = 1;
        *(_DWORD*)(a1 + 412) = 1;
        *(_DWORD*)(a1 + 400) = 1;
        *(_BYTE*)(a1 + 237) = 0;
        return;
    case 0x4D:
        *(_BYTE*)(a1 + 212) = 0;
        *(_DWORD*)(a1 + 408) = *(int*)(a1 + 444) < 4 && !*(_DWORD*)(a1 + 392);
        if (*(_DWORD*)(a1 + 392))
        {
            *(_WORD*)(a1 + 204) = 238;
        }
        else if (sub_41BA53(a1, 0xAu, 0))
        {
            *(_WORD*)(a1 + 204) = 68;
        }
        else
        {
            *(_WORD*)(a1 + 204) = 61;
        }
        return;
    case 4:
    case 5:
        *(_BYTE*)(a1 + 237) = 0;
        *(_DWORD*)(a1 + 448) = 0;
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 480))
        {
            if (sub_494AA9(*(_BYTE**)(a1 + 480), 0))
            {
                *(_WORD*)(a1 + 204) = 135;
            }
            else if (sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
            {
                *(_WORD*)(a1 + 204) = 215;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 0;
            }
        }
        else
        {
            *(_WORD*)(a1 + 204) = 3 * (*(_DWORD*)(a1 + 428) == 5) + 4 * (*(_DWORD*)(a1 + 428) == 4);
        }
        if (*(int*)(a1 + 444) > 60)
        {
            *(_DWORD*)(a1 + 432) = 3;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 6:
        if (*(_DWORD*)(a1 + 444) == 40)
            *(_DWORD*)(a1 + 444) = 0;
        v69 = 0;
        if (*(_DWORD*)(a1 + 288))
            v69 = 45;
        if (*(_DWORD*)(a1 + 480))
        {
            if (sub_494AA9(*(_BYTE**)(a1 + 480), 0))
            {
                v69 = 135;
            }
            else if (sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
            {
                v69 = 215;
            }
        }
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_BYTE*)(a1 + 188) == 1)
        {
            *(_BYTE*)(a1 + 212) = 1;
            if (*(int*)(a1 + 444) >= 10)
            {
                if (*(int*)(a1 + 444) >= 20)
                {
                    if (*(int*)(a1 + 444) >= 30)
                    {
                        if (*(int*)(a1 + 444) < 40)
                            *(_WORD*)(a1 + 204) = 0;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 2;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 1;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = 2;
            }
        }
        else if (*(int*)(a1 + 444) >= 10)
        {
            if (*(int*)(a1 + 444) >= 20)
            {
                if (*(int*)(a1 + 444) >= 30)
                {
                    if (*(int*)(a1 + 444) < 40)
                        *(_WORD*)(a1 + 204) = v69;
                }
                else
                {
                    *(_WORD*)(a1 + 204) = v69 + 2;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = v69;
            }
        }
        else
        {
            *(_WORD*)(a1 + 204) = v69 + 1;
        }
        return;
    case 0x38:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 444) == 20)
            *(_DWORD*)(a1 + 444) = 0;
        if (*(int*)(a1 + 444) >= 10)
            *(_WORD*)(a1 + 204) = 30;
        else
            *(_WORD*)(a1 + 204) = 43;
        if (*(_DWORD*)(a1 + 304))
        {
            if (sub_425F30((int*)*(_DWORD*)(a1 + 304)) != 55)
            {
                sub_417EE0(a1);
                *(_DWORD*)(a1 + 432) = 6;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 6;
        }
        return;
    case 7:
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A04, -1, 100, 100, 0);
            *(_DWORD*)(a1 + 436) = 0;
            ++* (_BYTE*)(a1 + 238);
        }
        if (*(_DWORD*)(a1 + 444) == 8 && *(_BYTE*)(a1 + 238) == 1 && sub_41BA53(a1, 0x86u, 0))
            *(_DWORD*)(a1 + 400) = 1;
        if (!*(_DWORD*)(a1 + 436) && *(int*)(a1 + 444) < 8 && (*(char*)(a1 + 230) <= 0 || *(char*)(a1 + 231) <= 0))
        {
            *(_DWORD*)(a1 + 436) = 1;
            *(int*)(a1 + 348) /= 2;
        }
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 288))
        {
            if (*(int*)(a1 + 348) >= 0)
                *(_WORD*)(a1 + 204) = 53;
            else
                *(_WORD*)(a1 + 204) = 52;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_494AA9(*(_BYTE**)(a1 + 480), 0))
        {
            if (*(int*)(a1 + 444) >= 8)
                *(_WORD*)(a1 + 204) = 139;
            else
                *(_WORD*)(a1 + 204) = 6;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            if (*(int*)(a1 + 444) >= 8)
                *(_WORD*)(a1 + 204) = 221;
            else
                *(_WORD*)(a1 + 204) = 222;
        }
        else if (*(int*)(a1 + 444) >= 8)
        {
            *(_WORD*)(a1 + 204) = 5;
        }
        else
        {
            *(_WORD*)(a1 + 204) = 6;
        }
        if (*(_DWORD*)(a1 + 444) == 8)
            *(_DWORD*)(a1 + 404) = 1;
        return;
    case 8:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 436) = 0;
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A04, -1, 100, 100, 0);
            ++* (_BYTE*)(a1 + 238);
            if (sub_41BA53(a1, 0x2Bu, 0))
            {
                *(_BYTE*)(a1 + 248) = 0;
                v4 = sub_417924(a1, 3, 1);
                v5 = sub_41D067(a1, 1) / 2 + v4;
                v6 = sub_41CA5F(a1, 1);
                sub_41F169((_WORD*)a1, (v5 + v6 / 2) / 3);
                memset((void*)(a1 + 453), 0, 8u);
                memset((void*)(a1 + 461), 0, 8u);
            }
        }
        if (*(_DWORD*)(a1 + 444) == 8 && *(_BYTE*)(a1 + 238) == 1 && sub_41BA53(a1, 0x86u, 0))
            *(_DWORD*)(a1 + 400) = 1;
        if (!*(_DWORD*)(a1 + 436) && *(int*)(a1 + 444) < 8 && (*(char*)(a1 + 230) <= 0 || *(char*)(a1 + 231) <= 0))
        {
            *(_DWORD*)(a1 + 436) = 1;
            *(int*)(a1 + 348) /= 2;
        }
        if (*(_DWORD*)(a1 + 288))
        {
            if (*(int*)(a1 + 348) >= 0)
                *(_WORD*)(a1 + 204) = 53;
            else
                *(_WORD*)(a1 + 204) = 52;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_494AA9(*(_BYTE**)(a1 + 480), 0))
        {
            if (*(int*)(a1 + 444) >= 8)
                *(_WORD*)(a1 + 204) = 139;
            else
                *(_WORD*)(a1 + 204) = 6;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            if (*(int*)(a1 + 444) >= 8)
                *(_WORD*)(a1 + 204) = 221;
            else
                *(_WORD*)(a1 + 204) = 222;
        }
        else if (*(_DWORD*)(a1 + 480) || !sub_41BA53(a1, 0x2Bu, 0))
        {
            if (*(int*)(a1 + 444) >= 8)
                *(_WORD*)(a1 + 204) = 5;
            else
                *(_WORD*)(a1 + 204) = 6;
        }
        else
        {
            if (!(*(_DWORD*)(a1 + 444) % 6))
            {
                memset((void*)(a1 + 453), 0, 8u);
                memset((void*)(a1 + 461), 0, 8u);
            }
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 4 + 190;
        }
        if (*(_DWORD*)(a1 + 444) == 8)
            *(_DWORD*)(a1 + 404) = 1;
        return;
    case 0xC:
    case 0xD:
        *(_BYTE*)(a1 + 212) = 0;
        *(_DWORD*)(a1 + 448) = 0;
        if (*(_DWORD*)(a1 + 288))
        {
            *(_WORD*)(a1 + 204) = 45;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            *(_WORD*)(a1 + 204) = 222;
        }
        else
        {
            *(_WORD*)(a1 + 204) = 6;
        }
        if (*(int*)(a1 + 444) > 6)
            *(_DWORD*)(a1 + 432) = 3;
        return;
    case 0x1B:
    case 0x1C:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
            *(_WORD*)(a1 + 204) = 222;
        else
            *(_WORD*)(a1 + 204) = 6;
        if (*(int*)(a1 + 444) >= 12)
        {
            if (*(_BYTE*)(a1 + 237))
                *(_DWORD*)(a1 + 432) = 10;
            else
                *(_DWORD*)(a1 + 432) = 3;
        }
        return;
    case 0xA:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 444) == 1)
            *(_DWORD*)(a1 + 448) = 0;
        ++* (_DWORD*)(a1 + 448);
        if (*(_DWORD*)(a1 + 288))
        {
            *(_WORD*)(a1 + 204) = 2 * (*(_DWORD*)(a1 + 444) / 10 % 2) + 46;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_494AA9(*(_BYTE**)(a1 + 480), 0))
        {
            *(_WORD*)(a1 + 204) = 3 * (*(_DWORD*)(a1 + 444) / 5 % 2) + 135;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 5 % 3 + 218;
        }
        else if (*(_BYTE*)(a1 + 188) == 1)
        {
            *(_BYTE*)(a1 + 212) = 1;
            if (*(int*)(a1 + 444) >= 7)
            {
                if (*(int*)(a1 + 444) >= 14)
                {
                    if (*(int*)(a1 + 444) >= 21)
                    {
                        if (*(int*)(a1 + 444) < 28)
                            *(_WORD*)(a1 + 204) = 0;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 2;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 1;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = 2;
            }
            if (*(_DWORD*)(a1 + 444) == 28)
                *(_DWORD*)(a1 + 444) = 0;
            if (!(*(_DWORD*)(a1 + 444) % 10))
                sub_43FFC3((int*)unk_4BDB28, unk_4B9AC8, -1, 100, 100, 0);
        }
        else if (*(_BYTE*)(a1 + 188) == 2 || *(_BYTE*)(a1 + 188) == 3)
        {
            *(_BYTE*)(a1 + 212) = 1;
            *(_WORD*)(a1 + 204) = 3 * (*(_DWORD*)(a1 + 444) / 5 % 2);
        }
        else
        {
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 5 % 6 + 7;
        }
        return;
    case 0xB:
        *(_BYTE*)(a1 + 212) = 0;
        *(_DWORD*)(a1 + 448) = 0;
        if (*(_DWORD*)(a1 + 444) == 1 && (*(_BYTE*)(a1 + 188) == 2 || *(_BYTE*)(a1 + 188) == 3))
        {
            *(_DWORD*)(a1 + 352) *= 2;
            *(_DWORD*)(a1 + 356) *= 2;
        }
        if (*(_DWORD*)(a1 + 288))
            *(_WORD*)(a1 + 204) = 45;
        else
            *(_WORD*)(a1 + 204) = 4;
        if (*(_DWORD*)(a1 + 480) && sub_494AA9(*(_BYTE**)(a1 + 480), 0))
            *(_WORD*)(a1 + 204) = 135;
        if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            *(_WORD*)(a1 + 204) = 215;
        }
        else if (*(_DWORD*)(a1 + 480))
        {
            *(_WORD*)(a1 + 204) = 0;
        }
        if (*(int*)(a1 + 444) >= 30)
        {
            if (*(_DWORD*)(a1 + 288))
                *(_DWORD*)(a1 + 432) = 3;
            else
                *(_DWORD*)(a1 + 432) = 4;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x32:
    case 0x33:
        *(_DWORD*)(a1 + 360) = 30;
        if (*(unsigned __int8*)(a1 + 238) <= 1u && sub_41BA53(a1, 0x86u, 0))
            *(_DWORD*)(a1 + 400) = 1;
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 288))
        {
            if (*(int*)(a1 + 444) >= 6)
                *(_WORD*)(a1 + 204) = 53;
            else
                *(_WORD*)(a1 + 204) = 52;
        }
        else if (*(_DWORD*)(a1 + 480) && sub_494AA9(*(_BYTE**)(a1 + 480), 0))
        {
            if (*(int*)(a1 + 444) >= 6)
                *(_WORD*)(a1 + 204) = 139;
            else
                *(_WORD*)(a1 + 204) = 6;
        }
        if (*(_DWORD*)(a1 + 480) && sub_425CB0(*(_BYTE**)(a1 + 480)) == 12)
        {
            if (*(int*)(a1 + 444) >= 6)
                *(_WORD*)(a1 + 204) = 221;
            else
                *(_WORD*)(a1 + 204) = 222;
        }
        else if (*(int*)(a1 + 444) >= 6)
        {
            *(_WORD*)(a1 + 204) = 25;
        }
        else
        {
            *(_WORD*)(a1 + 204) = 6;
        }
        if (*(_DWORD*)(a1 + 444) == 5)
        {
            *(_DWORD*)(a1 + 412) = 1;
            *(_DWORD*)(a1 + 404) = 1;
        }
        return;
    case 0x45:
        if (*(_DWORD*)(a1 + 304))
        {
            *(_BYTE*)(a1 + 212) = 0;
            *(_WORD*)(a1 + 204) = 56;
            SchedulerProxy = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304));
            if (SchedulerProxy == (struct Concurrency::ISchedulerProxy*)71)
            {
                *(_DWORD*)(a1 + 432) = 72;
                *(_DWORD*)(a1 + 444) = 0;
            }
            else if (SchedulerProxy != (struct Concurrency::ISchedulerProxy*)44
                && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)45
                && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)46
                && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)47)
            {
                *(_DWORD*)(a1 + 432) = 12;
                *(_DWORD*)(a1 + 304) = 0;
                *(_DWORD*)(a1 + 444) = 0;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 12;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x46:
        if (*(_DWORD*)(a1 + 304))
        {
            *(_BYTE*)(a1 + 212) = 0;
            *(_BYTE*)(a1 + 213) = -1;
            if (*(int*)(a1 + 444) >= 8)
            {
                if (*(int*)(a1 + 444) < 10)
                    *(_WORD*)(a1 + 204) = 58;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 57;
            }
            if (*(_DWORD*)(a1 + 444) == 8)
            {
                v7 = sub_41CB3B(a1, 1);
                sub_41EF8A((_WORD*)a1, v7 / 15);
                sub_417C15(*(_DWORD*)(a1 + 304), *(_BYTE*)(a1 + 242));
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A0C, -1, 100, 100, 0);
            }
            if (*(int*)(a1 + 444) >= 20)
                *(_DWORD*)(a1 + 432) = 69;
            v67 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304));
            if (v67 == (struct Concurrency::ISchedulerProxy*)71)
            {
                *(_DWORD*)(a1 + 432) = 72;
                *(_DWORD*)(a1 + 444) = 0;
            }
            else if (v67 != (struct Concurrency::ISchedulerProxy*)44
                && v67 != (struct Concurrency::ISchedulerProxy*)45
                && v67 != (struct Concurrency::ISchedulerProxy*)46
                && v67 != (struct Concurrency::ISchedulerProxy*)47)
            {
                *(_DWORD*)(a1 + 432) = 12;
                *(_DWORD*)(a1 + 304) = 0;
                *(_DWORD*)(a1 + 444) = 0;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 12;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x47:
        if (*(_DWORD*)(a1 + 304))
        {
            *(_BYTE*)(a1 + 212) = 0;
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_BYTE*)(a1 + 223) = 0x80;
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A1C, -1, 100, 100, 0);
            }
            if (*(int*)(a1 + 444) >= 3)
            {
                if (*(int*)(a1 + 444) >= 9)
                {
                    if (*(int*)(a1 + 444) >= 13)
                    {
                        if (*(int*)(a1 + 444) >= 17)
                            *(_WORD*)(a1 + 204) = 252;
                        else
                            *(_WORD*)(a1 + 204) = 251;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 250;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 249;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = 24;
            }
            if (*(_DWORD*)(a1 + 444) == 13)
            {
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A14, -1, 100, 100, 0);
            }
            else if (*(_DWORD*)(a1 + 444) == 22)
            {
                *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
                v66 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304));
                if (v66 == (struct Concurrency::ISchedulerProxy*)44 || v66 == (struct Concurrency::ISchedulerProxy*)45)
                {
                    sub_417BBB(*(_DWORD*)(a1 + 304), a1);
                    *(_DWORD*)(a1 + 432) = 69;
                }
                else
                {
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 432) = 3;
                }
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 3;
        }
        return;
    case 0x48:
        if (*(_DWORD*)(a1 + 304))
        {
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_BYTE*)(a1 + 223) = 127;
                if (*(_DWORD*)(a1 + 304))
                {
                    v8 = sub_425D70((_DWORD*)a1);
                    *(_DWORD*)(a1 + 436) = v8 == sub_425D70(*(_DWORD**)(a1 + 304));
                }
            }
            *(_BYTE*)(a1 + 212) = 0;
            if (*(_DWORD*)(a1 + 436))
            {
                if (*(int*)(a1 + 444) >= 9)
                {
                    if (*(int*)(a1 + 444) >= 13)
                    {
                        if (*(int*)(a1 + 444) >= 17)
                            *(_WORD*)(a1 + 204) = 18;
                        else
                            *(_WORD*)(a1 + 204) = 17;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 16;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 13;
                }
            }
            else if (*(int*)(a1 + 444) >= 9)
            {
                if (*(int*)(a1 + 444) >= 13)
                {
                    if (*(int*)(a1 + 444) >= 17)
                        *(_WORD*)(a1 + 204) = 27;
                    else
                        *(_WORD*)(a1 + 204) = 28;
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 26;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = 13;
            }
            if (*(_DWORD*)(a1 + 444) == 21)
            {
                if (*(_DWORD*)(a1 + 436) == 1)
                    *(_DWORD*)(a1 + 432) = 44;
                else
                    *(_DWORD*)(a1 + 432) = 45;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 3;
        }
        return;
    case 0x3E:
        if (*(int*)(a1 + 444) < 30 && *(_DWORD*)(a1 + 304))
        {
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
                sub_426050(*(_DWORD**)(a1 + 304), 135);
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A24, -1, 100, 100, 0);
            }
            *(_BYTE*)(a1 + 212) = 0;
            if (*(int*)(a1 + 444) >= 8)
            {
                if (*(int*)(a1 + 444) >= 21)
                    *(_WORD*)(a1 + 204) = 41;
                else
                    *(_WORD*)(a1 + 204) = 40;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 39;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 4;
            *(_DWORD*)(a1 + 304) = 0;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x3F:
        if (*(int*)(a1 + 444) < 30 && *(_DWORD*)(a1 + 304))
        {
            if (*(_DWORD*)(a1 + 444) == 1)
                sub_426050(*(_DWORD**)(a1 + 304), 89);
            *(_BYTE*)(a1 + 212) = 0;
            if (*(int*)(a1 + 444) >= 8)
            {
                if (*(int*)(a1 + 444) >= 18)
                    *(_WORD*)(a1 + 204) = 41;
                else
                    *(_WORD*)(a1 + 204) = 40;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 42;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 432) = 4;
            *(_DWORD*)(a1 + 304) = 0;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x39:
        if (*(_DWORD*)(a1 + 304) && *(_DWORD*)(a1 + 444) == 1)
        {
            v65 = 0;
            if (*(_BYTE*)(a1 + 195))
            {
                switch (*(_BYTE*)(a1 + 195))
                {
                case 1:
                    v65 = 27 * sub_4175B4(a1, 1) / 100;
                    break;
                case 2:
                    v65 = 26 * sub_4175B4(a1, 1) / 100;
                    break;
                case 3:
                    v65 = 30 * sub_4175B4(a1, 1) / 100;
                    break;
                }
            }
            else
            {
                v65 = 28 * sub_4175B4(a1, 1) / 100;
            }
            if (*(_BYTE*)(a1 + 258) == 1)
            {
                v65 = 12 * v65 / 10;
            }
            else if (*(_BYTE*)(a1 + 258) == 2)
            {
                v65 = 7 * v65 / 10;
            }
            if (!v65)
                v65 = 1;
            sub_41EF8A(*(_WORD**)(a1 + 304), v65);
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        if (*(_BYTE*)(a1 + 188) == 1)
        {
            if (*(_DWORD*)(a1 + 444) == 1 && *(_DWORD*)(a1 + 304))
                sub_423CF2(*(_BYTE**)(a1 + 304), 0, 0, 0, 0, 0, 0);
            *(_BYTE*)(a1 + 212) = 1;
            if (*(int*)(a1 + 444) >= 46)
            {
                if (*(int*)(a1 + 444) >= 50)
                {
                    if (*(_DWORD*)(a1 + 444) == 51)
                        *(_DWORD*)(a1 + 304) = 0;
                    *(_WORD*)(a1 + 204) = 57;
                }
                else
                {
                    if (*(_DWORD*)(a1 + 444) == 46)
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A24, -1, 100, 100, 0);
                    *(_WORD*)(a1 + 204) = 56;
                }
            }
            else
            {
                *(_WORD*)(a1 + 204) = (*(_DWORD*)(a1 + 444) - 1) / 5 % 3 + 53;
                if ((*(_DWORD*)(a1 + 444) - 1) % 15 == 5)
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A5C, -1, 100, 100, 0);
            }
            if (*(_DWORD*)(a1 + 444) == 68 || *(int*)(a1 + 444) < 51 && !*(_DWORD*)(a1 + 304))
            {
                *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
                *(_DWORD*)(a1 + 432) = 3;
            }
            return;
        }
        switch (*(_BYTE*)(a1 + 195))
        {
        case 0:
            if (*(_DWORD*)(a1 + 304))
            {
                if (*(_DWORD*)(a1 + 444) != 1)
                {
                    switch (*(_DWORD*)(a1 + 444))
                    {
                    case 5:
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, -8, 1, 0, 1, -4);
                        goto LABEL_407;
                    case 9:
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 8, 1, 0, 1, -8);
                        goto LABEL_407;
                    case 0x29:
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, -10, 1, 0, 1, -16);
                        goto LABEL_407;
                    }
                    if (*(_DWORD*)(a1 + 444) != 49)
                        goto LABEL_407;
                }
                sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 1, 0);
            }
        LABEL_407:
            if (*(int*)(a1 + 444) >= 5)
            {
                if (*(int*)(a1 + 444) >= 9)
                {
                    if (*(int*)(a1 + 444) >= 41)
                    {
                        if (*(int*)(a1 + 444) >= 49)
                        {
                            if (*(int*)(a1 + 444) >= 53)
                            {
                                if (*(int*)(a1 + 444) < 57)
                                {
                                    *(_BYTE*)(a1 + 212) = 0;
                                    *(_WORD*)(a1 + 204) = 30;
                                }
                            }
                            else
                            {
                                *(_BYTE*)(a1 + 212) = 0;
                                *(_WORD*)(a1 + 204) = 31;
                            }
                        }
                        else
                        {
                            *(_BYTE*)(a1 + 212) = 0;
                            *(_WORD*)(a1 + 204) = 30;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 212) = 1;
                        *(_WORD*)(a1 + 204) = 11;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 30;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 31;
            }
            if (*(int*)(a1 + 444) >= 81)
            {
                *(_DWORD*)(a1 + 432) = 3;
                *(_DWORD*)(a1 + 304) = 0;
                *(_DWORD*)(a1 + 444) = 0;
            }
            return;
        case 1:
            if (*(_DWORD*)(a1 + 304) && *(_DWORD*)(a1 + 444) == 1)
                sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 1, 0);
            *(_BYTE*)(a1 + 212) = 1;
            if (*(int*)(a1 + 444) >= 5)
            {
                if (*(int*)(a1 + 444) >= 10)
                {
                    if (*(int*)(a1 + 444) >= 15)
                    {
                        if (*(int*)(a1 + 444) >= 20)
                        {
                            if (*(int*)(a1 + 444) >= 32)
                            {
                                if (*(int*)(a1 + 444) >= 50)
                                {
                                    *(_BYTE*)(a1 + 212) = 0;
                                    *(_WORD*)(a1 + 204) = 6;
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 13;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 13;
                                if (*(_DWORD*)(a1 + 436) == 1 && *(_DWORD*)(a1 + 444) % 6 <= 2)
                                    *(_WORD*)(a1 + 204) = 14;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 12;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 11;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 10;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 31;
            }
            if (*(_DWORD*)(a1 + 444) == 15)
            {
                *(_DWORD*)(a1 + 348) = -300;
                *(_DWORD*)(a1 + 392) = 1;
            }
            else if (*(_DWORD*)(a1 + 444) == 16)
            {
                *(_DWORD*)(a1 + 348) = 0;
                *(_DWORD*)(a1 + 360) = 15;
            }
            if (*(int*)(a1 + 444) > 60)
            {
                *(_DWORD*)(a1 + 432) = 4;
                *(_DWORD*)(a1 + 304) = 0;
            }
            break;
        case 2:
            if (*(_DWORD*)(a1 + 304))
            {
                if (*(_DWORD*)(a1 + 444) == 1)
                {
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 1, 0);
                }
                else if (*(_DWORD*)(a1 + 444) == 8)
                {
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -8, 1, 0, 1, -8);
                }
            }
            *(_BYTE*)(a1 + 212) = 1;
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_DWORD*)(a1 + 436) = 0;
                *(_DWORD*)(a1 + 340) = 0;
                *(_DWORD*)(a1 + 344) = 0;
            }
            if (*(int*)(a1 + 444) >= 8)
            {
                if (*(_DWORD*)(a1 + 444) == 8)
                {
                    *(_BYTE*)(a1 + 212) = 1;
                    *(_WORD*)(a1 + 204) = 17;
                    *(_DWORD*)(a1 + 392) = 1;
                    *(_DWORD*)(a1 + 348) = -380;
                    *(_DWORD*)(a1 + 360) = 20;
                }
                else if (*(_DWORD*)(a1 + 436))
                {
                    *(_WORD*)(a1 + 204) = 5;
                    *(_DWORD*)(a1 + 304) = 0;
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 17;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 31;
            }
            break;
        case 3:
            if (*(_DWORD*)(a1 + 304))
            {
                switch (*(_DWORD*)(a1 + 444))
                {
                case 1:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, 16, 1, 0, 0, 0);
                    break;
                case 8:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -4, 1, 0, 1, -16);
                    break;
                case 0xC:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -14, 1, 0, 1, -8);
                    break;
                case 0xE:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 1, -4);
                    break;
                }
            }
            if (*(int*)(a1 + 444) >= 8)
            {
                if (*(int*)(a1 + 444) >= 12)
                {
                    if (*(int*)(a1 + 444) >= 16)
                    {
                        if (*(int*)(a1 + 444) >= 20)
                        {
                            if (*(int*)(a1 + 444) >= 28)
                            {
                                if (*(int*)(a1 + 444) >= 32)
                                {
                                    if (*(int*)(a1 + 444) >= 36)
                                    {
                                        *(_WORD*)(a1 + 204) = 4;
                                    }
                                    else
                                    {
                                        *(_BYTE*)(a1 + 212) = 0;
                                        *(_WORD*)(a1 + 204) = 2;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 15;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 16;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 17;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 16;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 15;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 1;
                *(_WORD*)(a1 + 204) = 14;
            }
            if (*(_DWORD*)(a1 + 444) == 1)
                *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
            if (*(int*)(a1 + 444) >= 40)
            {
                *(_DWORD*)(a1 + 432) = 4;
                *(_DWORD*)(a1 + 304) = 0;
            }
            break;
        }
        return;
    case 0x3B:
        if (*(_DWORD*)(a1 + 304) && *(_DWORD*)(a1 + 444) == 1)
        {
            *(_BYTE*)(a1 + 324) = sub_4264F0(*(_BYTE**)(a1 + 304));
            *(_DWORD*)(a1 + 372) = 0;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        if (*(_DWORD*)(a1 + 304))
        {
            if (sub_425E70(*(_BYTE**)(a1 + 304)) == 1)
            {
                v63 = sub_426090(*(_DWORD**)(a1 + 304));
                v62 = sub_4260B0(*(_DWORD**)(a1 + 304));
                v64 = sub_4260D0(*(_DWORD**)(a1 + 304));
                *(_BYTE*)(a1 + 212) = 0;
                v60 = *(_DWORD*)(a1 + 328);
                v59 = v62;
                v61 = *(_DWORD*)(a1 + 336);
                *(_DWORD*)(a1 + 392) = 1;
                if (*(_DWORD*)(a1 + 444) == 1)
                    *(_DWORD*)(a1 + 424) = sub_425D70(*(_DWORD**)(a1 + 304)) == 0;
                if (*(int*)(a1 + 444) >= 46)
                {
                    if (*(int*)(a1 + 444) >= 50)
                    {
                        if (*(_DWORD*)(a1 + 444) == 50)
                        {
                            v60 = v63 - 1200 * ((*(_DWORD*)(a1 + 424) == 0) - *(_DWORD*)(a1 + 424));
                            *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
                            *(_WORD*)(a1 + 204) = 197;
                        }
                    }
                    else
                    {
                        v60 = 200 * ((*(_DWORD*)(a1 + 424) == 0) - *(_DWORD*)(a1 + 424)) + v63;
                        v61 = v64 - 1300;
                        *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) + 1;
                        *(_WORD*)(a1 + 204) = 199;
                    }
                }
                else
                {
                    v60 = 1200 * ((*(_DWORD*)(a1 + 424) == 0) - *(_DWORD*)(a1 + 424)) + v63;
                    v61 = v64 - 1300;
                    *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                    *(_WORD*)(a1 + 204) = (*(_DWORD*)(a1 + 444) - 1) / 5 % 3;
                    if (*(_WORD*)(a1 + 204))
                        *(_WORD*)(a1 + 204) = 197;
                    else
                        *(_WORD*)(a1 + 204) = 198;
                    if ((*(_DWORD*)(a1 + 444) - 1) % 15 == 5)
                        sub_41261C((_WORD*)a1, 3 * *(unsigned __int16*)(a1 + 242) / 4, 0, 1);
                }
                *(_DWORD*)(a1 + 372) = v60 - *(_DWORD*)(a1 + 328);
                *(_DWORD*)(a1 + 340) = 0;
                *(_DWORD*)(a1 + 352) = 0;
                *(_DWORD*)(a1 + 376) = v59 - *(_DWORD*)(a1 + 332);
                *(_DWORD*)(a1 + 344) = 0;
                *(_DWORD*)(a1 + 356) = 0;
                *(_DWORD*)(a1 + 348) = v61 - *(_DWORD*)(a1 + 336);
                *(_DWORD*)(a1 + 360) = 0;
                if (*(_DWORD*)(a1 + 444) == 51)
                {
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 432) = 38;
                    *(_DWORD*)(a1 + 372) = 350 * ((*(_DWORD*)(a1 + 424) == 0) - *(_DWORD*)(a1 + 424));
                    *(_DWORD*)(a1 + 340) = 0;
                    *(_DWORD*)(a1 + 352) = 0;
                    *(_DWORD*)(a1 + 376) = 0;
                    *(_DWORD*)(a1 + 344) = 0;
                    *(_DWORD*)(a1 + 356) = 0;
                    *(_DWORD*)(a1 + 348) = -500;
                    *(_DWORD*)(a1 + 360) = 30;
                }
            }
            else if (*(_BYTE*)(a1 + 324))
            {
                switch (*(_BYTE*)(a1 + 324))
                {
                case 1:
                    *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                    *(_DWORD*)(a1 + 360) = 0;
                    *(_DWORD*)(a1 + 348) = 0;
                    *(_BYTE*)(a1 + 212) = 0;
                    if (*(int*)(a1 + 444) >= 5)
                    {
                        if (*(int*)(a1 + 444) >= 20)
                            *(_WORD*)(a1 + 204) = 17;
                        else
                            *(_WORD*)(a1 + 204) = 16;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 15;
                    }
                    if (*(_DWORD*)(a1 + 444) == 28)
                    {
                        sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                        *(_DWORD*)(a1 + 432) = 44;
                        *(_DWORD*)(a1 + 304) = 0;
                    }
                    if (*(_DWORD*)(a1 + 444) == 5)
                    {
                        *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
                        v53 = *(unsigned __int16*)(a1 + 242) / 3;
                        if (!v53)
                            v53 = 1;
                        sub_41261C((_WORD*)a1, v53, *(_DWORD*)(a1 + 304), 1);
                    }
                    if (*(_DWORD*)(a1 + 444) == 24)
                    {
                        v52 = 2 * *(unsigned __int16*)(a1 + 242) / 3;
                        if (!v52)
                            v52 = 1;
                        sub_41261C((_WORD*)a1, v52, *(_DWORD*)(a1 + 304), 1);
                    }
                    break;
                case 2:
                    *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                    if (*(int*)(a1 + 444) >= 8)
                    {
                        if (*(_DWORD*)(a1 + 436))
                        {
                            if (*(_DWORD*)(a1 + 436) == 1)
                            {
                                *(_DWORD*)(a1 + 436) = 2;
                                *(_DWORD*)(a1 + 392) = 0;
                                *(_DWORD*)(a1 + 336) = -100
                                    * sub_446497(
                                        (int*)unk_4B9B10,
                                        *(_DWORD*)(a1 + 328) / 100,
                                        *(_DWORD*)(a1 + 332) / 100);
                                sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                            }
                            else if (*(_DWORD*)(a1 + 436) == 2)
                            {
                                *(_DWORD*)(a1 + 436) = 3;
                                *(_DWORD*)(a1 + 392) = 1;
                                *(_DWORD*)(a1 + 348) = -200;
                                *(_DWORD*)(a1 + 360) = 20;
                                *(_DWORD*)(a1 + 372) = 100 * (*(_DWORD*)(a1 + 424) - (*(_DWORD*)(a1 + 424) == 0));
                                *(_WORD*)(a1 + 204) = 18;
                            }
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 392) = 1;
                            *(_BYTE*)(a1 + 212) = 0;
                            *(_DWORD*)(a1 + 424) = sub_425D70(*(_DWORD**)(a1 + 304));
                            if (*(int*)(a1 + 444) >= 24)
                                *(_WORD*)(a1 + 204) = 33;
                            else
                                *(_WORD*)(a1 + 204) = 22;
                            if (sub_426010(*(_DWORD**)(a1 + 304)) == 1)
                            {
                                sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                                *(_DWORD*)(a1 + 436) = 1;
                            }
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 212) = 0;
                        *(_WORD*)(a1 + 204) = 14;
                        *(_DWORD*)(a1 + 436) = 0;
                    }
                    break;
                case 3:
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                    if (*(int*)(a1 + 444) >= 8)
                    {
                        if (*(int*)(a1 + 444) >= 12)
                        {
                            if (*(int*)(a1 + 444) >= 24)
                                *(_WORD*)(a1 + 204) = 17;
                            else
                                *(_WORD*)(a1 + 204) = 19;
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 71;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 13;
                    }
                    if (*(_DWORD*)(a1 + 444) == 8)
                    {
                        *(_DWORD*)(a1 + 392) = 1;
                    }
                    else if (*(_DWORD*)(a1 + 444) == 16)
                    {
                        sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                        *(_DWORD*)(a1 + 392) = 0;
                        *(_DWORD*)(a1 + 336) = -100
                            * sub_446497(
                                (int*)unk_4B9B10,
                                *(_DWORD*)(a1 + 328) / 100,
                                *(_DWORD*)(a1 + 332) / 100);
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                        sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                    }
                    if (*(int*)(a1 + 444) >= 40)
                    {
                        *(_DWORD*)(a1 + 432) = 44;
                        *(_DWORD*)(a1 + 304) = 0;
                    }
                    break;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                *(_BYTE*)(a1 + 212) = 0;
                v58 = sub_426090(*(_DWORD**)(a1 + 304));
                v57 = sub_4260D0(*(_DWORD**)(a1 + 304));
                *(_DWORD*)(a1 + 392) = 1;
                v55 = *(_DWORD*)(a1 + 328);
                v56 = *(_DWORD*)(a1 + 336);
                if (*(int*)(a1 + 444) >= 5)
                {
                    if (*(int*)(a1 + 444) >= 9)
                    {
                        if (*(int*)(a1 + 444) >= 17)
                        {
                            if (*(int*)(a1 + 444) >= 41)
                            {
                                if (*(int*)(a1 + 444) >= 49)
                                {
                                    if (*(int*)(a1 + 444) >= 56)
                                    {
                                        if (*(_DWORD*)(a1 + 444) == 56)
                                        {
                                            sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                                            *(_DWORD*)(a1 + 340) = 100;
                                            if (*(_DWORD*)(a1 + 424))
                                                *(_DWORD*)(a1 + 340) = -*(_DWORD*)(a1 + 340);
                                            *(_DWORD*)(a1 + 348) = -250;
                                            *(_DWORD*)(a1 + 360) = 30;
                                        }
                                    }
                                    else
                                    {
                                        if (*(_DWORD*)(a1 + 444) == 49)
                                        {
                                            sub_43FFC3((int*)unk_4BDB28, unk_4B9A20, -1, 100, 100, 0);
                                            sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                                        }
                                        v56 = v57;
                                        v54 = -100 * sub_446497((int*)unk_4B9B10, v55 / 100, *(_DWORD*)(a1 + 332) / 100);
                                        *(_DWORD*)(a1 + 392) = v54 > v57;
                                        *(_WORD*)(a1 + 204) = 33;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 22;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 32;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 20;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 19;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 21;
                }
                if (*(int*)(a1 + 444) > 100)
                {
                    *(_DWORD*)(a1 + 432) = 3;
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 444) = 0;
                }
            }
            return;
        }
        goto LABEL_499;
    case 0x3A:
        if (*(_DWORD*)(a1 + 304) && *(_DWORD*)(a1 + 444) == 1)
        {
            v51 = 0;
            if (*(_BYTE*)(a1 + 195))
            {
                switch (*(_BYTE*)(a1 + 195))
                {
                case 1:
                    v51 = 35 * sub_4175B4(a1, 1) / 100;
                    break;
                case 2:
                    v51 = 30 * sub_4175B4(a1, 1) / 100;
                    break;
                case 3:
                    v51 = 40 * sub_4175B4(a1, 1) / 100;
                    break;
                }
            }
            else
            {
                v51 = 38 * sub_4175B4(a1, 1) / 100;
            }
            if (*(_BYTE*)(a1 + 258) == 1)
            {
                v51 = 12 * v51 / 10;
            }
            else if (*(_BYTE*)(a1 + 258) == 2)
            {
                v51 = 7 * v51 / 10;
            }
            if (!v51)
                v51 = 1;
            sub_41EF8A(*(_WORD**)(a1 + 304), v51);
            *(_DWORD*)(a1 + 372) = 0;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        if (*(_BYTE*)(a1 + 195))
        {
            switch (*(_BYTE*)(a1 + 195))
            {
            case 1:
                if (*(_DWORD*)(a1 + 304))
                {
                    if (*(_DWORD*)(a1 + 444) == 1)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 0, 1, 0, 1, -24);
                    }
                    else if (*(_DWORD*)(a1 + 444) == 10)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 0, 1, 0, 0, 0);
                    }
                }
                *(_BYTE*)(a1 + 212) = 1;
                if (*(int*)(a1 + 444) >= 8)
                {
                    if (*(int*)(a1 + 444) >= 24)
                    {
                        if (*(int*)(a1 + 444) >= 40)
                        {
                            *(_BYTE*)(a1 + 212) = 0;
                            *(_WORD*)(a1 + 204) = 6;
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 17;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 16;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 15;
                }
                if (*(int*)(a1 + 444) >= 56)
                {
                    *(_DWORD*)(a1 + 432) = 4;
                    *(_DWORD*)(a1 + 304) = 0;
                }
                break;
            case 2:
                if (*(_DWORD*)(a1 + 304))
                {
                    if (*(_DWORD*)(a1 + 444) == 1)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 0, 1, 0, 1, -24);
                    }
                    else if (*(_DWORD*)(a1 + 444) == 20)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 0, 1, 0, 1, 0);
                    }
                }
                *(_BYTE*)(a1 + 212) = 0;
                if (*(_DWORD*)(a1 + 444) == 1)
                {
                    *(_DWORD*)(a1 + 436) = 0;
                    *(_DWORD*)(a1 + 340) = 0;
                    *(_DWORD*)(a1 + 344) = 0;
                    *(_DWORD*)(a1 + 348) = -350;
                    *(_DWORD*)(a1 + 360) = 20;
                    *(_DWORD*)(a1 + 392) = 1;
                }
                else if (*(_DWORD*)(a1 + 444) == 20)
                {
                    *(_DWORD*)(a1 + 348) = 300;
                }
                if (*(int*)(a1 + 444) >= 4)
                {
                    if (*(int*)(a1 + 444) >= 20)
                        *(_WORD*)(a1 + 204) = 33;
                    else
                        *(_WORD*)(a1 + 204) = 53;
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 52;
                }
                break;
            case 3:
                if (*(_DWORD*)(a1 + 304))
                {
                    if (*(_DWORD*)(a1 + 444) == 1)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 0, 0);
                    }
                    else if (*(_DWORD*)(a1 + 444) == 12)
                    {
                        sub_423CF2(*(_BYTE**)(a1 + 304), 1, 0, 1, 0, 1, -16);
                    }
                }
                if (*(int*)(a1 + 444) >= 4)
                {
                    if (*(int*)(a1 + 444) >= 8)
                    {
                        if (*(int*)(a1 + 444) >= 12)
                        {
                            if (*(int*)(a1 + 444) >= 16)
                            {
                                if (*(int*)(a1 + 444) >= 20)
                                {
                                    if (*(int*)(a1 + 444) >= 28)
                                    {
                                        if (*(int*)(a1 + 444) >= 36)
                                        {
                                            *(_BYTE*)(a1 + 212) = 0;
                                            *(_WORD*)(a1 + 204) = 20;
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 204) = 18;
                                        }
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 19;
                                    }
                                }
                                else
                                {
                                    *(_BYTE*)(a1 + 212) = 1;
                                    *(_WORD*)(a1 + 204) = 18;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 20;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 21;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 30;
                    }
                }
                else
                {
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_WORD*)(a1 + 204) = 31;
                }
                if (*(_DWORD*)(a1 + 444) == 16)
                {
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A18, -1, 100, 100, 0);
                    *(_DWORD*)(a1 + 304) = 0;
                }
                if (*(int*)(a1 + 444) >= 44)
                    *(_DWORD*)(a1 + 432) = 4;
                break;
            }
        }
        else
        {
            if (*(_DWORD*)(a1 + 304))
            {
                switch (*(_DWORD*)(a1 + 444))
                {
                case 1:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 1, 0);
                    break;
                case 0xC:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, 4, 1, 0, 1, -12);
                    break;
                case 0x18:
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, 20, 1, 0, 1, 0);
                    break;
                }
            }
            if (*(int*)(a1 + 444) >= 6)
            {
                if (*(int*)(a1 + 444) >= 12)
                {
                    if (*(int*)(a1 + 444) >= 24)
                    {
                        if (*(int*)(a1 + 444) >= 30)
                        {
                            if (*(int*)(a1 + 444) >= 54)
                            {
                                *(_BYTE*)(a1 + 212) = 0;
                                *(_WORD*)(a1 + 204) = 6;
                            }
                            else
                            {
                                *(_BYTE*)(a1 + 212) = 1;
                                *(_WORD*)(a1 + 204) = 13;
                            }
                        }
                        else
                        {
                            *(_BYTE*)(a1 + 212) = 1;
                            *(_WORD*)(a1 + 204) = 12;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 212) = 1;
                        *(_WORD*)(a1 + 204) = 11;
                    }
                }
                else
                {
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_WORD*)(a1 + 204) = 30;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 31;
            }
            if (*(int*)(a1 + 444) >= 64)
            {
                *(_DWORD*)(a1 + 432) = 3;
                *(_DWORD*)(a1 + 304) = 0;
                *(_DWORD*)(a1 + 444) = 0;
            }
        }
        return;
    case 0x3C:
        if (*(_DWORD*)(a1 + 304) && *(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 424) = sub_425D70(*(_DWORD**)(a1 + 304));
            *(_BYTE*)(a1 + 324) = sub_4264F0(*(_BYTE**)(a1 + 304));
            *(_DWORD*)(a1 + 372) = 0;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        if (*(_DWORD*)(a1 + 304))
        {
            if (*(_BYTE*)(a1 + 324))
            {
                switch (*(_BYTE*)(a1 + 324))
                {
                case 1:
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) + 1;
                    *(_DWORD*)(a1 + 392) = 1;
                    if (*(int*)(a1 + 444) >= 10)
                    {
                        if (*(_DWORD*)(a1 + 444) == 10)
                        {
                            *(_DWORD*)(a1 + 360) = 16;
                        }
                        else if (*(int*)(a1 + 444) >= 24)
                        {
                            if (*(_DWORD*)(a1 + 444) == 24)
                            {
                                *(_DWORD*)(a1 + 348) = 0;
                                *(_DWORD*)(a1 + 360) = 0;
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                                *(_WORD*)(a1 + 204) = 17;
                                sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                            }
                            else if (*(int*)(a1 + 444) >= 35)
                            {
                                if (*(_DWORD*)(a1 + 444) == 35)
                                {
                                    *(_DWORD*)(a1 + 348) = -16;
                                    *(_DWORD*)(a1 + 360) = 16;
                                    sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 18;
                                }
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 18;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 18;
                        *(_DWORD*)(a1 + 348) = 0;
                    }
                    break;
                case 2:
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_WORD*)(a1 + 204) = 18;
                    if (*(_DWORD*)(a1 + 444) == 1)
                    {
                        *(_DWORD*)(a1 + 436) = 0;
                        *(_DWORD*)(a1 + 392) = 1;
                    }
                    if (*(int*)(a1 + 444) >= 20)
                    {
                        if (sub_426010(*(_DWORD**)(a1 + 304)))
                        {
                            if (sub_426010(*(_DWORD**)(a1 + 304)) != 1 || *(_DWORD*)(a1 + 436))
                            {
                                if (*(_DWORD*)(a1 + 436) == 1)
                                    *(_WORD*)(a1 + 204) = 17;
                            }
                            else
                            {
                                sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                                sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                                *(_DWORD*)(a1 + 436) = 1;
                                *(_WORD*)(a1 + 204) = 17;
                                *(_DWORD*)(a1 + 336) = sub_446497(
                                    (int*)unk_4B9B10,
                                    *(_DWORD*)(a1 + 328) / 100,
                                    *(_DWORD*)(a1 + 332) / 100);
                                *(_DWORD*)(a1 + 392) = 0;
                            }
                        }
                        else
                        {
                            *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) + 1;
                    }
                    if (*(int*)(a1 + 444) > 34)
                    {
                        *(_DWORD*)(a1 + 392) = 0;
                        *(_DWORD*)(a1 + 304) = 0;
                        *(_DWORD*)(a1 + 432) = 44;
                    }
                    break;
                case 3:
                    if (*(_DWORD*)(a1 + 444) == 1)
                    {
                        *(_BYTE*)(a1 + 212) = 0;
                        *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                        *(_DWORD*)(a1 + 436) = 0;
                    }
                    if (!*(_DWORD*)(a1 + 436))
                    {
                        if (*(int*)(a1 + 444) >= 12)
                        {
                            if (*(int*)(a1 + 444) >= 16)
                            {
                                if (*(int*)(a1 + 444) > 24)
                                    *(_WORD*)(a1 + 204) = 19;
                            }
                            else
                            {
                                *(_DWORD*)(a1 + 392) = 1;
                                *(_WORD*)(a1 + 204) = 17;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 16;
                        }
                        if (*(_DWORD*)(a1 + 444) == 16)
                        {
                            sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                            *(_DWORD*)(a1 + 340) = 600;
                            if (sub_425D70(*(_DWORD**)(a1 + 304)))
                                *(_DWORD*)(a1 + 340) = -*(_DWORD*)(a1 + 340);
                            *(_DWORD*)(a1 + 348) = -50;
                            *(_DWORD*)(a1 + 360) = 10;
                            *(_DWORD*)(a1 + 432) = 61;
                        }
                    }
                    break;
                }
            }
            else
            {
                *(_BYTE*)(a1 + 223) = sub_426030(*(_BYTE**)(a1 + 304)) - 1;
                *(_BYTE*)(a1 + 212) = 0;
                v50[5] = sub_426090(*(_DWORD**)(a1 + 304));
                v50[4] = sub_4260D0(*(_DWORD**)(a1 + 304));
                *(_DWORD*)(a1 + 392) = 1;
                v50[2] = *(_DWORD*)(a1 + 328);
                v50[3] = *(_DWORD*)(a1 + 336);
                if (*(int*)(a1 + 444) >= 12)
                {
                    if (*(int*)(a1 + 444) >= 24)
                    {
                        if (*(int*)(a1 + 444) < 54)
                            *(_WORD*)(a1 + 204) = 33;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 17;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 204) = 16;
                }
                if (*(_DWORD*)(a1 + 444) == 24)
                {
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A20, -1, 100, 100, 0);
                    sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 304), 1);
                }
                else if (*(int*)(a1 + 444) >= 54)
                {
                    sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                    *(_DWORD*)(a1 + 392) = 0;
                    *(_DWORD*)(a1 + 432) = 44;
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 444) = 0;
                    *(_DWORD*)(a1 + 436) = 0;
                }
            }
            return;
        }
    LABEL_499:
        sub_417C83(a1);
        return;
    case 0x3D:
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 436) = 0;
            *(_WORD*)(a1 + 204) = 49;
            *(_BYTE*)(a1 + 248) = 2;
            *(_BYTE*)(a1 + 253) = 1;
            sub_41F169((_WORD*)a1, 2 * *(unsigned __int16*)(a1 + 242));
            *(_BYTE*)(a1 + 213) = 5;
            memset((void*)(a1 + 453), 0, 8u);
            memset((void*)(a1 + 461), 0, 8u);
            *(_BYTE*)(a1 + 257) = 1;
            if (*(_DWORD*)(a1 + 304))
            {
                *(_BYTE*)(a1 + (unsigned __int8)sub_425EF0(*(_BYTE**)(a1 + 304)) + 453) = -1;
                *(_DWORD*)(a1 + 316) = *(_DWORD*)(a1 + 304);
                *(_DWORD*)(a1 + 304) = 0;
            }
        }
        if (*(_DWORD*)(a1 + 436) == 1)
        {
            *(_DWORD*)(a1 + 444) = 2;
            *(_DWORD*)(a1 + 436) = 2;
            *(_BYTE*)(a1 + 257) = 2;
            *(_DWORD*)(a1 + 340) = -*(_DWORD*)(a1 + 372) / 2;
            *(_WORD*)(a1 + 204) = 28;
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
            sub_41261C((_WORD*)a1, *(unsigned __int16*)(a1 + 242), *(_DWORD*)(a1 + 316), 1);
            if (*(_DWORD*)(a1 + 392))
            {
                *(_DWORD*)(a1 + 432) = 29;
                *(_DWORD*)(a1 + 304) = 0;
            }
        }
        else if (*(_DWORD*)(a1 + 436) == 2 && *(int*)(a1 + 444) > 10)
        {
            *(_DWORD*)(a1 + 432) = 45;
            *(_DWORD*)(a1 + 304) = 0;
        }
        return;
    case 0xE:
        *(_BYTE*)(a1 + 212) = 0;
        if (sub_425FF0((int*)a1))
            *(_WORD*)(a1 + 204) = 158;
        else
            *(_WORD*)(a1 + 204) = 13;
        if (*(int*)(a1 + 444) > 15)
            *(_DWORD*)(a1 + 432) = 3;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 100;
            else
                *(_DWORD*)(a1 + 372) = -100;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 372) / -5;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 348) = 0;
            *(_DWORD*)(a1 + 360) = 0;
        }
        return;
    case 0xF:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 360) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 348) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 372) = 0;
        }
        if (*(int*)(a1 + 444) >= 10)
            *(_WORD*)(a1 + 204) = 15;
        else
            *(_WORD*)(a1 + 204) = 14;
        if (*(int*)(a1 + 444) > 120)
            *(_DWORD*)(a1 + 432) = 3;
        return;
    case 0x10:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) >= 5)
            *(_WORD*)(a1 + 204) = 16;
        else
            *(_WORD*)(a1 + 204) = 13;
        if (*(int*)(a1 + 444) <= 1)
        {
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 100;
            else
                *(_DWORD*)(a1 + 372) = -100;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 348) = -180;
            *(_DWORD*)(a1 + 360) = 30;
        }
        return;
    case 0x11:
    case 0x17:
    case 0x18:
    case 0x19:
        *(_BYTE*)(a1 + 212) = 0;
        switch (*(_DWORD*)(a1 + 428))
        {
        case 0x17:
            *(_BYTE*)(a1 + 248) = 14;
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 8 % 2 + 174;
            break;
        case 0x18:
            *(_BYTE*)(a1 + 248) = 15;
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 2 + 176;
            break;
        case 0x19:
            *(_BYTE*)(a1 + 248) = 16;
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 3 + 178;
            break;
        case 0x11:
            *(_BYTE*)(a1 + 248) = 4;
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 2 + 72;
            break;
        }
        *(_BYTE*)(a1 + 255) = 0;
        *(_BYTE*)(a1 + 253) = 1;
        sub_41F169((_WORD*)a1, 30);
        *(_BYTE*)(a1 + 213) = -1;
        if (*(int*)(a1 + 444) <= 1)
        {
            memset((void*)(a1 + 453), 0, 8u);
            memset((void*)(a1 + 461), 0, 8u);
        }
        return;
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_BYTE*)(a1 + 251) = 0;
            memset((void*)(a1 + 453), 0, 8u);
            memset((void*)(a1 + 461), 0, 8u);
        }
        *(_BYTE*)(a1 + 212) = 0;
        switch (*(_DWORD*)(a1 + 428))
        {
        case 0x12:
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 8 % 2 + 174;
            break;
        case 0x14:
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 2 + 176;
            break;
        case 0x15:
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 3 + 178;
            break;
        case 0x16:
            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 2 + 185;
            break;
        }
        return;
    case 0x13:
        if (*(int*)(a1 + 444) <= 1)
        {
            memset((void*)(a1 + 453), 0, 8u);
            memset((void*)(a1 + 461), 0, 8u);
        }
        if (!((*(_DWORD*)(a1 + 444) - 1) % 4))
            *(_DWORD*)(a1 + 424) = *(_DWORD*)(a1 + 424) == 0;
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 348) >= 0)
            *(_WORD*)(a1 + 204) = 19;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x25:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 372) = 0;
            *(_DWORD*)(a1 + 380) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 400;
            else
                *(_DWORD*)(a1 + 372) = -400;
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -620;
            *(_DWORD*)(a1 + 360) = 40;
        }
        if (*(int*)(a1 + 444) >= 14)
        {
            if (*(int*)(a1 + 444) >= 21)
            {
                *(_WORD*)(a1 + 204) = 19;
            }
            else if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0)
                && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            {
                *(_WORD*)(a1 + 204) = 28;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 17;
            }
        }
        else if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0)
            && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
        {
            *(_WORD*)(a1 + 204) = 26;
        }
        else
        {
            *(_WORD*)(a1 + 204) = 16;
        }
        return;
    case 0x22:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436) == 1)
            {
                *(_DWORD*)(a1 + 372) = 200;
            }
            else if (!*(_DWORD*)(a1 + 436))
            {
                *(_DWORD*)(a1 + 372) = -200;
            }
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -500;
            *(_DWORD*)(a1 + 360) = 40;
        }
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x24:
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 400;
            else
                *(_DWORD*)(a1 + 372) = -400;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -300;
            *(_DWORD*)(a1 + 360) = 30;
        }
        *(_BYTE*)(a1 + 212) = 0;
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x26:
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        *(_BYTE*)(a1 + 212) = 0;
        *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x23:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 100;
            else
                *(_DWORD*)(a1 + 372) = -100;
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -700;
            *(_DWORD*)(a1 + 360) = 30;
        }
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x1D:
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 392) = 1;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
        }
        *(_DWORD*)(a1 + 380) = 0;
        *(_BYTE*)(a1 + 212) = 0;
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x27:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 180) = 1;
            *(_BYTE*)(a1 + 177) = 1;
            *(_DWORD*)(a1 + 372) = 0;
            *(_DWORD*)(a1 + 380) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 600;
            else
                *(_DWORD*)(a1 + 372) = -600;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 376) = 0;
            *(_DWORD*)(a1 + 348) = -600;
            *(_DWORD*)(a1 + 360) = 0;
            *(_DWORD*)(a1 + 440) = 0;
        }
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        if (*(_DWORD*)(a1 + 440))
        {
            if (*(_DWORD*)(a1 + 440) + 60 == *(_DWORD*)(a1 + 444))
            {
                v47 = sub_446465((char*)unk_4B9B10);
                sub_446442((int*)unk_4B9B10, a1, (int)&v45);
                v49 = 800 * sub_44647E((char*)unk_4B9B10);
                if (*(int*)(a1 + 332) >= 0)
                {
                    if (*(_DWORD*)(a1 + 332) >= v49)
                        *(_DWORD*)(a1 + 332) = v49 - 100;
                }
                else
                {
                    *(_DWORD*)(a1 + 332) = 0;
                }
                if (v45 >= -32)
                {
                    *(_DWORD*)(a1 + 328) = 100 * v47;
                    v46 = 800;
                }
                else
                {
                    *(_DWORD*)(a1 + 328) = 100 * (v47 + 320);
                    v46 = -800;
                }
                do
                {
                    *(_DWORD*)(a1 + 328) += v46;
                    v48 = sub_446497((int*)unk_4B9B10, *(_DWORD*)(a1 + 328) / 100, *(_DWORD*)(a1 + 332) / 100);
                } while (v48 == 1020);
                *(int*)(a1 + 372) /= 2;
                *(_DWORD*)(a1 + 336) = -48000;
                *(_DWORD*)(a1 + 348) = 0;
                *(_DWORD*)(a1 + 360) = 30;
                *(_DWORD*)(a1 + 180) = 0;
                *(_BYTE*)(a1 + 177) = 0;
            }
        }
        else
        {
            sub_446442((int*)unk_4B9B10, a1, (int)v50);
            if (v50[0] < -32 || v50[0] > 352)
                *(_DWORD*)(a1 + 440) = *(_DWORD*)(a1 + 444);
        }
        return;
    case 0x1E:
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 400;
            else
                *(_DWORD*)(a1 + 372) = -400;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 340) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -150;
            *(_DWORD*)(a1 + 360) = 30;
        }
        *(_BYTE*)(a1 + 212) = 0;
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x21:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            *(_DWORD*)(a1 + 380) = 0;
            *(_DWORD*)(a1 + 372) = 0;
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 372) = 200;
            else
                *(_DWORD*)(a1 + 372) = -200;
            *(_DWORD*)(a1 + 436) = 0;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 344) = 0;
            *(_DWORD*)(a1 + 348) = -250;
            *(_DWORD*)(a1 + 360) = 40;
        }
        if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
            *(_WORD*)(a1 + 204) = 26;
        else
            *(_WORD*)(a1 + 204) = 16;
        return;
    case 0x28:
        if (*(_DWORD*)(a1 + 444) == 1)
        {
            *(_DWORD*)(a1 + 436) = 0;
        }
        else if (*(_DWORD*)(a1 + 444) == 8)
        {
            *(_DWORD*)(a1 + 436) = 1;
        }
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) >= 8)
            *(_WORD*)(a1 + 204) = 17;
        else
            *(_WORD*)(a1 + 204) = 16;
        *(_DWORD*)(a1 + 348) = 800;
        return;
    case 0x2A:
        *(_BYTE*)(a1 + 212) = 0;
        if (*(int*)(a1 + 444) <= 1)
        {
            if (*(_DWORD*)(a1 + 436))
                *(_DWORD*)(a1 + 380) = 120;
            else
                *(_DWORD*)(a1 + 380) = -120;
        }
        v44 = *(_DWORD*)(a1 + 444) / 8 % 4;
        if (v44)
        {
            switch (v44)
            {
            case 1:
                *(_WORD*)(a1 + 204) = 22;
                break;
            case 2:
                *(_WORD*)(a1 + 204) = 21;
                break;
            case 3:
                *(_WORD*)(a1 + 204) = 20;
                break;
            }
        }
        else
        {
            *(_WORD*)(a1 + 204) = 23;
        }
        if (*(_DWORD*)(a1 + 436))
            *(_DWORD*)(a1 + 340) = 120;
        else
            *(_DWORD*)(a1 + 340) = -120;
        if (*(int*)(a1 + 444) > 32)
        {
            if ((!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 340) >= 0) && (*(_DWORD*)(a1 + 424) || *(int*)(a1 + 340) <= 0))
                *(_DWORD*)(a1 + 432) = 45;
            else
                *(_DWORD*)(a1 + 432) = 44;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x2C:
        *(_BYTE*)(a1 + 212) = 0;
        *(_WORD*)(a1 + 204) = 18;
        if (*(_BYTE*)(a1 + 470))
            --* (_BYTE*)(a1 + 470);
        if (!*(_BYTE*)(a1 + 470))
        {
            *(_BYTE*)(a1 + 608) = 0;
            *(_DWORD*)(a1 + 432) = 48;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x2D:
        *(_BYTE*)(a1 + 212) = 0;
        *(_WORD*)(a1 + 204) = 27;
        if (*(_BYTE*)(a1 + 470))
            --* (_BYTE*)(a1 + 470);
        if (!*(_BYTE*)(a1 + 470))
        {
            *(_BYTE*)(a1 + 608) = 0;
            *(_DWORD*)(a1 + 432) = 48;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x2E:
        *(_BYTE*)(a1 + 212) = 0;
        *(_WORD*)(a1 + 204) = 17;
        if (*(_BYTE*)(a1 + 470))
            --* (_BYTE*)(a1 + 470);
        if (*(_BYTE*)(a1 + 470))
        {
            if (*(int*)(a1 + 444) > 12)
            {
                *(_DWORD*)(a1 + 432) = 44;
                *(_DWORD*)(a1 + 444) = 0;
            }
        }
        else
        {
            if (*(_WORD*)(a1 + 214))
                *(_DWORD*)(a1 + 432) = 48;
            else
                *(_DWORD*)(a1 + 432) = 78;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    case 0x2F:
        *(_BYTE*)(a1 + 212) = 0;
        *(_WORD*)(a1 + 204) = 28;
        if (*(_BYTE*)(a1 + 470))
            --* (_BYTE*)(a1 + 470);
        if (*(_BYTE*)(a1 + 470))
        {
            if (*(int*)(a1 + 444) > 12)
            {
                *(_DWORD*)(a1 + 432) = 45;
                *(_DWORD*)(a1 + 444) = 0;
            }
        }
        else
        {
            if (*(_WORD*)(a1 + 214))
                *(_DWORD*)(a1 + 432) = 48;
            else
                *(_DWORD*)(a1 + 432) = 79;
            *(_DWORD*)(a1 + 444) = 0;
        }
        return;
    }
    if (*(_DWORD*)(a1 + 428) != 48)
    {
        switch (*(_DWORD*)(a1 + 428))
        {
        case 'I':
            if (*(_DWORD*)(a1 + 444) == 2)
                v42 = 0;
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_DWORD*)(a1 + 292) = 0;
                *(_DWORD*)(a1 + 392) = 1;
                *(_BYTE*)(a1 + 252) = 0;
                sub_423CF2((_BYTE*)a1, 1, 0, 1, 0, 1, -20);
            }
            *(_BYTE*)(a1 + 212) = 0;
            if (*(int*)(a1 + 444) >= 4)
            {
                if (*(int*)(a1 + 444) >= 12)
                    *(_WORD*)(a1 + 204) = 258;
                else
                    *(_WORD*)(a1 + 204) = 259;
            }
            else
            {
                *(_WORD*)(a1 + 204) = 6;
            }
            if (*(_DWORD*)(a1 + 444) == 12)
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
            if (*(int*)(a1 + 444) >= 20
                || *(int*)(a1 + 444) > 1
                && (!*(_DWORD*)(a1 + 304)
                    || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304)) != (struct Concurrency::ISchedulerProxy*)74))
            {
                sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                *(_DWORD*)(a1 + 432) = 50;
                *(_DWORD*)(a1 + 360) = 30;
                *(_DWORD*)(a1 + 304) = 0;
            }
            return;
        case 'J':
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                if (*(_DWORD*)(a1 + 304))
                {
                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304)) == (struct Concurrency::ISchedulerProxy*)73)
                    {
                        *(_DWORD*)(a1 + 288) = 0;
                        *(_BYTE*)(a1 + 252) = 0;
                        if (*(_DWORD*)(a1 + 392))
                        {
                            *(_DWORD*)(a1 + 372) = 0;
                            *(_DWORD*)(a1 + 376) = 0;
                            *(_DWORD*)(a1 + 340) = 0;
                            *(_DWORD*)(a1 + 344) = 0;
                            *(_DWORD*)(a1 + 348) = 0;
                            *(_DWORD*)(a1 + 352) = 0;
                            *(_DWORD*)(a1 + 356) = 0;
                            *(_DWORD*)(a1 + 360) = 0;
                        }
                    }
                }
            }
            *(_BYTE*)(a1 + 212) = 0;
            if (*(int*)(a1 + 444) >= 12)
                *(_WORD*)(a1 + 204) = 13;
            else
                *(_WORD*)(a1 + 204) = 14;
            if (*(int*)(a1 + 444) >= 20
                || !*(_DWORD*)(a1 + 304)
                || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304)) != (struct Concurrency::ISchedulerProxy*)73)
            {
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A48, -1, 100, 100, 0);
                *(_DWORD*)(a1 + 432) = 40;
                *(_DWORD*)(a1 + 304) = 0;
            }
            return;
        case '1':
            *(_BYTE*)(a1 + 212) = 0;
            *(_WORD*)(a1 + 204) = 24;
            *(_DWORD*)(a1 + 352) = 0;
            *(_DWORD*)(a1 + 356) = 0;
            *(_DWORD*)(a1 + 340) = 350 * *(_DWORD*)(a1 + 436);
            *(_DWORD*)(a1 + 344) = 180 * *(_DWORD*)(a1 + 440);
            *(_DWORD*)(a1 + 380) = *(_DWORD*)(a1 + 340);
            *(_DWORD*)(a1 + 384) = *(_DWORD*)(a1 + 344);
            if (*(int*)(a1 + 444) > 10)
            {
                *(_DWORD*)(a1 + 432) = 3;
                *(_DWORD*)(a1 + 444) = 0;
                *(_DWORD*)(a1 + 216) = 0;
                *(_BYTE*)(a1 + 220) = 1;
                *(_BYTE*)(a1 + 471) = 1;
                *(_DWORD*)(a1 + 296) = 0;
            }
            return;
        case 'R':
            if (*(_DWORD*)(a1 + 444) == 1)
            {
                *(_DWORD*)(a1 + 372) = 0;
                *(_DWORD*)(a1 + 376) = 0;
                *(_DWORD*)(a1 + 340) = 0;
                *(_DWORD*)(a1 + 344) = 0;
                *(_DWORD*)(a1 + 348) = 0;
                *(_DWORD*)(a1 + 352) = 0;
                *(_DWORD*)(a1 + 356) = 0;
                *(_DWORD*)(a1 + 360) = 0;
                if (*(_DWORD*)(a1 + 312))
                {
                    *(_DWORD*)(a1 + 424) = sub_426090(*(_DWORD**)(a1 + 312)) > *(_DWORD*)(a1 + 328);
                    if (*(_DWORD*)(a1 + 320))
                    {
                        sub_4211F5(a1);
                        Concurrency::details::SchedulingRing::SetOwningNode(
                            *(Concurrency::details::SchedulingRing**)(a1 + 312),
                            *(struct Concurrency::details::SchedulingNode**)(a1 + 4));
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A1C, -1, 100, 100, 0);
                    }
                }
            }
            if (!*(_DWORD*)(a1 + 320) && *(_DWORD*)(a1 + 312))
            {
                *(_DWORD*)(a1 + 372) = 1400 * ((*(_DWORD*)(a1 + 424) == 0) - *(_DWORD*)(a1 + 424))
                    + sub_426090(*(_DWORD**)(a1 + 312))
                    - *(_DWORD*)(a1 + 328);
                *(_DWORD*)(a1 + 376) = sub_4260B0(*(_DWORD**)(a1 + 312)) - *(_DWORD*)(a1 + 332);
            }
            *(_BYTE*)(a1 + 212) = 0;
            *(_WORD*)(a1 + 204) = 29;
            if (*(int*)(a1 + 444) > 1
                && (!*(_DWORD*)(a1 + 312)
                    || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 312)) != (struct Concurrency::ISchedulerProxy*)82))
            {
                sub_421051((_DWORD*)a1);
            }
            return;
        case '4':
        case '5':
            if (*(_BYTE*)(a1 + 188) == 1)
            {
                *(_BYTE*)(a1 + 212) = 1;
                *(_WORD*)(a1 + 204) = 52;
            }
            else
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 29;
            }
            if (*(_DWORD*)(a1 + 304))
            {
                v41 = sub_425F30((int*)*(_DWORD*)(a1 + 304));
                if ((*(_DWORD*)(a1 + 428) != 52 || v41 == 54) && (*(_DWORD*)(a1 + 428) != 53 || v41 == 55))
                    sub_423CF2(*(_BYTE**)(a1 + 304), 1, -16, 1, 0, 0, 0);
                else
                    *(_DWORD*)(a1 + 444) = 121;
            }
            else
            {
                *(_DWORD*)(a1 + 444) = 121;
            }
            if (*(int*)(a1 + 444) > 120)
            {
                *(_DWORD*)(a1 + 432) = 3;
                *(_DWORD*)(a1 + 444) = 0;
                sub_417EE0(a1);
            }
            return;
        case '6':
            if (*(_DWORD*)(a1 + 304))
            {
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 14;
                v40 = sub_426090(*(_DWORD**)(a1 + 304));
                v39 = sub_425D70(*(_DWORD**)(a1 + 304));
                v38 = 1600 * (v39 - (v39 == 0)) + v40;
                if (sub_425E70(*(_BYTE**)(a1 + 304)) == 1)
                {
                    *(_WORD*)(a1 + 204) = 13;
                    v38 = 1200 * (v39 - (v39 == 0)) + v40;
                    v37 = sub_4260D0(*(_DWORD**)(a1 + 304));
                    v36 = v37 - 1300;
                    *(_DWORD*)(a1 + 348) = v37 - 1300 - *(_DWORD*)(a1 + 336);
                    *(_DWORD*)(a1 + 392) = 1;
                }
                *(_DWORD*)(a1 + 372) = v38 - *(_DWORD*)(a1 + 328);
                if (*(int*)(a1 + 444) > 120)
                {
                    *(_DWORD*)(a1 + 432) = 75;
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 444) = 0;
                }
                return;
            }
            break;
        case '7':
            if (*(_DWORD*)(a1 + 304))
            {
                v35 = sub_426090(*(_DWORD**)(a1 + 304));
                v10 = sub_425D70(*(_DWORD**)(a1 + 304));
                v34 = v10;
                v33 = 1600 * ((__PAIR64__(v10, v10) - 1) >> 32) + v35;
                *(_BYTE*)(a1 + 212) = 0;
                if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304)) == (struct Concurrency::ISchedulerProxy*)56)
                    *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 10 % 2 + 34;
                else
                    *(_WORD*)(a1 + 204) = 34;
                *(_DWORD*)(a1 + 424) = v34;
                if (*(int*)(a1 + 444) > 120)
                {
                    *(_DWORD*)(a1 + 432) = 75;
                    *(_DWORD*)(a1 + 304) = 0;
                    *(_DWORD*)(a1 + 444) = 0;
                    *(_DWORD*)(a1 + 372) = 0;
                    *(_DWORD*)(a1 + 376) = 0;
                    *(_DWORD*)(a1 + 348) = 0;
                    sub_423CF2((_BYTE*)a1, 0, 0, 0, 0, 0, 0);
                }
                return;
            }
            break;
        default:
            switch (*(_DWORD*)(a1 + 428))
            {
            case 0x40:
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 6;
                if (*(int*)(a1 + 444) > 8)
                {
                    *(_DWORD*)(a1 + 432) = *(_BYTE*)(a1 + 237) ? 10 : 3;
                    *(_DWORD*)(a1 + 444) = 0;
                    if (*(_DWORD*)(a1 + 304))
                    {
                        if ((v31 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 304)),
                            v32 = sub_425F30((int*)*(_DWORD*)(a1 + 304)),
                            v31 == (struct Concurrency::ISchedulerProxy*)44)
                            && v32 == 44
                            || v31 == (struct Concurrency::ISchedulerProxy*)45 && v32 == 45)
                        {
                            if (sub_425D50((int*)*(_DWORD*)(a1 + 304)))
                                *(_DWORD*)(a1 + 288) = 0;
                            else
                                sub_41714D(*(_DWORD**)(a1 + 304), a1);
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 288) = 0;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 288) = 0;
                    }
                    if (!*(_DWORD*)(a1 + 288))
                        *(_DWORD*)(a1 + 304) = 0;
                }
                break;
            case 0x43:
            case 0x44:
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 29;
                *(_DWORD*)(a1 + 288) = 0;
                *(_DWORD*)(a1 + 304) = 0;
                if (*(_DWORD*)(a1 + 444) == 1)
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A08, -1, 100, 100, 0);
                if (*(int*)(a1 + 444) > 20 && *(_DWORD*)(a1 + 428) == 67)
                {
                    *(_DWORD*)(a1 + 432) = 4;
                    *(_DWORD*)(a1 + 444) = 0;
                }
                break;
            case 0x41:
            case 0x42:
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 29;
                *(_DWORD*)(a1 + 288) = 0;
                *(_DWORD*)(a1 + 304) = 0;
                if (*(_DWORD*)(a1 + 444) == 1)
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A08, -1, 100, 100, 0);
                if (*(int*)(a1 + 444) > 20 && *(_DWORD*)(a1 + 428) == 65)
                {
                    *(_DWORD*)(a1 + 432) = 4;
                    *(_DWORD*)(a1 + 444) = 0;
                }
                break;
            case 0x4B:
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 20 % 2 + 59;
                if (*(int*)(a1 + 444) > 120)
                {
                    *(_DWORD*)(a1 + 432) = 3;
                    *(_DWORD*)(a1 + 444) = 0;
                }
                break;
            case 0x4C:
                if (*(_DWORD*)(a1 + 444) == 1)
                {
                    *(_DWORD*)(a1 + 372) = 0;
                    *(_DWORD*)(a1 + 376) = 0;
                    *(_DWORD*)(a1 + 340) = 0;
                    *(_DWORD*)(a1 + 344) = 0;
                    *(_DWORD*)(a1 + 348) = -300;
                    *(_DWORD*)(a1 + 352) = 0;
                    *(_DWORD*)(a1 + 356) = 0;
                    *(_DWORD*)(a1 + 360) = 30;
                    *(_DWORD*)(a1 + 304) = 0;
                }
                *(_BYTE*)(a1 + 212) = 0;
                *(_WORD*)(a1 + 204) = 16;
                break;
            case 0x1A:
                *(_BYTE*)(a1 + 212) = 0;
                if (*(_DWORD*)(a1 + 444) == 1)
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A18, -1, 100, 100, 0);
                if ((*(int*)(a1 + 444) >= 20 || *(_DWORD*)(a1 + 440))
                    && (*(int*)(a1 + 444) >= 12 || !*(_DWORD*)(a1 + 440)))
                {
                    *(_WORD*)(a1 + 204) = 24;
                    *(_DWORD*)(a1 + 340) = 0;
                    *(_DWORD*)(a1 + 344) = 0;
                }
                else
                {
                    *(_DWORD*)(a1 + 372) = 500 * *(_DWORD*)(a1 + 436);
                    *(_DWORD*)(a1 + 376) = 180 * *(_DWORD*)(a1 + 440);
                    if (*(_DWORD*)(a1 + 372))
                    {
                        if ((*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) >= 0)
                            && (!*(_DWORD*)(a1 + 424) || *(int*)(a1 + 372) <= 0))
                        {
                            *(_WORD*)(a1 + 204) = 77 - *(_DWORD*)(a1 + 444) / 4 % 4;
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 4 % 4 + 74;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 24;
                    }
                }
                if (*(int*)(a1 + 444) >= 24 && !*(_DWORD*)(a1 + 440) || *(int*)(a1 + 444) >= 14 && *(_DWORD*)(a1 + 440))
                    *(_DWORD*)(a1 + 432) = 4;
                break;
            case 0x4E:
            case 0x4F:
                *(_BYTE*)(a1 + 212) = 0;
                if (*(_DWORD*)(a1 + 428) == 78)
                    *(_WORD*)(a1 + 204) = 18 - *(_DWORD*)(a1 + 444) / 10 % 2;
                else
                    *(_WORD*)(a1 + 204) = *(_DWORD*)(a1 + 444) / 10 % 2 + 27;
                *(_BYTE*)(a1 + 176) = *(_DWORD*)(a1 + 444) / 5 % 2;
                if (*(_DWORD*)(a1 + 444) == 3)
                {
                    sub_43FFC3((int*)unk_4BDB28, unk_4B9A30, -1, 100, 100, 0);
                    *(_BYTE*)(a1 + 177) = 1;
                }
                if (*(int*)(a1 + 444) >= 80)
                {
                    *(_DWORD*)(a1 + 432) = 80;
                    *(_BYTE*)(a1 + 176) = 1;
                    *(_BYTE*)(a1 + 178) = 0;
                }
                break;
            case 0x51:
                switch (*(_BYTE*)(a1 + 188))
                {
                case 1:
                    *(_BYTE*)(a1 + 212) = 1;
                    if (*(int*)(a1 + 444) >= 5)
                    {
                        if (*(int*)(a1 + 444) >= 10)
                        {
                            if (*(int*)(a1 + 444) >= 15)
                            {
                                if (*(int*)(a1 + 444) >= 20)
                                    *(_WORD*)(a1 + 204) = 60;
                                else
                                    *(_WORD*)(a1 + 204) = 9;
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 8;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 7;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 6;
                    }
                    if (*(_DWORD*)(a1 + 444) == 4)
                    {
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A24, -1, 100, 100, 0);
                    }
                    else if (*(_DWORD*)(a1 + 444) == 8)
                    {
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                    }
                    break;
                case 2:
                    *(_BYTE*)(a1 + 212) = 1;
                    if (*(int*)(a1 + 444) >= 4)
                    {
                        if (*(int*)(a1 + 444) >= 8)
                        {
                            if (*(int*)(a1 + 444) >= 12)
                            {
                                if (*(int*)(a1 + 444) >= 26)
                                    *(_WORD*)(a1 + 204) = 115;
                                else
                                    *(_WORD*)(a1 + 204) = 19;
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 18;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 17;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 12;
                    }
                    if (*(_DWORD*)(a1 + 444) == 8)
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                    break;
                case 3:
                    *(_BYTE*)(a1 + 212) = 1;
                    if (*(int*)(a1 + 444) >= 4)
                    {
                        if (*(int*)(a1 + 444) >= 8)
                        {
                            if (*(int*)(a1 + 444) >= 12)
                            {
                                if (*(int*)(a1 + 444) >= 22)
                                {
                                    if (*(int*)(a1 + 444) >= 26)
                                        *(_WORD*)(a1 + 204) = 115;
                                    else
                                        *(_WORD*)(a1 + 204) = 16;
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 15;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 14;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 13;
                        }
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 12;
                    }
                    if (*(_DWORD*)(a1 + 444) == 8)
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                    break;
                default:
                    if (*(_BYTE*)(a1 + 195))
                    {
                        switch (*(_BYTE*)(a1 + 195))
                        {
                        case 1:
                            *(_BYTE*)(a1 + 212) = 1;
                            if (*(int*)(a1 + 444) >= 4)
                            {
                                if (*(int*)(a1 + 444) >= 8)
                                {
                                    if (*(int*)(a1 + 444) >= 10)
                                    {
                                        if (*(int*)(a1 + 444) >= 21)
                                        {
                                            if (*(int*)(a1 + 444) >= 25)
                                            {
                                                *(_BYTE*)(a1 + 212) = 0;
                                                *(_WORD*)(a1 + 204) = 69;
                                            }
                                            else
                                            {
                                                *(_WORD*)(a1 + 204) = 8;
                                            }
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 204) = 7;
                                        }
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 6;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 5;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 4;
                            }
                            if (*(_DWORD*)(a1 + 444) == 8)
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                            break;
                        case 2:
                            *(_BYTE*)(a1 + 212) = 1;
                            if (*(int*)(a1 + 444) >= 4)
                            {
                                if (*(int*)(a1 + 444) >= 8)
                                {
                                    if (*(int*)(a1 + 444) >= 12)
                                    {
                                        if (*(int*)(a1 + 444) >= 16)
                                        {
                                            if (*(int*)(a1 + 444) >= 20)
                                            {
                                                if (*(int*)(a1 + 444) >= 24)
                                                {
                                                    if (*(int*)(a1 + 444) >= 28)
                                                    {
                                                        if (*(int*)(a1 + 444) >= 32)
                                                        {
                                                            *(_BYTE*)(a1 + 212) = 0;
                                                            *(_WORD*)(a1 + 204) = 69;
                                                        }
                                                        else
                                                        {
                                                            *(_BYTE*)(a1 + 212) = 0;
                                                            *(_WORD*)(a1 + 204) = 3;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        *(_WORD*)(a1 + 204) = 11;
                                                    }
                                                }
                                                else
                                                {
                                                    *(_WORD*)(a1 + 204) = 10;
                                                }
                                            }
                                            else
                                            {
                                                *(_WORD*)(a1 + 204) = 9;
                                            }
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 204) = 8;
                                        }
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 7;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 6;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 5;
                            }
                            if (*(_DWORD*)(a1 + 444) == 8)
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                            break;
                        case 3:
                            *(_BYTE*)(a1 + 212) = 1;
                            if (*(int*)(a1 + 444) >= 4)
                            {
                                if (*(int*)(a1 + 444) >= 8)
                                {
                                    if (*(int*)(a1 + 444) >= 12)
                                    {
                                        if (*(int*)(a1 + 444) >= 16)
                                        {
                                            if (*(int*)(a1 + 444) >= 20)
                                            {
                                                if (*(int*)(a1 + 444) >= 24)
                                                {
                                                    *(_BYTE*)(a1 + 212) = 0;
                                                    *(_WORD*)(a1 + 204) = 69;
                                                }
                                                else
                                                {
                                                    *(_WORD*)(a1 + 204) = 5;
                                                }
                                            }
                                            else
                                            {
                                                *(_WORD*)(a1 + 204) = 3;
                                            }
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 204) = 9;
                                        }
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 8;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 7;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 6;
                            }
                            if (*(_DWORD*)(a1 + 444) == 8)
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                            break;
                        case 4:
                            *(_BYTE*)(a1 + 212) = 1;
                            if (*(int*)(a1 + 444) >= 4)
                            {
                                if (*(int*)(a1 + 444) >= 8)
                                {
                                    if (*(int*)(a1 + 444) >= 12)
                                    {
                                        if (*(int*)(a1 + 444) >= 16)
                                        {
                                            if (*(int*)(a1 + 444) >= 26)
                                            {
                                                if (*(int*)(a1 + 444) >= 30)
                                                {
                                                    if (*(int*)(a1 + 444) >= 34)
                                                    {
                                                        if (*(int*)(a1 + 444) >= 38)
                                                        {
                                                            *(_BYTE*)(a1 + 212) = 0;
                                                            *(_WORD*)(a1 + 204) = 69;
                                                        }
                                                        else
                                                        {
                                                            *(_WORD*)(a1 + 204) = 6;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        *(_WORD*)(a1 + 204) = 7;
                                                    }
                                                }
                                                else
                                                {
                                                    *(_WORD*)(a1 + 204) = 11;
                                                }
                                            }
                                            else
                                            {
                                                *(_WORD*)(a1 + 204) = 10;
                                            }
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 204) = 9;
                                        }
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 8;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 7;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 6;
                            }
                            if (*(_DWORD*)(a1 + 444) == 12)
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                            break;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 212) = 1;
                        if (*(int*)(a1 + 444) >= 4)
                        {
                            if (*(int*)(a1 + 444) >= 8)
                            {
                                if (*(int*)(a1 + 444) >= 20)
                                {
                                    if (*(int*)(a1 + 444) >= 25)
                                    {
                                        *(_BYTE*)(a1 + 212) = 0;
                                        *(_WORD*)(a1 + 204) = 69;
                                    }
                                    else
                                    {
                                        *(_WORD*)(a1 + 204) = 4;
                                    }
                                }
                                else
                                {
                                    *(_WORD*)(a1 + 204) = 6;
                                }
                            }
                            else
                            {
                                *(_WORD*)(a1 + 204) = 5;
                            }
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 4;
                        }
                        if (*(_DWORD*)(a1 + 444) == 8)
                            sub_43FFC3((int*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                    }
                    break;
                }
                break;
            default:
                if (*(_DWORD*)(a1 + 428))
                {
                    if (*(_DWORD*)(a1 + 428) == 80)
                    {
                        if (*(_DWORD*)(a1 + 444) == 1)
                        {
                            *(_BYTE*)(a1 + 212) = 0;
                            *(_WORD*)(a1 + 204) = 27;
                            *(_BYTE*)(a1 + 177) = 1;
                            *(_BYTE*)(a1 + 176) = 1;
                            *(_BYTE*)(a1 + 556) = 0;
                            *(_BYTE*)(a1 + 557) = 0;
                            *(_DWORD*)(a1 + 172) = 0;
                            sub_467E7D((int)unk_4B9B10, (_BYTE*)a1);
                            v30 = sub_425CD0((int*)unk_4B9B10);
                            if ((v30 == 1 || !v30 || v30 == 4) && unk_4B99CB && !*(_DWORD*)(a1 + 392))
                            {
                                v25 = *(_DWORD*)(a1 + 328) / 100;
                                v26 = *(_DWORD*)(a1 + 332) / 100;
                                v27 = sub_446497((int*)unk_4B9B10, v25, v26);
                                for (i = 0; i < 22; ++i)
                                    v24[i] = 1;
                                v20 = sub_465AFA((unsigned char*)unk_4B9B10);
                                v29 = unk_4B999A != 0;
                                v23 = 22;
                                if (v30 == 4 && !(rand() % 2))
                                {
                                    v20 = 0;
                                    for (j = 7; j < 14; ++j)
                                        v24[j] = 0;
                                    v23 = 15;
                                }
                                if (!v29)
                                {
                                    v24[15] = 0;
                                    v24[16] = 0;
                                    v23 -= 2;
                                }
                                if (!v20)
                                {
                                    v24[20] = 0;
                                    --v23;
                                }
                                v19 = rand() % v23;
                                for (k = 0; k < 22; ++k)
                                {
                                    if (v24[k])
                                    {
                                        if (!v19)
                                            break;
                                        --v19;
                                    }
                                }
                                v28 = k + 1;
                                sub_456A74((char*)unk_4B9B10, (int)&v25);
                            }
                        }
                    }
                    else if (*(_DWORD*)(a1 + 428) == 1)
                    {
                        *(_BYTE*)(a1 + 212) = 0;
                        *(_BYTE*)(a1 + 178) = 0;
                        *(_BYTE*)(a1 + 176) = *(_DWORD*)(a1 + 444) / 2 % 2;
                        if (*(_DWORD*)(a1 + 444) == 1)
                            sub_468011((char*)unk_4B9B10, (_BYTE*)a1);
                        if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                            *(_WORD*)(a1 + 204) = 70;
                        else
                            *(_WORD*)(a1 + 204) = 3;
                        if (*(int*)(a1 + 444) >= 120)
                        {
                            if (*(_DWORD*)(a1 + 392))
                                *(_DWORD*)(a1 + 432) = 51;
                            else
                                *(_DWORD*)(a1 + 432) = 4;
                            *(_BYTE*)(a1 + 178) = 1;
                            *(_BYTE*)(a1 + 177) = 0;
                            *(_BYTE*)(a1 + 176) = 0;
                        }
                    }
                }
                else
                {
                    *(_BYTE*)(a1 + 212) = 0;
                    *(_BYTE*)(a1 + 178) = 0;
                    if (sub_425FF0((int*)a1))
                    {
                        if (sub_494AA9(*(_BYTE**)(a1 + 480), 0))
                        {
                            if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                                *(_WORD*)(a1 + 204) = 157;
                            else
                                *(_WORD*)(a1 + 204) = 135;
                        }
                        else if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                        {
                            *(_WORD*)(a1 + 204) = 156;
                        }
                        else
                        {
                            *(_WORD*)(a1 + 204) = 0;
                        }
                    }
                    else if (*(_BYTE*)(a1 + 188) == 2)
                    {
                        *(_BYTE*)(a1 + 212) = 1;
                        if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                            *(_WORD*)(a1 + 204) = 117;
                        else
                            *(_WORD*)(a1 + 204) = 116;
                    }
                    else if (*(_BYTE*)(a1 + 188) == 3)
                    {
                        *(_BYTE*)(a1 + 212) = 1;
                        if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                            *(_WORD*)(a1 + 204) = 119;
                        else
                            *(_WORD*)(a1 + 204) = 118;
                    }
                    else if (*(_DWORD*)(a1 + 444) / 8 % 3 > 1)
                    {
                        *(_WORD*)(a1 + 204) = 70;
                    }
                    else
                    {
                        *(_WORD*)(a1 + 204) = 3;
                    }
                    if (*(int*)(a1 + 444) >= 120)
                    {
                        *(_DWORD*)(a1 + 432) = 4;
                        *(_BYTE*)(a1 + 178) = 1;
                    }
                }
                break;
            }
            return;
        }
        sub_417FC1(a1);
        return;
    }
    *(_BYTE*)(a1 + 608) = 0;
    if (sub_41BA53(a1, 0x8Bu, 0) && *(_DWORD*)(a1 + 444) == 1 && *(char*)(a1 + 232) > 0)
        *(_BYTE*)(a1 + 608) = *(_BYTE*)(a1 + 204);
    *(_BYTE*)(a1 + 212) = 0;
    *(_WORD*)(a1 + 204) = 24;
    if (*(_DWORD*)(a1 + 444) == 1)
    {
        *(_BYTE*)(a1 + 469) = 1;
        *(_DWORD*)(a1 + 216) = 0;
        *(_BYTE*)(a1 + 220) = 1;
        *(_BYTE*)(a1 + 471) = 1;
        if (sub_41BA53(a1, 0x8Bu, 0) && *(_DWORD*)(a1 + 296))
        {
            *(_DWORD*)(a1 + 432) = 71;
            *(_DWORD*)(a1 + 296) = 0;
            *(_DWORD*)(a1 + 300) = 0;
            return;
        }
        sub_417EAD((int*)a1);
        if (*(_DWORD*)(a1 + 292) && *(_DWORD*)(a1 + 304))
        {
            v9 = *(unsigned __int8*)(a1 + 193);
            if (v9 != (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 304)))
            {
                *(_DWORD*)(a1 + 432) = 73;
                sub_426050(*(_DWORD**)(a1 + 304), 74);
                return;
            }
            if (unk_4B99C8)
                sub_4211F5(*(_DWORD*)(a1 + 304));
        }
        if (sub_41BEA6((_DWORD*)a1))
        {
            v43 = sub_423D47((int*)a1 + 8);
            v16 = v43 >= 2 && v43 <= 4;
            v15 = v43 >= 6 && v43 <= 8;
            *(_BYTE*)(a1 + 224) = v16 - v15;
            v14 = v43 >= 4 && v43 <= 6;
            v13 = v43 == 1 || v43 == 2 || v43 == 8;
            *(_BYTE*)(a1 + 225) = v14 - v13;
        }
    }
    if (*(_DWORD*)(a1 + 444) == 1 && (*(_BYTE*)(a1 + 224) || *(_BYTE*)(a1 + 225)))
    {
        *(_DWORD*)(a1 + 432) = 49;
        if (*(char*)(a1 + 224) <= 0)
            v12 = (*(char*)(a1 + 224) >= 0) - 1;
        else
            v12 = 1;
        *(_DWORD*)(a1 + 436) = v12;
        if (*(char*)(a1 + 225) <= 0)
            v11 = (*(char*)(a1 + 225) >= 0) - 1;
        else
            v11 = 1;
        *(_DWORD*)(a1 + 440) = v11;
    }
    if (*(int*)(a1 + 444) > 10)
    {
        *(_DWORD*)(a1 + 432) = 3;
        *(_DWORD*)(a1 + 444) = 0;
        *(_DWORD*)(a1 + 296) = 0;
    }
    if (*(char*)(a1 + 608) > 0)
    {
        *(_WORD*)(a1 + 204) = *(char*)(a1 + 608);
        *(_DWORD*)(a1 + 432) = 3;
        *(_DWORD*)(a1 + 444) = 0;
        *(_DWORD*)(a1 + 296) = 0;
    }
}

