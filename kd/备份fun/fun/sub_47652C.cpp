#include "sub.h" 
void* sub_47652C(_DWORD* thisx, signed int a2)
{
    void* result; // eax
    char v4[11]; // [esp+4h] [ebp-1D0h] BYREF
    char Src[11]; // [esp+10h] [ebp-1C4h] BYREF
    UINT v6; // [esp+1Ch] [ebp-1B8h]
    UINT v7; // [esp+20h] [ebp-1B4h]
    struct tagJOYCAPSA pjc; // [esp+24h] [ebp-1B0h] BYREF
    BOOL v9; // [esp+1B8h] [ebp-1Ch]
    struct joyinfo_tag pji; // [esp+1BCh] [ebp-18h] BYREF
    UINT uJoyID; // [esp+1D0h] [ebp-4h]

    memset(thisx + 6, 0, 0x34u);
    thisx[6] = 52;
    thisx[7] = 255;
    v9 = 0;
    if (!joyGetNumDevs())
        v9 = 0;
    if (a2 < 0)
    {
        uJoyID = -(a2 + 1);
        v9 = 0;
    }
    else
    {
        uJoyID = a2;
        v9 = joyGetPos(a2, &pji) == 0;
    }
    if (v9)
    {
        thisx[1] = uJoyID;
        *thisx = 1;
        joyGetDevCapsA(thisx[1], &pjc, 0x194u);
        v6 = (pjc.wXmax + pjc.wXmin) >> 1;
        v7 = (pjc.wYmax + pjc.wYmin) >> 1;
        thisx[2] = ((unsigned __int16)v6 + pjc.wXmin) >> 1;
        thisx[4] = ((unsigned __int16)v6 + pjc.wXmax) >> 1;
        thisx[3] = ((unsigned __int16)v7 + pjc.wYmin) >> 1;
        thisx[5] = ((unsigned __int16)v7 + pjc.wYmax) >> 1;
    }
    else
    {
        thisx[1] = uJoyID;
        *thisx = 0;
        thisx[5] = 1;
        thisx[3] = 1;
        thisx[4] = 1;
        thisx[2] = 1;
    }
    if (thisx[1] % 2u)
    {
        result = (void*)(thisx[1] / 2u);
        if (thisx[1] % 2u == 1)
        {
            memcpy(v4, "&(%'IOP890", 10);
            v4[10] = 16;
            return memcpy(thisx + 23, v4, 0xBu);
        }
    }
    else
    {
        Src[0] = 89;
        Src[1] = 66;
        Src[2] = 71;
        Src[3] = 74;
        Src[4] = 65;
        Src[5] = 83;
        Src[6] = 68;
        Src[7] = 81;
        Src[8] = 87;
        Src[9] = 69;
        Src[10] = 9;
        return memcpy(thisx + 23, Src, 0xBu);
    }
    return result;
}
