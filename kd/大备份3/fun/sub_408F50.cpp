#include "sub.h" 
void sub_408F50(int thisx, double a2, double a3, double a4, int a5)
{
    if (*(_DWORD*)(thisx + 432) == *(_DWORD*)(thisx + 428))
    {
        if (!*(_BYTE*)(thisx + 474))
        {
            *(_DWORD*)(thisx + 284) = 0;
            ++* (_DWORD*)(thisx + 444);
            sub_4097FE(thisx, a2, a3, a4);
            while (*(_DWORD*)(thisx + 432) != *(_DWORD*)(thisx + 428))
            {
                sub_409273(thisx, *(_DWORD*)(thisx + 432));
                if (a5)
                {
                    if (*(_DWORD*)(thisx + 428) == 69 || *(_DWORD*)(thisx + 428) == 70)
                        break;
                }
                *(_DWORD*)(thisx + 444) = 1;
                sub_4097FE(thisx, a2, a3, a4);
            }
        }
    }
    else
    {
        sub_409273(thisx, *(_DWORD*)(thisx + 432));
        if (!a5 || *(_DWORD*)(thisx + 428) != 69 && *(_DWORD*)(thisx + 428) != 70)
        {
            *(_DWORD*)(thisx + 444) = 1;
            sub_4097FE(thisx, a2, a3, a4);
            if (*(_DWORD*)(thisx + 428) != 3 && *(char*)(thisx + 608) > 0)
                *(_BYTE*)(thisx + 608) = 0;
        }
    }
}

