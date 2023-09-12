#include "sub.h" 
int sub_456617(int thisx)
{
    int result; // eax

    if (*(_BYTE*)(thisx + 11372))
    {
        switch (*(_BYTE*)(thisx + 11372))
        {
        case 1:
            *(_DWORD*)(thisx + 11400) = 8 * ((*(_DWORD*)(thisx + 11376) + 10) / 10);
            break;
        case 2:
            *(_DWORD*)(thisx + 11400) = 10 * ((*(_DWORD*)(thisx + 11376) + 10) / 10);
            break;
        case 3:
            *(_DWORD*)(thisx + 11400) = 12 * ((*(_DWORD*)(thisx + 11376) + 10) / 10);
            break;
        case 4:
            *(_DWORD*)(thisx + 11400) = 15 * ((*(_DWORD*)(thisx + 11376) + 10) / 10);
            break;
        }
    }
    else
    {
        *(_DWORD*)(thisx + 11400) = 5 * ((*(_DWORD*)(thisx + 11376) + 10) / 10);
    }
    result = thisx;
    if (*(int*)(thisx + 11400) <= 0)
        *(_DWORD*)(thisx + 11400) = 1;
    return result;
}

