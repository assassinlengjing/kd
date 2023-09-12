#include "sub.h" 
int sub_45DC7E(int thisxx)
{
    unsigned __int8 v1; // al
    int v2; // ebx
    int v5; // [esp+8h] [ebp-114h]
    bool RuntimeOwnsLifetime; // [esp+Ch] [ebp-110h]
    signed int j; // [esp+10h] [ebp-10Ch]
    int i; // [esp+14h] [ebp-108h]
    int k; // [esp+14h] [ebp-108h]
    CHAR FileName[260]; // [esp+18h] [ebp-104h] BYREF

    *(_DWORD*)(thisxx + 104) = 19;
    *(_BYTE*)(thisxx + 2516) = 1;
    *(_DWORD*)(thisxx + 2528) = 0;
    *(_DWORD*)(thisxx + 2532) = 0;
    *(_BYTE*)(thisxx + 13101) = 0;
    *(_WORD*)(thisxx + 2564) = 0;
    *(_WORD*)(thisxx + 2566) = 1;
    *(_WORD*)(thisxx + 2568) = 1;
    *(_WORD*)(thisxx + 2570) = 0;
    if (*(_BYTE*)(thisxx + 11690) == 17 && *(unsigned __int8*)(thisxx + 13060) > 1u)
    {
        *(_WORD*)(thisxx + 2566) = 0;
        *(_DWORD*)(thisxx + 2528) = 1;
    }
    if (*(unsigned __int8*)(thisxx + 11690) >= 0x11u)
        *(_WORD*)(thisxx + 2568) = 0;
    if (!*(_BYTE*)(thisxx + 13100))
    {
        for (i = 0; i < dword_4B9368; ++i)
        {
            for (j = 0; j < (int)dword_4B93A0; ++j)
                *(_DWORD*)(*((_DWORD*)dword_4B9360 + i) + 4 * j) = 0;
        }
        for (k = 0; k < 2; ++k)
        {
            RuntimeOwnsLifetime = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisxx + 76 * k + 11816));
            if ((unsigned __int8)RuntimeOwnsLifetime >= 4u)
                RuntimeOwnsLifetime = 0;
            wsprintfA(FileName, "Graphic\\AnteroomBody%02d.bmp", RuntimeOwnsLifetime + 1);
            v1 = sub_426550((_BYTE*)(thisxx + 76 * k + 11816));
            v5 = sub_478523(FileName, 0, v1);
            if (!k)
                *(_DWORD*)(thisxx + 13104) = v5;
            v2 = (unsigned __int8)sub_426570((_BYTE*)(thisxx + 76 * k + 11816));
            *(_DWORD*)(*((_DWORD*)dword_4B9360 + v2) + 4 * (unsigned __int8)sub_426550((_BYTE*)(thisxx + 76 * k + 11816))) = 1;
        }
        sub_4680EF();
        sub_45FDE4((_DWORD*)thisxx, aDataAnteroomti);
        sub_45F998((_DWORD*)thisxx, aDataAnteroomcg);
        if (*(_BYTE*)(thisxx + 11808) || *(_BYTE*)(thisxx + 11809))
        {
            *(_BYTE*)(thisxx + 13100) = 4;
        }
        else if (*(unsigned __int8*)(thisxx + 13044) < 3u && *(unsigned __int8*)(thisxx + 11812) > 2u
            || *(_BYTE*)(thisxx + 13044) == 1)
        {
            *(_BYTE*)(thisxx + 13100) = rand() % 3 + 1;
        }
        else
        {
            *(_BYTE*)(thisxx + 13100) = rand() % 4 + 100;
        }
        if (*(_DWORD*)(thisxx + 112) != 20 && *(_DWORD*)(thisxx + 112) != 4)
        {
            if (*(_BYTE*)(thisxx + 11690) == 17)
            {
                if (*(_BYTE*)(thisxx + 13060) == 1)
                    *(_BYTE*)(thisxx + 13101) = 1;
                else
                    *(_BYTE*)(thisxx + 13101) = 2;
            }
            else if (*(unsigned __int8*)(thisxx + 11690) > 0x11u)
            {
                if (sub_425E70((_BYTE*)(thisxx + 3852)) == 1)
                {
                    *(_BYTE*)(thisxx + 13101) = 4;
                    *(_BYTE*)(thisxx + 11691) = 7;
                    *(_BYTE*)(thisxx + 11690) = 17;
                }
                else
                {
                    *(_BYTE*)(thisxx + 13101) = 3;
                }
            }
        }
        if (*(_BYTE*)(thisxx + 13101))
            *(_WORD*)(thisxx + 2564) = 1;
        else
            *(_WORD*)(thisxx + 2564) = 0;
    }
    *(_DWORD*)(thisxx + 2540) = 0;
    sub_45E15F(thisxx,-1);
    if (*(unsigned __int8*)(thisxx + 13044) >= 3u)
        return sub_456D33((const CHAR*)thisxx, aLoserWav, 1, 0);
    else
        return sub_456D33((const CHAR*)thisxx, aWinnerWav, 1, 0);
}

