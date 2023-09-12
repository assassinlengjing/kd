#include "sub.h" 
int sub_47F6B3(int thisx)
{
    int v3; // [esp+4h] [ebp-10Ch]
    int v4; // [esp+8h] [ebp-108h]
    CHAR String1[256]; // [esp+Ch] [ebp-104h] BYREF
    int v6; // [esp+10Ch] [ebp-4h]

    if ((int)++ * (_DWORD*)(thisx + 260) >= 256 || *(_DWORD*)(thisx + 260) >= lstrlenA((LPCSTR)(thisx + 4)))
        return -1;
    if (*(_BYTE*)(thisx + *(_DWORD*)(thisx + 260) + 4) != 91)
        return -1;
    ++* (_DWORD*)(thisx + 260);
    v3 = 0;
    if (*(_BYTE*)(thisx + *(_DWORD*)(thisx + 260) + 4) == 118 || *(_BYTE*)(thisx + *(_DWORD*)(thisx + 260) + 4) == 86)
    {
        ++* (_DWORD*)(thisx + 260);
        v3 = 1;
    }
    if (*(int*)(thisx + 260) >= 256 || *(_DWORD*)(thisx + 260) >= lstrlenA((LPCSTR)(thisx + 4)))
        return -1;
    if (*(_BYTE*)(thisx + *(_DWORD*)(thisx + 260) + 4) == 93)
        return 0;
    if (*(char*)(thisx + *(_DWORD*)(thisx + 260) + 4) < 48 || *(char*)(thisx + *(_DWORD*)(thisx + 260) + 4) > 57)
        return 0;
    v4 = *(_DWORD*)(thisx + 260);
    do
    {
        if ((int)++ * (_DWORD*)(thisx + 260) >= 256 || *(_DWORD*)(thisx + 260) >= lstrlenA((LPCSTR)(thisx + 4)))
            return -1;
    } while (*(_BYTE*)(thisx + *(_DWORD*)(thisx + 260) + 4) != 93);
    v6 = *(_DWORD*)(thisx + 260);
    lstrcpynA(String1, (LPCSTR)(thisx + v4 + 4), v6 - v4 + 1);
    if (v3)
        return dword_4B9AEC[atoi(String1)];
    else
        return atoi(String1);
}

