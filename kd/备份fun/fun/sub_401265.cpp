#include "sub.h"
int __stdcall sub_401265(_DWORD** thisx, int a2)
{
    unsigned __int8* v4; // [esp+4h] [ebp-4h]

    sub_48070C((streambuf*)thisx, a2);
    v4 = (unsigned __int8*)unknown_libname_1((char*)byte_4B9B10);
    sub_480016(thisx[3], v4[75]);
    sub_480016(thisx[3] + 8, v4[76]);
    sub_480016(thisx[3] + 16, v4[72]);
    sub_480016(thisx[3] + 24, v4[26]);
    sub_480016(thisx[3] + 32, v4[95]);
    return sub_480016(thisx[3] + 40, v4[96]);
}