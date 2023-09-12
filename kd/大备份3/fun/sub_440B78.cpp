#include "sub.h" 
int sub_440B78(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 196))
    {
        while (*(_DWORD*)(thisx + 172))
            ;
        result = (*(int(__stdcall**)(_DWORD))(**(_DWORD**)(thisx + 196) + 72))(*(_DWORD*)(thisx + 196));
        *(_DWORD*)(thisx + 164) = 0;
    }
    return result;
}

