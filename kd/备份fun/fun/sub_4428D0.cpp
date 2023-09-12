#include "sub.h" 
char* sub_4428D0(char* thisx)
{
    int v1; // edx
    char v4[11]; // [esp+4h] [ebp-2Ch] BYREF
    char Src[11]; // [esp+10h] [ebp-20h] BYREF
    char j; // [esp+1Ch] [ebp-14h]
    int i; // [esp+20h] [ebp-10h]
    int v8; // [esp+2Ch] [ebp-4h]

    sub_486060((_DWORD*)thisx + 128);
    v8 = 17;
    sub_47F190((_DWORD*)thisx + 736);
    sub_48E870((_DWORD*)thisx + 1300);
    eh_vector_constructor_iterator(
        thisx + 2628,
        0x264u,
        8,
        sub_40211F,
        (void(*)(void*))Concurrency::details::VirtualProcessorRoot::_VirtualProcessorRoot);
        eh_vector_constructor_iterator(thisx + 7524, 0xC4u, 8, sub_490B80, sub_490BC8);
            eh_vector_constructor_iterator(thisx + 9096, 0x10u, 32, sub_43F130, sub_43F164);
            eh_vector_constructor_iterator(thisx + 9608, 0x24u, 32, sub_441930, sub_44196C);
            eh_vector_constructor_iterator(thisx + 10760, 0x28u, 8, sub_47EFC0, sub_47EFDE);
            eh_vector_constructor_iterator(
            thisx + 11080,
            0x18u,
            4,
            NULL,//(void(*)(void*))DNameNode::new_DNameNode,
            sub_43EED1);
            sub_463E60((_DWORD)thisx + 11436);
            sub_402080((int)(thisx + 11816), 76, 2, (void(*)(int))sub_463EF0);
            sub_483390((_DWORD*)thisx + 13400);
            eh_vector_constructor_iterator(thisx + 15644, 0x24u, 4, sub_47FC70, sub_47FCCF);
                sub_48E210((_DWORD*)thisx + 15788);
            sub_4851A0(thisx + 15824);
            sub_48F050(thisx + 15860);
            sub_48E990(thisx + 15896);
            sub_401000(thisx + 15956);
            sub_485750(thisx + 15992);
            sub_480BC0((_DWORD*)thisx + 16048);
            sub_480F30((_DWORD*)thisx + 16084);
            *(_DWORD*)thisx = off_4AC2DC;
            *((_DWORD*)thisx + 26) = 3;
            *((_DWORD*)thisx + 622) = 100;
            thisx[2496] = 1;
            *((_DWORD*)thisx + 2273) = 0;
            *((_DWORD*)thisx + 628) = 0;
            thisx[2516] = 0;
            byte_4B9985 = 4;
            byte_4B9986 = 1;
            byte_4B9987 = 3;
            byte_4B99CD = 0;
            thisx[79] = 1;
            thisx[80] = 0;
            thisx[76] = 1;
            thisx[30] = 4;
            thisx[98] = 0;
            thisx[99] = 1;
            thisx[100] = 0;
            *((_DWORD*)thisx + 3349) = 0;
            thisx[11352] = 0;
            *((_DWORD*)thisx + 2839) = 0;
            *((_DWORD*)thisx + 2840) = 0;
            thisx[11364] = 0;
            *((_DWORD*)thisx + 2842) = 0;
            *((_DWORD*)thisx + 3276) = -1;
            *((_DWORD*)thisx + 3277) = 0;
            *((_DWORD*)thisx + 3278) = 0;
            *((_DWORD*)thisx + 3279) = 0;
            *((_DWORD*)thisx + 3280) = 0;
            memset(thisx + 16140, 0, 0x104u);
            thisx[11420] = 0;
            *((_DWORD*)thisx + 2856) = 0;
            thisx[11432] = 0;
            thisx[13124] = 0;
            *((_DWORD*)thisx + 3348) = 0;
            *((_DWORD*)thisx + 3907) = 0;
            *((_DWORD*)thisx + 3908) = 0;
            *((_DWORD*)thisx + 3909) = 0;
            thisx[11690] = 1;
            for (i = 0; i < 8; ++i)
            {
                for (j = 0; j < 11; ++j)
                {
                    if (j < 4)
                        v1 = -(j + 1);
                    else
                        LOBYTE(v1) = j - 4;
                    thisx[11 * i + 11176 + j] = v1;
                }
                if (i % 2)
                {
                    memcpy(v4, "&(%'IOPKL89", sizeof(v4));
                    memcpy(&thisx[11 * i + 11264], v4, 0xBu);
                }
                else
                {
                    memcpy(Src, "YBGJASDZXQW", sizeof(Src));
                    memcpy(&thisx[11 * i + 11264], Src, 0xBu);
                }
            }
            for (i = 0; i < 5; ++i)
                *(_DWORD*)&thisx[4 * i + 11380] = 0;
            for (i = 0; i < 8; ++i)
            {
                byte_4B9988[i] = i;
                thisx[i + 2620] = 0;
            }
            for (i = 0; i < 14; ++i)
                *(_WORD*)&thisx[2 * i + 48] = 10;
            *((_DWORD*)thisx + 4101) = 0;
            return thisx;
}

