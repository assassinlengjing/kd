#include "sub.h" 
void sub_4A1307(int thisx, HardwareAffinity* a2)
{
    int v2; // esi
    unsigned __int16 Group; // ax
    const void* v4; // eax
    size_t v5; // [esp-4h] [ebp-Ch]

    if (a2)
    {
        v2 = *(unsigned __int16*)(thisx + 4);
        if (v2 != GetGroup(a2))
        {
            sub_4A0A40(thisx);
            Group = GetGroup(a2);
            sub_4A0A7B(thisx, Group);
        }
        v5 = 2 * *(unsigned __int16*)(thisx + 4);
        v4 = (const void*)unknown_libname_30((_DWORD*)a2);
        memcpy(*(void**)thisx, v4, v5);
    }
}

