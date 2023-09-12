#include "sub.h" 
void sub_47494F(int thisx, int a2, int a3)
{
    if (a2)
    {
        sub_451EB5((_BYTE*)thisx, 1, 0);
        (*(void(**)(int))(*(_DWORD*)(thisx + 15644) + 12))(thisx + 15644);
        if (*(_DWORD*)(thisx + 15640))
            (*(void(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 12))(*(_DWORD*)(thisx + 15640));
    }
    if (a3)
    {
        sub_451EB5((_BYTE*)thisx, 0, 1);
        if (*(_DWORD*)(thisx + 15640))
            *(_DWORD*)(thisx + 2528) = unknown_libname_13(*(_DWORD**)(thisx + 15640));
        if (*(_DWORD*)(thisx + 2528))
        {
            switch (*(_DWORD*)(thisx + 2528))
            {
            case 1:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B21F0, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B222A, 0, dword_4B9248);
                break;
            case 2:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B226A, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B22AE, 0, dword_4B9248);
                break;
            case 3:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2302, 0, dword_4B9248);
                break;
            case 4:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2372, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B23AE, 0, dword_4B9248);
                break;
            case 5:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2406, 0, dword_4B9248);
                break;
            case 6:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2762, 0, dword_4B9248);
                break;
            case 7:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2A16, 0, dword_4B9248);
                break;
            case 8:
                sub_47B91A(16, 208, &byte_4B2E8C, 0, dword_4B9248);
                break;
            }
        }
        else
        {
            sub_47B91A(16, 208, &byte_4B1F78, 0, dword_4B9248);
        }
    }
}

