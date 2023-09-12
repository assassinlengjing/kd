#include "sub.h" 
int sub_485BCA(int thisx, _DWORD* a2)
{
    int v4; // [esp+10h] [ebp-108h]
    int v5; // [esp+14h] [ebp-104h]
    char String[256]; // [esp+18h] [ebp-100h] BYREF

    if (!a2)
        return 0;
    v5 = 0;
    v4 = 0;
    while (1)
    {
        if (!sub_482D44(a2, String))
            return 0;
        if (String[0] == 110)
            return 1;
        switch (v5)
        {
        case 0:
            *(_DWORD*)(thisx + 4) = atoi(String);
            break;
        case 1:
            *(_WORD*)(thisx + 12) = atoi(String);
            if (*(_WORD*)(thisx + 12))
            {
                *(_DWORD*)(thisx + 16) = (_DWORD)operator new(*(unsigned __int16*)(thisx + 12));
                *(_DWORD*)(thisx + 20) = (_DWORD)operator new(4 * *(unsigned __int16*)(thisx + 12));
            }
            break;
        case 2:
            *(_BYTE*)(*(_DWORD*)(thisx + 16) + v4) = atoi(String);
            break;
        case 3:
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * v4 + 2) = atoi(String);
            break;
        case 4:
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * v4 + 1) = atoi(String);
            break;
        case 5:
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * v4) = atoi(String);
            break;
        default:
            break;
        }
        if (++v5 == 6)
        {
            v5 = 2;
            if (++v4 >= *(unsigned __int16*)(thisx + 12))
            {
                sub_482FAA(a2);
                return 1;
            }
        }
    }
}
