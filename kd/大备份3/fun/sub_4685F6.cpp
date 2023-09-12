#include "sub.h" 
int sub_4685F6(_DWORD* thisx)
{
    if (thisx[26] == 11 || thisx[26] == 10 || thisx[26] == 12)
        return sub_4685D3(thisx, (wchar_t*)&unk_4B342C, 120);
    unk_4B9978 = unk_4B9978 == 0;
    if (unk_4B9978)
        return sub_4685D3(thisx, (wchar_t*)&unk_4B33D4, 120);
    else
        return sub_4685D3(thisx, (wchar_t*)&unk_4B3400, 120);
}

