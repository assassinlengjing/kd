#include "sub.h" 
void sub_453B85(int thisx, int a2, int a3)
{
    BOOL v4; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    if (a2)
    {
        sub_451EB5((_BYTE*)thisx, 1, 0);
        v4 = *(_DWORD*)(thisx + 15640) != 0;
        for (i = 0; i < 4; ++i)
        {
            if (!unknown_libname_14((_DWORD*)(thisx + 36 * i + 15644)))
                (*(void(**)(int))(*(_DWORD*)(thisx + 36 * i + 15644) + 12))(thisx + 36 * i + 15644);
            if (*(_DWORD*)(thisx + 15640) == thisx + 36 * i + 15644)
                v4 = 0;
        }
        if (*(_BYTE*)(thisx + 2562) == 11)
            (*(void(**)(int))(*(_DWORD*)(thisx + 16048) + 12))(thisx + 16048);
        if (*(_BYTE*)(thisx + 2562) == 12)
        {
            (*(void(**)(int))(*(_DWORD*)(thisx + 16048) + 12))(thisx + 16048);
            (*(void(**)(int))(*(_DWORD*)(thisx + 16084) + 12))(thisx + 16084);
        }
        if (v4)
            (*(void(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 12))(*(_DWORD*)(thisx + 15640));
    }
    if (a3)
    {
        sub_451EB5((_BYTE*)thisx, 0, 1);
        if (*(_DWORD*)(thisx + 15640))
            *(_DWORD*)(thisx + 2528) = unknown_libname_13(*(_DWORD**)(thisx + 15640));
        if (*(_BYTE*)(thisx + 2562))
        {
            switch (*(_BYTE*)(thisx + 2562))
            {
            case 1:
                sub_47B91A(16, 208, (LPCSTR)dword_4ABB14, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)byte_4ABB3C, 0, dword_4B9248);
                break;
            case 2:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B2D5B, 0, dword_4B9248);
                break;
            case 3:
                if (*(_DWORD*)(thisx + 2528))
                {
                    if (*(_DWORD*)(thisx + 2528) == 1)
                    {
                        sub_47B91A(16, 208, (LPCSTR)dword_4ABBE4, 0, dword_4B9248);
                    }
                    else if (*(_DWORD*)(thisx + 2528) == 2)
                    {
                        sub_47B91A(16, 208, (LPCSTR)dword_4ABC68, 0, dword_4B9248);
                    }
                }
                else
                {
                    sub_47B91A(16, 208, (LPCSTR)word_4ABB7E, 0, dword_4B9248);
                    sub_47B91A(16, 224, (LPCSTR)dword_4ABBA8, 0, dword_4B9248);
                }
                break;
            case 4:
                sub_47B91A(16, 208, (LPCSTR)word_4ABC0A, 0, dword_4B9248);
                break;
            case 5:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B08F8, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B3438, 0, dword_4B9248);
                break;
            case 6:
                if (*(_DWORD*)(thisx + 2528))
                {
                    switch (*(_DWORD*)(thisx + 2528))
                    {
                    case 1:
                        sub_47B91A(16, 208, (LPCSTR)byte_4ABD41, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)&byte_4ABD73, 0, dword_4B9248);
                        break;
                    case 2:
                        sub_47B91A(16, 208, (LPCSTR)byte_4ABDB1, 0, dword_4B9248);
                        break;
                    case 3:
                        sub_47B91A(16, 208, (LPCSTR)byte_4ABDFD, 0, dword_4B9248);
                        break;
                    case 4:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4ABE5F, 0, dword_4B9248);
                        break;
                    case 5:
                        sub_47B91A(16, 208, (LPCSTR)dword_4ABEB8, 0, dword_4B9248);
                        break;
                    }
                }
                else
                {
                    sub_47B91A(16, 208, (LPCSTR)dword_4ABCD0, 0, dword_4B9248);
                }
                break;
            case 7:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B1EC4, 0, dword_4B9248);
                break;
            case 8:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B1F3E, 0, dword_4B9248);
                break;
            case 0xA:
                if (*(_DWORD*)(thisx + 2528))
                {
                    switch (*(_DWORD*)(thisx + 2528))
                    {
                    case 1:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AF95F, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)&byte_4AF993, 0, dword_4B9248);
                        break;
                    case 2:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AF9DC, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)byte_4AFA1A, 0, dword_4B9248);
                        break;
                    case 3:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFA2E, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)byte_4AFA74, 0, dword_4B9248);
                        break;
                    case 4:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFA91, 0, dword_4B9248);
                        break;
                    case 5:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFAE3, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)byte_4AFB0F, 0, dword_4B9248);
                        break;
                    case 6:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFB36, 0, dword_4B9248);
                        break;
                    case 7:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFB82, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)&byte_4AFBC4, 0, dword_4B9248);
                        break;
                    }
                }
                else
                {
                    sub_47B91A(16, 208, (LPCSTR)&byte_4AF917, 0, dword_4B9248);
                }
                break;
            case 0xB:
                if (*(_DWORD*)(thisx + 2528))
                {
                    switch (*(_DWORD*)(thisx + 2528))
                    {
                    case 1:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFC64, 0, dword_4B9248);
                        break;
                    case 2:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFCBA, 0, dword_4B9248);
                        break;
                    case 3:
                        sub_47B91A(16, 208, (LPCSTR)&byte_4AFD3D, 0, dword_4B9248);
                        sub_47B91A(16, 224, (LPCSTR)byte_4AFD6D, 0, dword_4B9248);
                        break;
                    }
                }
                else
                {
                    sub_47B91A(16, 208, (LPCSTR)&byte_4AFC32, 0, dword_4B9248);
                }
                break;
            }
        }
        else if (*(_DWORD*)(thisx + 2528))
        {
            switch (*(_DWORD*)(thisx + 2528))
            {
            case 1:
                sub_47B91A(16, 208, (LPCSTR)&byte_4AFC32, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B0BEC, 0, dword_4B9248);
                break;
            case 2:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B15D8, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B0BF0, 0, dword_4B9248);
                break;
            case 3:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B1616, 0, dword_4B9248);
                sub_47B91A(16, 224, (LPCSTR)&byte_4B1662, 0, dword_4B9248);
                break;
            case 4:
                sub_47B91A(16, 208, (LPCSTR)&byte_4B1698, 0, dword_4B9248);
                break;
            }
        }
        else
        {
            sub_47B91A(16, 208, (LPCSTR)&byte_4B0BA4, 0, dword_4B9248);
        }
    }
}

