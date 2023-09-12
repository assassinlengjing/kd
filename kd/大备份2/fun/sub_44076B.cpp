#include "sub.h" 
int sub_44076B(int thisx, int a2)
{
    int v3; // eax
    int Size; // [esp+4h] [ebp-44h]
    int v6; // [esp+8h] [ebp-40h]
    int v7; // [esp+10h] [ebp-38h] BYREF
    char v8[4]; // [esp+14h] [ebp-34h] BYREF
    int v9; // [esp+18h] [ebp-30h]
    void* v10; // [esp+1Ch] [ebp-2Ch] BYREF
    void* v11; // [esp+20h] [ebp-28h]
    void* v12; // [esp+24h] [ebp-24h] BYREF
    int i; // [esp+28h] [ebp-20h]
    int v14; // [esp+2Ch] [ebp-1Ch]
    int v15; // [esp+30h] [ebp-18h] BYREF
    int v16; // [esp+34h] [ebp-14h] BYREF
    int v17; // [esp+38h] [ebp-10h] BYREF
    int v18; // [esp+3Ch] [ebp-Ch] BYREF
    int v19; // [esp+40h] [ebp-8h]

    v12 = 0;
    v10 = 0;
    v15 = 0;
    v16 = 0;
    (*(void(__stdcall**)(_DWORD, int*, char*))(**(_DWORD**)(thisx + 196) + 16))(*(_DWORD*)(thisx + 196), &v7, v8);
    if (*(int*)(thisx + 176) < 0)
        goto LABEL_6;
    v6 = v7 - *(_DWORD*)(thisx + 156);
    if (v6 < 0)
        v6 += *(_DWORD*)(thisx + 260);
    *(_DWORD*)(thisx + 176) -= v6;
    if (*(int*)(thisx + 176) > 0)
    {
    LABEL_6:
        *(_DWORD*)(thisx + 156) = v7;
        v14 = v7;
        if (a2 == 1)
        {
            v9 = 0;
            v19 = *(_DWORD*)(thisx + 260);
        }
        else
        {
            v9 = *(_DWORD*)(thisx + 180);
            v19 = v14 - *(_DWORD*)(thisx + 180);
            if (v19 < 0)
                v19 += *(_DWORD*)(thisx + 260);
        }
        if ((*(int(__stdcall**)(_DWORD, int, int, void**, int*, void**, int*, _DWORD))(**(_DWORD**)(thisx + 196) + 44))(
            *(_DWORD*)(thisx + 196),
            v9,
            v19,
            &v12,
            &v15,
            &v10,
            &v16,
            0))
        {
            return 0;
        }
        else
        {
            *(_DWORD*)(thisx + 180) = v7;
            for (i = 0; i < 2; ++i)
            {
                if (i)
                {
                    Size = v16;
                    v11 = v10;
                }
                else
                {
                    Size = v15;
                    v11 = v12;
                }
                while (Size)
                {
                    if (*(_DWORD*)(thisx + 176) == -1)
                    {
                        sub_4900C4(*(HMMIO*)(thisx + 200), Size, (int)v11, thisx + 212, (int)&v17);
                        Size -= v17;
                        v11 = (char*)v11 + v17;
                    }
                    else
                    {
                        v3 = -(*(_WORD*)(*(_DWORD*)(thisx + 268) + 14) != 8);
                        LOBYTE(v3) = v3 & 0x80;
                        memset(v11, v3 + 128, Size);
                        Size = 0;
                    }
                    if (!*(_DWORD*)(thisx + 216))
                    {
                        if (*(_DWORD*)(thisx + 168))
                        {
                            sub_48FF86(thisx + 200, (LPMMCKINFO)(thisx + 212), (MMCKINFO*)(thisx + 232));
                            sub_48FFDC(*(HMMIO*)(thisx + 200), *(_DWORD*)(thisx + 184), thisx + 212, (int)&v18);
                        }
                        else if (*(_DWORD*)(thisx + 176) == -1)
                        {
                            *(_DWORD*)(thisx + 176) = *(_DWORD*)(thisx + 260);
                        }
                    }
                }
            }
            (*(void(__stdcall**)(_DWORD, void*, int, void*, int))(**(_DWORD**)(thisx + 196) + 76))(
                *(_DWORD*)(thisx + 196),
                v12,
                v15,
                v10,
                v16);
            return 1;
        }
    }
    else
    {
        (*(void(__stdcall**)(_DWORD))(**(_DWORD**)(thisx + 196) + 72))(*(_DWORD*)(thisx + 196));
        *(_DWORD*)(thisx + 164) = 0;
        return 1;
    }
}

