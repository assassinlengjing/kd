#include "sub.h" 
int(***  sub_4869CF(int thisx))(_DWORD, int)
{
    int( * **result)(_DWORD, int); // eax
    char* v3; // [esp+1Ch] [ebp-10h]

    if (*(_DWORD*)(thisx + 328))
        (***(void(****)(_DWORD, int))(thisx + 328))(*(_DWORD*)(thisx + 328), 3);
    *(_DWORD*)(thisx + 328) = 0;
    *(_DWORD*)(thisx + 308) = 0;
    if (unk_4CA1D8)
        operator delete((void*)unk_4CA1D8);
    unk_4CA1D8 = 0;
    unk_4CA1D4 = 0;
    if (*(_DWORD*)(thisx + 332))
    {
        v3 = *(char**)(thisx + 332);
        if (v3)
            sub_489D60(v3, 3);
    }
    *(_DWORD*)(thisx + 332) = 0;
    result = (int(***)(_DWORD, int))thisx;
    *(_DWORD*)(thisx + 336) = 0;
    if (*(_DWORD*)(thisx + 348))
    {
        result = *(int(****)(_DWORD, int))(thisx + 348);
        if (result)
            result = (int(***)(_DWORD, int))(**result)((int)result, 3);
    }
    *(_DWORD*)(thisx + 348) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    return result;
}