#include "sub.h" 
int sub_41D61F(int thisx)
{
    int v3; // [esp+8h] [ebp-4h]

    v3 = *(unsigned __int16*)(thisx + 500);
    if (sub_425CD0((_DWORD*)&byte_4B9B10) == 3 && *(_DWORD*)(thisx + 164))
    {
        v3 = sub_426250((_DWORD*)&byte_4B9B10) * v3 / 200;
        if (v3)
        {
            if (v3 > 255)
                return 255;
        }
        else
        {
            return 1;
        }
    }
    return v3;
}

