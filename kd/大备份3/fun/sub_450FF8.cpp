#include "sub.h" 
UINT sub_450FF8(int thisx, LPCSTR lpFileName)
{
    UINT result; // eax
    __int16 PrivateProfileIntA; // ax
    char v4; // al
    char v5; // al
    int k; // [esp+4h] [ebp-94h]
    int m; // [esp+4h] [ebp-94h]
    int v9; // [esp+8h] [ebp-90h]
    int i; // [esp+Ch] [ebp-8Ch]
    int j; // [esp+Ch] [ebp-8Ch]
    signed int v12; // [esp+10h] [ebp-88h]
    CHAR KeyName[64]; // [esp+14h] [ebp-84h] BYREF
    INT nDefault; // [esp+54h] [ebp-44h]
    CHAR AppName[64]; // [esp+58h] [ebp-40h] BYREF

    unk_4B99F4 = GetPrivateProfileIntA(aConfig_0, ::KeyName, 0, lpFileName);
    unk_4B99F0 = GetPrivateProfileIntA(aConfig_1, aPutdamage, 1, lpFileName);
    *(_BYTE*)(thisx + 2496) = GetPrivateProfileIntA(aConfig_2, aGamespeed, 1, lpFileName);
    if (!*(_BYTE*)(thisx + 2496))
        *(_BYTE*)(thisx + 2496) = 1;
    *(_BYTE*)(thisx + 77) = GetPrivateProfileIntA(aConfig_3, aHitstop, 1, lpFileName);
    *(_BYTE*)(thisx + 81) = GetPrivateProfileIntA(aConfig_4, aSamechar, 0, lpFileName);
    *(_BYTE*)(thisx + 79) = GetPrivateProfileIntA(aConfig_5, aUseitem, 1, lpFileName);
    *(_BYTE*)(thisx + 80) = GetPrivateProfileIntA(aConfig_6, aHitsameteam, 0, lpFileName);
    *(_BYTE*)(thisx + 30) = GetPrivateProfileIntA(aConfig_7, aUseweaponnum, 4, lpFileName);
    *(_BYTE*)(thisx + 78) = GetPrivateProfileIntA(aConfig_8, aAttackbuttongu_0, 1, lpFileName);
    *(_BYTE*)(thisx + 76) = GetPrivateProfileIntA(aConfig_9, aUsecombinemove_1, 1, lpFileName);
    *(_BYTE*)(thisx + 99) = GetPrivateProfileIntA(aConfig_10, aGrounddamage, 1, lpFileName);
    *(_BYTE*)(thisx + 100) = GetPrivateProfileIntA(aConfig_11, aBlackholetype, 1, lpFileName);
    *(_BYTE*)(thisx + 98) = GetPrivateProfileIntA(aConfig_12, aRandomselectfi_0, 0, lpFileName);
    *(_DWORD*)(thisx + 11380) = GetPrivateProfileIntA(aConfig_13, aSurvivalrecord_4, 0, lpFileName);
    *(_DWORD*)(thisx + 11384) = GetPrivateProfileIntA(aConfig_14, aSurvivalrecord_5, 0, lpFileName);
    *(_DWORD*)(thisx + 11388) = GetPrivateProfileIntA(aConfig_15, aSurvivalrecord_6, 0, lpFileName);
    *(_DWORD*)(thisx + 11392) = GetPrivateProfileIntA(aConfig_16, aSurvivalrecord_7, 0, lpFileName);
    *(_DWORD*)(thisx + 11396) = GetPrivateProfileIntA(aConfig_17, aSurvivalrecord_8, 0, lpFileName);
    *(_BYTE*)(thisx + 2477) = GetPrivateProfileIntA(aKkconfig_0, aGamenum, 3, lpFileName) % 0xA;
    if (!*(_BYTE*)(thisx + 2477))
        *(_BYTE*)(thisx + 2477) = 3;
    *(_DWORD*)(thisx + 2368) = GetPrivateProfileIntA(aKkconfig_1, aIstag, 0, lpFileName);
    *(_BYTE*)(thisx + 2382) = GetPrivateProfileIntA(aKkconfig_2, aPlayernum, 1, lpFileName);
    *(_BYTE*)(thisx + 2451) = GetPrivateProfileIntA(aKkconfig_3, aIsuseitem, 1, lpFileName);
    *(_BYTE*)(thisx + 2402) = (unsigned __int8)GetPrivateProfileIntA(aKkconfig_4, aWeaponnum, 4, lpFileName) % 9;
    *(_DWORD*)(thisx + 2372) = GetPrivateProfileIntA(aKkconfig_5, aShowpoint, 0, lpFileName);
    *(_BYTE*)(thisx + 2471) = GetPrivateProfileIntA(aKkconfig_6, aGrounddamage_0, 1, lpFileName);
    *(_BYTE*)(thisx + 2472) = (unsigned __int8)GetPrivateProfileIntA(aKkconfig_7, aBlackholetype_0, 0, lpFileName) % 3;
    *(_BYTE*)(thisx + 2448) = GetPrivateProfileIntA(aKkconfig_8, aUsecombinemove_2, 1, lpFileName);
    *(_BYTE*)(thisx + 2452) = GetPrivateProfileIntA(aKkconfig_9, aHitsameteam_0, 0, lpFileName);
    unk_4B99E9 = GetPrivateProfileIntA(aDirectdrawconf_0, aFullscreen, 1, lpFileName);
    unk_4B99E6 = GetPrivateProfileIntA(aDirectdrawconf_1, aBackgroundrun, 0, lpFileName);
    unk_4B99E8 = GetPrivateProfileIntA(aDirectdrawconf_2, aVsyncwait, 0, lpFileName);
    result = GetPrivateProfileIntA(aDirectdrawconf_3, aZoom, 1, lpFileName);
    unk_4B99E7 = result;
    for (nDefault = 0; nDefault < 14; ++nDefault)
    {
        wsprintfA(AppName, aWeaponrate_0);
        wsprintfA(KeyName, "%02d", nDefault);
        PrivateProfileIntA = GetPrivateProfileIntA(AppName, KeyName, 10, lpFileName);
        *(_WORD*)(thisx + 2 * nDefault + 48) = PrivateProfileIntA;
        result = nDefault + 1;
    }
    for (nDefault = 0; nDefault < 8; ++nDefault)
    {
        wsprintfA(AppName, aInitdevice_0);
        wsprintfA(KeyName, "%dP", nDefault + 1);
        v12 = GetPrivateProfileIntA(AppName, KeyName, nDefault, lpFileName);
        sub_47652C((_DWORD*)&unk_4B9410[108 * nDefault], v12);
        wsprintfA(AppName, "JoyStickAssign%dP", nDefault + 1);
        for (i = 0; i < 11; ++i)
        {
            v9 = i - 3;
            if (i < 4)
                v9 = -(i + 1);
            if (i)
            {
                switch (i)
                {
                case 1:
                    wsprintfA(KeyName, aDown);
                    break;
                case 2:
                    wsprintfA(KeyName, aLeft);
                    break;
                case 3:
                    wsprintfA(KeyName, aRight);
                    break;
                case 9:
                    wsprintfA(KeyName, aSelect);
                    break;
                case 10:
                    wsprintfA(KeyName, aStart);
                    break;
                default:
                    wsprintfA(KeyName, "Trigger%d", i - 3);
                    break;
                }
            }
            else
            {
                wsprintfA(KeyName, aUp_0);
            }
            v4 = GetPrivateProfileIntA(AppName, KeyName, v9, lpFileName);
            *(_BYTE*)(thisx + 11 * nDefault + i + 11176) = v4;
        }
        wsprintfA(AppName, "KeyBoardAssign%dP", nDefault + 1);
        for (j = 0; j < 11; ++j)
        {
            if (j)
            {
                switch (j)
                {
                case 1:
                    wsprintfA(KeyName, aDown_0);
                    break;
                case 2:
                    wsprintfA(KeyName, aLeft_0);
                    break;
                case 3:
                    wsprintfA(KeyName, aRight_0);
                    break;
                case 9:
                    wsprintfA(KeyName, aSelect_0);
                    break;
                case 10:
                    wsprintfA(KeyName, aStart_0);
                    break;
                default:
                    wsprintfA(KeyName, "Trigger%d", j - 3);
                    break;
                }
            }
            else
            {
                wsprintfA(KeyName, aUp_1);
            }
            v5 = GetPrivateProfileIntA(AppName, KeyName, *(unsigned __int8*)(thisx + 11 * nDefault + j + 11264), lpFileName);
            *(_BYTE*)(thisx + 11 * nDefault + j + 11264) = v5;
        }
        result = nDefault + 1;
    }
    for (nDefault = 0; nDefault < 8; ++nDefault)
    {
        for (k = 0; k < 11; ++k)
        {
            sub_4768A2(&unk_4B9410[108 * nDefault], k, *(_BYTE*)(thisx + 11 * nDefault + k + 11176));
            result = k + 1;
        }
        for (m = 0; m < 11; ++m)
        {
            sub_47690D(&unk_4B9410[108 * nDefault], m, *(_BYTE*)(thisx + 11 * nDefault + m + 11264));
            result = m + 1;
        }
    }
    return result;
}