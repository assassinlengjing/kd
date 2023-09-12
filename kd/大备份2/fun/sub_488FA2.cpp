#include "sub.h" 
_UnrealizedChore* sub_488FA2(
    void* thisx,
    unsigned __int8 a2,
    unsigned __int8 a3,
    int a4,
    int a5,
    int a6)
{
    Concurrency::details::_UnrealizedChore* result; // eax
    unsigned __int8 v8; // [esp+4h] [ebp-24h]
    Concurrency::details::_UnrealizedChore* v9; // [esp+8h] [ebp-20h]
    char v10; // [esp+Ch] [ebp-1Ch]
    char v11; // [esp+10h] [ebp-18h]
    char v12; // [esp+14h] [ebp-14h]
    int v13; // [esp+18h] [ebp-10h]
    __int16 v14; // [esp+1Ch] [ebp-Ch]
    __int16 v15; // [esp+24h] [ebp-4h]

    result = (Concurrency::details::_UnrealizedChore*)sub_4816F5((int)thisx + 4, a2, a3);
    v9 = result;
    if (result)
    {
        result = (Concurrency::details::_UnrealizedChore*)sub_482A1B((int)thisx + 4, a2, a3, 1);
        v15 = 0;
        v10 = 50;
        v12 = 100;
        v11 = 0;
        v8 = 1;
        v13 = 0;
        v14 = 0;
        if (a4 >= 0)
        {
            switch (a4)
            {
            case 2:
                LOBYTE(a4) = 0;
                v14 = 1;
                break;
            case 3:
                LOBYTE(a4) = 0;
                v14 = 2;
                break;
            case 4:
                LOBYTE(a4) = 0;
                v14 = 3;
                break;
            case 7:
            case 8:
                v15 = 30 * (a4 == 8) - 30 * (a4 == 7);
                LOBYTE(a4) = 0;
                break;
            case 9:
                LOBYTE(a4) = 0;
                v14 = 4;
                break;
            case 11:
            case 12:
                v15 = 30 * (a4 == 12) - 30 * (a4 == 11);
                v11 = 8;
                v8 = 2;
                v13 = 1;
                LOBYTE(a4) = 11;
                break;
            case 13:
                v10 = 90;
                v12 = 10;
                break;
            case 14:
                LOBYTE(a4) = 0;
                v14 = 5;
                break;
            case 15:
                LOBYTE(a4) = 0;
                v14 = 6;
                break;
            }
            sub_489F80((char*)v9, a4);
            sub_489FE0((short*)v9, v15);
            sub_48A000((short*)v9, 0);
            _SetRuntimeOwnsLifetime(v9, v10);
            _SetDetached(v9, v12);
            sub_48A020((char*)v9, v11);
            sub_482AE0((char*)v9, v8);
            sub_482B1C((char*)v9, v13);
            result = (Concurrency::details::_UnrealizedChore*)sub_489F40((short*)v9, v14);
        }
        if (a5 != -1)
            result = (Concurrency::details::_UnrealizedChore*)sub_489FA0((char*)v9, a5);
        if (a6 != -1)
            return (Concurrency::details::_UnrealizedChore*)sub_489FC0((char*)v9, a6);
    }
    return result;
}