#include "sub.h" 
void sub_4623AC(int thisx, int a2, int a3)
{
    if (a2 >= 0 && a2 < 8)
    {
        if (a3)
        {
            switch (a3)
            {
            case 1:
                dword_4B9AEC[a2] = (unsigned __int16)sub_475850((short*)thisx + 11892);
                break;
            case 2:
            case 3:
                dword_4B9AEC[a2] = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 76 * (a3 - 2) + 11816));
                break;
            case 4:
                dword_4B9AEC[a2] = (unsigned __int16)sub_475850((short*)thisx + 11816);
                break;
            case 5:
                dword_4B9AEC[a2] = *(unsigned __int8*)(thisx + 11691);
                break;
            case 6:
                dword_4B9AEC[a2] = (unsigned __int8)sub_425E70((_BYTE*)(thisx + 3852));
                break;
            }
        }
        else
        {
            dword_4B9AEC[a2] = 100 * *(unsigned __int16*)(thisx + 11692) / (4 * *(unsigned __int8*)(thisx + 11690));
        }
    }
}

