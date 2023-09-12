#include "sub.h" 
void sub_4532F2(int a1, double a2, double a3, double a4)
{
    int v4; // edx
    int v5; // edx
    int v6; // edx
    int v7; // eax
    CHAR String1[264]; // [esp+10h] [ebp-12Ch] BYREF
    struct tagRECT v10; // [esp+118h] [ebp-24h] BYREF
    struct tagRECT rc; // [esp+128h] [ebp-14h] BYREF
    int v12; // [esp+138h] [ebp-4h]

    if (*(_BYTE*)(a1 + 2516))
    {
        if (*(int*)(a1 + 2512) >= 3)
        {
            if (*(int*)(a1 + 2512) <= 10)
                v12 = *(_DWORD*)(a1 + 2512) / 2 + 4;
        }
        else
        {
            v12 = 2 * *(_DWORD*)(a1 + 2512);
        }
        if (*(_BYTE*)(a1 + 2516) == 1)
        {
            SetRect(&rc, 0, 0, 160 - 20 * v12, 240);
            sub_49EDC1((int)byte_4BDC60, v4, (int*)&rc, 0);
            SetRect(&rc, 20 * v12 + 160, 0, 320, 240);
            sub_49EDC1((int)byte_4BDC60, v5, (int*)&rc, 0);
        }
        else if (*(_BYTE*)(a1 + 2516) == 2)
        {
            SetRect(&v10, 0, 0, 20 * v12, 240);
            sub_49EDC1((int)byte_4BDC60, (int)&v10, (int*)&v10, 0);
            SetRect(&v10, 320 - 20 * v12, 0, 320, 240);
            sub_49EDC1((int)byte_4BDC60, v6, (int*)&v10, 0);
        }
        if (*(_BYTE*)(a1 + 2516))
        {
            if ((int)++ * (_DWORD*)(a1 + 2512) >= 10)
            {
                if (*(_BYTE*)(a1 + 2516) == 2)
                {
                    switch (*(_DWORD*)(a1 + 104))
                    {
                    case 1:
                        sub_473F7F((_DWORD*)a1);
                        break;
                    case 8:
                    case 0x16:
                    case 0x17:
                        sub_466789((void*)a1);
                        break;
                    case 9:
                    case 0x15:
                        sub_467DE0();
                        break;
                    case 0xA:
                    case 0xB:
                    case 0xC:
                        if (*(_DWORD*)(a1 + 108) != 11 || dword_4B9974)
                            sub_44E543((_DWORD*)a1);
                        break;
                    case 0xE:
                        sub_4667AC();
                        break;
                    case 0x13:
                        if (*(_DWORD*)(a1 + 108) != 14 && *(_DWORD*)(a1 + 108) != 17 && *(_DWORD*)(a1 + 108) != 20)
                        {
                            sub_45F935(a1);
                            sub_45FD81(a1);
                            if (*(int*)(a1 + 13104) >= 0)
                                sub_49DA8A((int*)byte_4BDC60, *(_DWORD*)(a1 + 13104));
                            *(_DWORD*)(a1 + 13104) = -1;
                        }
                        break;
                    case 0x18:
                    case 0x1A:
                    case 0x1B:
                        sub_4571BB(a1);
                        sub_473F7F((_DWORD*)a1);
                        break;
                    case 0x19:
                        if (*(int*)(a1 + 2528) >= 0)
                            sub_43FED3((int*)dword_4BDB28, *(_DWORD**)(a1 + 2528));
                        v7 = sub_4757D0((int*)a1 + 736);
                        sub_49DA8A((int*)byte_4BDC60, v7);
                        break;
                    default:
                        break;
                    }
                    dword_4B99EC = 1;
                    *(_BYTE*)(a1 + 2516) = 0;
                    *(_DWORD*)(a1 + 2512) = 0;
                    *(_DWORD*)(a1 + 112) = *(_DWORD*)(a1 + 104);
                    if (*(_BYTE*)(a1 + 16140))
                    {
                        lstrcpyA(String1, (LPCSTR)(a1 + 16140));
                        sub_467AC6(a1, (const char*)(a1 + 16140));
                        if (!lstrcmpiA(String1, (LPCSTR)(a1 + 16140)))
                            memset((void*)(a1 + 16140), 0, 0x104u);
                        *(_BYTE*)(a1 + 2516) = 1;
                    }
                    else
                    {
                        switch (*(_DWORD*)(a1 + 108))
                        {
                        case 1:
                            switch (*(_DWORD*)(a1 + 120))
                            {
                            case 1:
                                sub_456F35((_DWORD*)a1);
                                break;
                            case 2:
                                sub_4624C3((_DWORD*)a1);
                                break;
                            case 3:
                                sub_46279C((_DWORD*)a1);
                                break;
                            case 4:
                                sub_462B0C(a1);
                                break;
                            case 5:
                                sub_463007(a1);
                                break;
                            case 7:
                                sub_473F53((int*)a1);
                                break;
                            default:
                                return;
                            }
                            break;
                        case 2:
                            dword_4B9974 = 0;
                            sub_453A31(a1);
                            break;
                        case 3:
                            sub_44C3D6(a1);
                            break;
                        case 4:
                            sub_47482E(a1);
                            break;
                        case 5:
                            sub_455782(a1);
                            break;
                        case 6:
                            sub_466E2D(a1);
                            break;
                        case 7:
                            sub_44FE2E(a1);
                            break;
                        case 8:
                            sub_448750(a1);
                            break;
                        case 9:
                            sub_451AF1(a1);
                            break;
                        case 0xB:
                            if (*(_DWORD*)(a1 + 104) != 12 || dword_4B9974)
                                sub_44508E(a1, a2, a3, a4);
                            else
                                sub_452D16(a1, a2, a3, a4);
                            break;
                        case 0xD:
                            sub_457930(a1);
                            break;
                        case 0xE:
                            sub_459DE1(a1);
                            break;
                        case 0xF:
                            sub_45B8F5(a1);
                            break;
                        case 0x10:
                            sub_45C3AF(a1);
                            break;
                        case 0x11:
                            sub_45CBC2(a1);
                            break;
                        case 0x12:
                            sub_45CF7B(a1);
                            break;
                        case 0x13:
                            sub_45DC7E(a1);
                            break;
                        case 0x14:
                            sub_461335(a1);
                            break;
                        case 0x15:
                            sub_472FC4(a1);
                            break;
                        case 0x16:
                            sub_4686AA(a1);
                            break;
                        case 0x17:
                            sub_46DD55(a1, a2, a3, a4);
                            break;
                        case 0x18:
                            sub_47082B(a1);
                            break;
                        case 0x19:
                            sub_4710B5(a1);
                            break;
                        case 0x1A:
                            sub_471F33(a1);
                            break;
                        case 0x1B:
                            sub_473CFA(a1);
                            break;
                        default:
                            return;
                        }
                    }
                }
                else
                {
                    *(_BYTE*)(a1 + 2516) = 0;
                    *(_DWORD*)(a1 + 2512) = 0;
                    *(_BYTE*)(a1 + 11420) = 0;
                    *(_BYTE*)(a1 + 11432) = 0;
                }
            }
        }
    }
}
