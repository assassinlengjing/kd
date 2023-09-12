#include "sub.h" 
int sub_43E7AA(int thisx, int a2, int a3)
{
    int result; // eax
    int v5; // [esp+Ch] [ebp-118h]
    size_t v6; // [esp+10h] [ebp-114h]
    size_t v7; // [esp+14h] [ebp-110h]
    char v8; // [esp+18h] [ebp-10Ch]
    char v9; // [esp+1Ch] [ebp-108h]
    char v10; // [esp+20h] [ebp-104h]
    CHAR String1[256]; // [esp+24h] [ebp-100h] BYREF

    sub_43E701((void**)thisx);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    while (1)
    {
        result = sub_482D44((_DWORD*)a2, String1);
        if (!result)
            return result;
        if (!lstrcmpiA(String1, String2))
            return sub_482D44((_DWORD*)a2, String1);
        if (lstrcmpiA(String1, aN))
        {
            if (lstrcmpiA(String1, aBasic))
            {
                if (lstrcmpiA(String1, aStatus))
                {
                    if (lstrcmpiA(String1, aMes))
                    {
                        if (lstrcmpiA(String1, aHelp))
                        {
                            if (lstrcmpiA(String1, a1st))
                            {
                                if (lstrcmpiA(String1, a2nd))
                                {
                                    if (lstrcmpiA(String1, a3rd))
                                    {
                                        if (lstrcmpiA(String1, aBiri))
                                        {
                                            if (lstrcmpiA(String1, aSpMove))
                                            {
                                                if (lstrcmpiA(String1, aEtcSkill))
                                                {
                                                    ++v9;
                                                    switch (v8)
                                                    {
                                                    case 1:
                                                        if (v9 == 1)
                                                        {
                                                            memcpy((void*)(thisx + 4), String1, 0xAu);
                                                            *(_BYTE*)(thisx + 14) = 0;
                                                        }
                                                        else if (v9 == 2)
                                                        {
                                                            *(_WORD*)(thisx + 16) = sub_48307F(String1);
                                                        }
                                                        break;
                                                    case 2:
                                                        if (v9 > 0 && v9 < 11)
                                                            *(_BYTE*)(thisx + v9 + 17) = sub_48307F(String1);
                                                        break;
                                                    case 3:
                                                        if (v9 == 1)
                                                            goto LABEL_40;
                                                        if (v9 == 2 && v10 >= 0 && v10 < 4)
                                                        {
                                                            v7 = strlen(String1);
                                                            *(_DWORD*)(thisx + 4 * v10 + 40) = (_DWORD)operator new(v7 + 1);
                                                            strcpy(*(char**)(thisx + 4 * v10 + 40), String1);
                                                        }
                                                        break;
                                                    case 4:
                                                        if (v9 == 1)
                                                        {
                                                        LABEL_40:
                                                            v10 = sub_48307F(String1);
                                                        }
                                                        else if (v9 == 2 && v10 >= 0 && v10 < 5)
                                                        {
                                                            v6 = strlen(String1);
                                                            *(_DWORD*)(thisx + 4 * v10 + 56) = (_DWORD)operator new(v6 + 1);
                                                            strcpy(*(char**)(thisx + 4 * v10 + 56), String1);
                                                        }
                                                        break;
                                                    default:
                                                        if (v8 >= 5 && v8 <= 8 && v9 == 1)
                                                        {
                                                            *(_WORD*)(thisx + 2 * v8 + 66) = sub_485ED0(a3, 256, String1, -1);
                                                        }
                                                        else if (v8 == 9 && v9 < 4)
                                                        {
                                                            *(_BYTE*)(thisx + v9 + 27) = sub_48307F(String1);
                                                        }
                                                        else if (v8 == 10 && v9 < 7)
                                                        {
                                                            v5 = (v9 - 1) / 2;
                                                            if ((v9 - 1) % 2)
                                                                *(_BYTE*)(thisx + 2 * v5 + 32) = sub_48307F(String1);
                                                            else
                                                                *(_BYTE*)(thisx + 2 * v5 + 31) = sub_48307F(String1);
                                                        }
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v8 = 10;
                                                    v9 = 0;
                                                }
                                            }
                                            else
                                            {
                                                v8 = 9;
                                                v9 = 0;
                                            }
                                        }
                                        else
                                        {
                                            v8 = 8;
                                            v9 = 0;
                                        }
                                    }
                                    else
                                    {
                                        v8 = 7;
                                        v9 = 0;
                                    }
                                }
                                else
                                {
                                    v8 = 6;
                                    v9 = 0;
                                }
                            }
                            else
                            {
                                v8 = 5;
                                v9 = 0;
                            }
                        }
                        else
                        {
                            v8 = 4;
                            v9 = 0;
                        }
                    }
                    else
                    {
                        v8 = 3;
                        v9 = 0;
                    }
                }
                else
                {
                    v8 = 2;
                    v9 = 0;
                }
            }
            else
            {
                v8 = 1;
                v9 = 0;
            }
        }
        else
        {
            v8 = 0;
        }
    }
}

