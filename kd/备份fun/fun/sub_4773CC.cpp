#include "sub.h" 
BOOL __cdecl sub_4773CC(unsigned __int8 a1, unsigned __int8 a2)
{
    if (sub_446497((_DWORD*)byte_4B9B10, 8 * a1, 8 * a2) == 1020)
        return 0;
    return !sub_4744A9((_DWORD*)byte_4B9B10, a1, a2) && sub_4464F6((_DWORD*)byte_4B9B10, a1, a2) != 7;
}

