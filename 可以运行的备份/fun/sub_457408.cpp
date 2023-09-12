#include "sub.h" 
int __fastcall sub_457408(int a1)
{
    int result; // eax
    int v2; // eax
    int v3; // edx
    struct tagRECT rc; // [esp+4h] [ebp-14h] BYREF
    int v6; // [esp+14h] [ebp-4h]

    if (*(int*)(a1 + 11424) > 0)
        --* (_DWORD*)(a1 + 11424);
    LOBYTE(v6) = 0;
    if (*(int*)(a1 + 11428) > 0)
        LOBYTE(v6) = (*(_DWORD*)(a1 + 11424) << 6) / *(_DWORD*)(a1 + 11428);
    if (*(_BYTE*)(a1 + 11420) == 1)
    {
        *(_BYTE*)(a1 + 11432) = 64 - v6;
    }
    else if (*(_BYTE*)(a1 + 11420) == 2)
    {
        *(_BYTE*)(a1 + 11432) = v6;
    }
    if (!*(_DWORD*)(a1 + 11424))
        *(_BYTE*)(a1 + 11420) = 0;
    if (*(_BYTE*)(a1 + 11432) && *(unsigned __int8*)(a1 + 11432) < 0x40u)
    {
        SetRect(&rc, 0, 0, 320, 240);
        if (*(_BYTE*)(a1 + 11421))
            return sub_49EF70((int)byte_4BDC60, (_DWORD*)&rc, 0xFFu, 0xFFu, 0xFFu, *(_BYTE*)(a1 + 11432));
        else
            return sub_49EF70((int)byte_4BDC60, (_DWORD*)&rc, 0, 0, 0, *(_BYTE*)(a1 + 11432));
    }
    else
    {
        result = *(unsigned __int8*)(a1 + 11432);
        if (result == 64)
        {
            if (*(_BYTE*)(a1 + 11421))
            {
                result = a1;
                if (*(_BYTE*)(a1 + 11421) == 1)
                {
                    v2 = sub_49FFEC(255, 255, 255);
                    return (int)sub_49EDC1((int)byte_4BDC60, v3, 0, v2);
                }
            }
            else
            {
                return (int)sub_49EDC1((int)byte_4BDC60, *(unsigned __int8*)(a1 + 11421), 0, 0);
            }
        }
    }
    return result;
}