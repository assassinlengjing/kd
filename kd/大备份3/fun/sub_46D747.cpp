#include "sub.h" 
void sub_46D747(int thisx)
{
    char* v1; // eax
    char* v2; // eax
    signed int j; // [esp+10h] [ebp-438h]
    char v5; // [esp+14h] [ebp-434h]
    int i; // [esp+1Ch] [ebp-42Ch]
    int v7; // [esp+20h] [ebp-428h]
    int v8[4]; // [esp+24h] [ebp-424h] BYREF
    int v9; // [esp+34h] [ebp-414h]
    CHAR String1[1024]; // [esp+38h] [ebp-410h] BYREF
    int v11; // [esp+438h] [ebp-10h]
    int v12; // [esp+444h] [ebp-4h]

    sub_46D6CB(thisx);
    sub_482BF0(v8);
    v12 = 0;
    if (sub_482C74((int)v8, aKkTeamTxt))
    {
        LOBYTE(v11) = 0;
        while (sub_482D44(v8, String1))
        {
            if (lstrcmpiA(String1, aStart_4))
            {
                if (!lstrcmpiA(String1, aEnd_0))
                    break;
                if ((unsigned __int8)v11 == 1)
                {
                    ++* (_DWORD*)(thisx + 15636);
                    sub_482FAA(v8);
                }
            }
            else
            {
                LOBYTE(v11) = 1;
                *(_DWORD*)(thisx + 15636) = 0;
                sub_482FAA(v8);
            }
        }
        if (*(_DWORD*)(thisx + 15628))
            operator delete(*(void**)(thisx + 15628));
        *(_DWORD*)(thisx + 15628) = (_DWORD)operator new(244 * *(_DWORD*)(thisx + 15636));
        *(_DWORD*)(thisx + 15632) = (_DWORD)operator new(*(_DWORD*)(thisx + 15636));
        memset(*(void**)(thisx + 15632), 0, *(_DWORD*)(thisx + 15636));
        sub_48314A(v8);
        while (sub_482D44(v8, String1))
        {
            if (!lstrcmpiA(String1, aStart_5))
            {
                sub_482FAA(v8);
                break;
            }
            if (!lstrcmpiA(String1, aEnd_1))
                break;
            sub_482FAA(v8);
        }
        v9 = 0;
    LABEL_21:
        if (v9 < *(_DWORD*)(thisx + 15636))
        {
            v7 = 244 * v9 + *(_DWORD*)(thisx + 15628);
            sub_46D2DE(v7);
            LOBYTE(v11) = 0;
            while (sub_482D44(v8, String1))
            {
                if (String1[0] == 110 && !String1[1])
                    goto LABEL_20;
                LOBYTE(v11) = v11 + 1;
                switch ((unsigned __int8)v11)
                {
                case 1u:
                    *(_WORD*)(v7 + 238) = sub_48307F(String1) - 1;
                    if (unk_4B99E4 <= *(__int16*)(v7 + 238))
                        *(_WORD*)(v7 + 238) = -1;
                    break;
                case 2u:
                    for (i = 0; i < unk_4B92D8; ++i)
                    {
                        v1 = unknown_libname_18((char*)(84 * i + unk_4B92D4));
                        if (!lstrcmpiA(String1, v1))
                            break;
                    }
                    if (i == unk_4B92D8)
                        LOWORD(i) = -1;
                    *(_WORD*)(v7 + 236) = i;
                    break;
                case 3u:
                    if (lstrlenA(String1) >= 64)
                        String1[63] = 0;
                    lstrcpyA((LPSTR)(v7 + 172), String1);
                    break;
                default:
                    if ((unsigned __int8)v11 >= 4u)
                    {
                        if ((unsigned __int8)v11 - 4 >= 6)
                        {
                            sub_482FAA(v8);
                        LABEL_20:
                            ++v9;
                            goto LABEL_21;
                        }
                        v5 = -1;
                        for (j = 0; j < (int)Size; ++j)
                        {
                            v2 = unknown_libname_18((char*)(unk_4B92E0 + 36 * j));
                            if (!lstrcmpiA(String1, v2))
                            {
                                v5 = MarkedForDetachment((_BYTE*)(unk_4B92E0 + 36 * j));
                                break;
                            }
                        }
                        if (j == Size)
                            j = -1;
                        *(_DWORD*)(v7 + 28 * ((unsigned __int8)v11 - 4)) = j;
                        *(_BYTE*)(v7 + 28 * ((unsigned __int8)v11 - 4) + 4) = v5;
                    }
                    break;
                }
            }
        }
    }
    v12 = -1;
    sub_482C2F(v8);
}

