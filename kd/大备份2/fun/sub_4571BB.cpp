#include "sub.h" 
void sub_4571BB(int thisx)
{
    int v1; // esi

    *(_BYTE*)(thisx + 2516) = 2;
    if (*(_DWORD*)(thisx + 108) != 2 && *(_DWORD*)(thisx + 104) == 1 && !*(_BYTE*)(thisx + 16140))
    {
        switch (*(_DWORD*)(thisx + 124))
        {
        case 1:
            *(_DWORD*)(thisx + 108) = 2;
            break;
        case 2:
            *(_DWORD*)(thisx + 108) = 17;
            break;
        case 3:
            ++ * (_BYTE*)(thisx + 11690);
            if (*(unsigned __int8*)(thisx + 11691) > 6u)
                sub_462869((_DWORD*)thisx);
            else
                sub_462BA9(thisx, 3);
            *(_DWORD*)(thisx + 108) = 11;
            break;
        case 4:
            *(_DWORD*)(thisx + 108) = 11;
            if (dword_4B9B08 == 1)
            {
                *(_BYTE*)(thisx + 11690) += 2;
                sub_462BA9(thisx, 4);
            }
            else if (unk_4B9AF8 < 0)
            {
                *(_DWORD*)(thisx + 108) = 1;
                *(_DWORD*)(thisx + 120) = 5;
            }
            else
            {
                ++* (_BYTE*)(thisx + 11690);
                sub_462BA9(thisx, 2);
            }
            break;
        case 5:
        case 7:
            if (*(unsigned __int8*)(thisx + 11806) != 255)
                ++* (_BYTE*)(thisx + 11806);
            *(_BYTE*)(thisx + 11690) = 0;
            v1 = (unsigned __int16)sub_4750D0((void*)(thisx + 11816));
            *(_WORD*)(thisx + 11814) = (v1 + (unsigned __int16)sub_4750D0((void*)(thisx + 11892)) / 2);
            *(_DWORD*)(thisx + 124) = 5;
            *(_DWORD*)(thisx + 112) = 1;
            *(_DWORD*)(thisx + 108) = 20;
            *(_BYTE*)(thisx + 2562) = 1;
            break;
        case 6:
            *(_DWORD*)(thisx + 108) = 1;
            *(_DWORD*)(thisx + 120) = 5;
            break;
        default:
            return;
        }
    }
}