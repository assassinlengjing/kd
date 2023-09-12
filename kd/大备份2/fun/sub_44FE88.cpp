#include "sub.h" 
int sub_44FE88(int thisx, LPCSTR lpFileName)
{
    char v2; // al
    int result; // eax
    int j; // [esp+4h] [ebp-44Ch]
    int k; // [esp+4h] [ebp-44Ch]
    int v7; // [esp+8h] [ebp-448h]
    int v8; // [esp+8h] [ebp-448h]
    int v9; // [esp+8h] [ebp-448h]
    int v10; // [esp+8h] [ebp-448h]
    int v11; // [esp+8h] [ebp-448h]
    int v12; // [esp+8h] [ebp-448h]
    int v13; // [esp+8h] [ebp-448h]
    int v14; // [esp+8h] [ebp-448h]
    int v15; // [esp+8h] [ebp-448h]
    int v16; // [esp+8h] [ebp-448h]
    int v17; // [esp+8h] [ebp-448h]
    int v18; // [esp+8h] [ebp-448h]
    int v19; // [esp+8h] [ebp-448h]
    int v20; // [esp+8h] [ebp-448h]
    int v21; // [esp+8h] [ebp-448h]
    int v22; // [esp+8h] [ebp-448h]
    int v23; // [esp+8h] [ebp-448h]
    int v24; // [esp+8h] [ebp-448h]
    int v25; // [esp+8h] [ebp-448h]
    int v26; // [esp+8h] [ebp-448h]
    int v27; // [esp+8h] [ebp-448h]
    int v28; // [esp+8h] [ebp-448h]
    int v29; // [esp+8h] [ebp-448h]
    int v30; // [esp+8h] [ebp-448h]
    int v31; // [esp+8h] [ebp-448h]
    int v32; // [esp+8h] [ebp-448h]
    int v33; // [esp+8h] [ebp-448h]
    int v34; // [esp+8h] [ebp-448h]
    int v35; // [esp+8h] [ebp-448h]
    int v36; // [esp+8h] [ebp-448h]
    int v37; // [esp+8h] [ebp-448h]
    int v38; // [esp+8h] [ebp-448h]
    int v39; // [esp+8h] [ebp-448h]
    int v40; // [esp+8h] [ebp-448h]
    int v41; // [esp+8h] [ebp-448h]
    int v42; // [esp+8h] [ebp-448h]
    int v43; // [esp+8h] [ebp-448h]
    CHAR String[1024]; // [esp+Ch] [ebp-444h] BYREF
    int i; // [esp+40Ch] [ebp-44h]
    CHAR AppName[64]; // [esp+410h] [ebp-40h] BYREF

    memset(AppName, 0, sizeof(AppName));
    memset(String, 0, sizeof(String));
    wsprintfA(String, "ShowFPS = %d", dword_4B99F4);
    v7 = lstrlenA(String) + 1;
    wsprintfA(&String[v7], "PutDamage = %d", dword_4B99F0);
    v8 = v7 + lstrlenA(&String[v7]) + 1;
    wsprintfA(&String[v8], "GameSpeed = %d", *(unsigned __int8*)(thisx + 2496));
    v9 = v8 + lstrlenA(&String[v8]) + 1;
    wsprintfA(&String[v9], "HitStop = %d", *(unsigned __int8*)(thisx + 77));
    v10 = v9 + lstrlenA(&String[v9]) + 1;
    wsprintfA(&String[v10], "SameChar = %d", *(unsigned __int8*)(thisx + 81));
    v11 = v10 + lstrlenA(&String[v10]) + 1;
    wsprintfA(&String[v11], "UseItem = %d", *(unsigned __int8*)(thisx + 79));
    v12 = v11 + lstrlenA(&String[v11]) + 1;
    wsprintfA(&String[v12], "HitSameTeam = %d", *(unsigned __int8*)(thisx + 80));
    v13 = v12 + lstrlenA(&String[v12]) + 1;
    wsprintfA(&String[v13], "UseWeaponNum = %d", *(unsigned __int8*)(thisx + 30));
    v14 = v13 + lstrlenA(&String[v13]) + 1;
    wsprintfA(&String[v14], "UseCombineMove = %d", *(unsigned __int8*)(thisx + 76));
    v15 = v14 + lstrlenA(&String[v14]) + 1;
    wsprintfA(&String[v15], "AttackButtonGuard = %d", *(unsigned __int8*)(thisx + 78));
    v16 = v15 + lstrlenA(&String[v15]) + 1;
    wsprintfA(&String[v16], "GroundDamage = %d", *(unsigned __int8*)(thisx + 99));
    v17 = v16 + lstrlenA(&String[v16]) + 1;
    wsprintfA(&String[v17], "BlackHoleType = %d", *(unsigned __int8*)(thisx + 100));
    v18 = v17 + lstrlenA(&String[v17]) + 1;
    wsprintfA(&String[v18], "RandomSelectFightType = %d", *(unsigned __int8*)(thisx + 98));
    v19 = v18 + lstrlenA(&String[v18]) + 1;
    wsprintfA(&String[v19], "SurvivalRecordVeryEasy = %d", *(_DWORD*)(thisx + 11380));
    v20 = v19 + lstrlenA(&String[v19]) + 1;
    wsprintfA(&String[v20], "SurvivalRecordEasy = %d", *(_DWORD*)(thisx + 11384));
    v21 = v20 + lstrlenA(&String[v20]) + 1;
    wsprintfA(&String[v21], "SurvivalRecordNormal = %d", *(_DWORD*)(thisx + 11388));
    v22 = v21 + lstrlenA(&String[v21]) + 1;
    wsprintfA(&String[v22], "SurvivalRecordHard = %d", *(_DWORD*)(thisx + 11392));
    v23 = v22 + lstrlenA(&String[v22]) + 1;
    wsprintfA(&String[v23], "SurvivalRecordVeryHard = %d", *(_DWORD*)(thisx + 11396));
    lstrlenA(&String[v23]);
    WritePrivateProfileSectionA(::AppName, String, lpFileName);
    memset(String, 0, sizeof(String));
    wsprintfA(String, "GameNum = %d", *(unsigned __int8*)(thisx + 2477));
    v24 = lstrlenA(String) + 1;
    wsprintfA(&String[v24], "IsTag = %d", *(_DWORD*)(thisx + 2368));
    v25 = v24 + lstrlenA(&String[v24]) + 1;
    wsprintfA(&String[v25], "PlayerNum = %d", *(unsigned __int8*)(thisx + 2382));
    v26 = v25 + lstrlenA(&String[v25]) + 1;
    wsprintfA(&String[v26], "IsUseItem = %d", *(unsigned __int8*)(thisx + 2451));
    v27 = v26 + lstrlenA(&String[v26]) + 1;
    wsprintfA(&String[v27], "WeaponNum = %d", *(unsigned __int8*)(thisx + 2402));
    v28 = v27 + lstrlenA(&String[v27]) + 1;
    wsprintfA(&String[v28], "ShowPoint = %d", *(_DWORD*)(thisx + 2372));
    v29 = v28 + lstrlenA(&String[v28]) + 1;
    wsprintfA(&String[v29], "GroundDamage = %d", *(unsigned __int8*)(thisx + 2471));
    v30 = v29 + lstrlenA(&String[v29]) + 1;
    wsprintfA(&String[v30], "BlackHoleType = %d", *(unsigned __int8*)(thisx + 2472));
    v31 = v30 + lstrlenA(&String[v30]) + 1;
    wsprintfA(&String[v31], "UseCombineMove = %d", *(unsigned __int8*)(thisx + 2448));
    v32 = v31 + lstrlenA(&String[v31]) + 1;
    wsprintfA(&String[v32], "HitSameTeam = %d", *(unsigned __int8*)(thisx + 2452));
    lstrlenA(&String[v32]);
    WritePrivateProfileSectionA(aKkconfig, String, lpFileName);
    memset(String, 0, sizeof(String));
    wsprintfA(String, "FullScreen = %d", (unsigned __int8)byte_4B99E9);
    v33 = lstrlenA(String) + 1;
    wsprintfA(&String[v33], "BackGroundRun = %d", (unsigned __int8)byte_4B99E6);
    v34 = v33 + lstrlenA(&String[v33]) + 1;
    wsprintfA(&String[v34], "VsyncWait = %d", (unsigned __int8)byte_4B99E8);
    v35 = v34 + lstrlenA(&String[v34]) + 1;
    wsprintfA(&String[v35], "Zoom = %d", (unsigned __int8)byte_4B99E7);
    String[v35 + 1 + lstrlenA(&String[v35])] = 0;
    if (!WritePrivateProfileSectionA(aDirectdrawconf, String, lpFileName))
        MessageBoxA(0, aDirectdrawconf_4, aError_7, 0);
    memset(String, 0, sizeof(String));
    v36 = 0;
    wsprintfA(AppName, aInitdevice);
    for (i = 0; i < 8; ++i)
    {
        v2 = sub_4768D5((_DWORD*)(char*)&byte_4B9410 + 108 * i);
        wsprintfA(&String[v36], "%dP = %d", i + 1, v2 - 1);
        v36 += lstrlenA(&String[v36]) + 1;
        String[v36] = 0;
    }
    if (!WritePrivateProfileSectionA(AppName, String, lpFileName))
        MessageBoxA(0, &byte_4B0FC0, aError_8, 0);
    v37 = 0;
    wsprintfA(AppName, aWeaponrate);
    for (i = 0; i < 14; ++i)
    {
        wsprintfA(&String[v37], "%02d = %d", i, *(unsigned __int16*)(thisx + 2 * i + 48));
        v37 += lstrlenA(&String[v37]) + 1;
        String[v37] = 0;
    }
    result = WritePrivateProfileSectionA(AppName, String, lpFileName);
    if (!result)
        result = MessageBoxA(0, &byte_4B0FFC, aError_9, 0);
    for (i = 0; i < 8; ++i)
    {
        wsprintfA(AppName, "JoyStickAssign%dP", i + 1);
        wsprintfA(String, "Up = %d", *(char*)(thisx + 11 * i + 11176));
        v38 = lstrlenA(String) + 1;
        wsprintfA(&String[v38], "Down = %d", *(char*)(thisx + 11 * i + 11177));
        v39 = v38 + lstrlenA(&String[v38]) + 1;
        wsprintfA(&String[v39], "Left = %d", *(char*)(thisx + 11 * i + 11178));
        v40 = v39 + lstrlenA(&String[v39]) + 1;
        wsprintfA(&String[v40], "Right = %d", *(char*)(thisx + 11 * i + 11179));
        v41 = v40 + lstrlenA(&String[v40]) + 1;
        for (j = 4; j < 9; ++j)
        {
            wsprintfA(&String[v41], "Trigger%d = %d", j - 3, *(char*)(thisx + 11 * i + j + 11176));
            v41 += lstrlenA(&String[v41]) + 1;
        }
        wsprintfA(&String[v41], "Select = %d", *(char*)(thisx + 11 * i + 11185));
        v42 = v41 + lstrlenA(&String[v41]) + 1;
        wsprintfA(&String[v42], "Start = %d", *(char*)(thisx + 11 * i + 11186));
        String[v42 + 1 + lstrlenA(&String[v42])] = 0;
        if (!WritePrivateProfileSectionA(AppName, String, lpFileName))
            MessageBoxA(0, &byte_4B1088, aError_10, 0);
        wsprintfA(AppName, "KeyBoardAssign%dP", i + 1);
        v43 = 0;
        memset(String, 0, sizeof(String));
        for (k = 0; k < 11; ++k)
        {
            if (k)
            {
                switch (k)
                {
                case 1:
                    wsprintfA(&String[v43], "Down = %3d", *(unsigned __int8*)(thisx + 11 * i + 1 + 11264));
                    break;
                case 2:
                    wsprintfA(&String[v43], "Left = %3d", *(unsigned __int8*)(thisx + 11 * i + 2 + 11264));
                    break;
                case 3:
                    wsprintfA(&String[v43], "Right = %3d", *(unsigned __int8*)(thisx + 11 * i + 3 + 11264));
                    break;
                case 9:
                    wsprintfA(&String[v43], "Select = %3d", *(unsigned __int8*)(thisx + 11 * i + 9 + 11264));
                    break;
                case 10:
                    wsprintfA(&String[v43], "Start = %3d", *(unsigned __int8*)(thisx + 11 * i + 10 + 11264));
                    break;
                default:
                    wsprintfA(&String[v43], "Trigger%d = %3d", k - 3, *(unsigned __int8*)(thisx + 11 * i + k + 11264));
                    break;
                }
            }
            else
            {
                wsprintfA(&String[v43], "Up = %3d", *(unsigned __int8*)(thisx + 11 * i + 11264));
            }
            v43 += lstrlenA(&String[v43]) + 1;
        }
        String[v43] = 0;
        result = WritePrivateProfileSectionA(AppName, String, lpFileName);
    }
    return result;
}

