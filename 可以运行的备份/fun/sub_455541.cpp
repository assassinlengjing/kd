#include "sub.h" 
int sub_455541(int thisx, char a2)
{
    int result; // eax
    int i; // [esp+10h] [ebp-4h]

    sub_45566E(thisx);
    *(_BYTE*)(thisx + 11364) = a2;
    *(_DWORD*)(thisx + 11368) = (_DWORD)operator new(4 * *(unsigned __int8*)(thisx + 11364));
    memset(*(void**)(thisx + 11368), 0, 4 * *(unsigned __int8*)(thisx + 11364));
    *(_BYTE*)(thisx + 11352) = a2 + 24;
    result = (int)operator new(*(unsigned __int8*)(thisx + 11352));
    *(_DWORD*)(thisx + 11356) = result;
    if (*(_DWORD*)(thisx + 11356))
    {
        *(_DWORD*)(thisx + 11360) = (_DWORD)operator new(4 * *(unsigned __int8*)(thisx + 11352));
        result = thisx;
        if (*(_DWORD*)(thisx + 11360))
        {
            for (i = 0; ; ++i)
            {
                result = *(unsigned __int8*)(thisx + 11352);
                if (i >= result)
                    break;
                *(_BYTE*)(*(_DWORD*)(thisx + 11356) + i) = 0;
                *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * i) = 0;
            }
        }
    }
    return result;
}

