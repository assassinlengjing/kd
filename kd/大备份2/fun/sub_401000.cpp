#include "sub.h"


_BYTE* sub_401000(_BYTE* thisx)
{
    sub_47FC70(thisx);
    *(_DWORD*)thisx = (_DWORD)ida_chars[abs(0x4AC230 - 0x4AC230)];//指针指向的内容等于另一个指针的地址，不是指针指向的内容等于另一个指针指向的内容,用(_DWORD)off_4AC230就会把该地址的地址给它了，要知道强制转换类型但是数值是不会变的
    sub_480737((_DWORD*)thisx, 6);
    sub_47FEB2(*((_DWORD*)thisx + 3), (LPCSTR)&byte_4B0060, &unk_4B0050, 1);
    sub_47FEB2(*((_DWORD*)thisx + 3) + 32, (LPCSTR)&byte_4B0088, &unk_4B0078, 0);
    sub_47FEB2(*((_DWORD*)thisx + 3) + 64, (LPCSTR)&byte_4B00B8, &unk_4B00A8, 1);
    sub_47FE72((_DWORD*)(*((_DWORD*)thisx + 3) + 96), (LPCSTR)&byte_4B00D0, 1, 0, 8, 4);
    sub_47FEB2(*((_DWORD*)thisx + 3) + 128, (LPCSTR)&unk_4B00E8, &unk_4B00DC, 1);
    sub_47FEB2(*((_DWORD*)thisx + 3) + 160, (LPCSTR)&unk_4B0104, &unk_4B00F8, 0);
    thisx[4] = 8;
    thisx[5] = 9;
    thisx[6] = 23;
    thisx[7] = 10;
    thisx[29] = 19;
    return thisx;
}