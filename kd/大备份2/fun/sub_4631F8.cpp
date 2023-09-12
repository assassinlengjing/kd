#include "sub.h" 
int  sub_4631F8(unsigned __int8* thisx)
{
    char v2; // al
    char* v3; // eax
    int v5; // [esp+4h] [ebp-204h]
    int jj; // [esp+68h] [ebp-1A0h]
    int ii; // [esp+6Ch] [ebp-19Ch]
    int v8; // [esp+70h] [ebp-198h]
    int v9; // [esp+74h] [ebp-194h]
    int v10; // [esp+78h] [ebp-190h]
    int n; // [esp+80h] [ebp-188h]
    int v12; // [esp+84h] [ebp-184h]
    int v13; // [esp+88h] [ebp-180h]
    int v14; // [esp+8Ch] [ebp-17Ch]
    int v15; // [esp+90h] [ebp-178h]
    int k; // [esp+94h] [ebp-174h]
    int v17; // [esp+98h] [ebp-170h]
    int v18; // [esp+9Ch] [ebp-16Ch]
    int m; // [esp+A0h] [ebp-168h]
    int v20; // [esp+A4h] [ebp-164h]
    int v21; // [esp+A8h] [ebp-160h]
    int v22; // [esp+ACh] [ebp-15Ch]
    int v23; // [esp+B0h] [ebp-158h]
    int j; // [esp+B4h] [ebp-154h]
    int v25; // [esp+B8h] [ebp-150h]
    int v26[4]; // [esp+BCh] [ebp-14Ch] BYREF
    size_t Size; // [esp+CCh] [ebp-13Ch]
    int i; // [esp+D0h] [ebp-138h]
    int v29; // [esp+D4h] [ebp-134h]
    int v30; // [esp+D8h] [ebp-130h]
    _DWORD* v31; // [esp+DCh] [ebp-12Ch]
    _DWORD* v32; // [esp+E0h] [ebp-128h]
    int v33; // [esp+E4h] [ebp-124h]
    int v34; // [esp+E8h] [ebp-120h]
    CHAR String1[260]; // [esp+ECh] [ebp-11Ch] BYREF
    _BYTE* v36; // [esp+1F0h] [ebp-18h]
    int v37; // [esp+1F4h] [ebp-14h]
    int v38; // [esp+1F8h] [ebp-10h]
    int v39; // [esp+204h] [ebp-4h]

    sub_482BF0(v26);
    v39 = 0;
    if (sub_482C74((int)v26, aPairTxt))
    {
        v34 = word_4B99E4;
        Size = 0;
        LOBYTE(v38) = 0;
        while (sub_482D44(v26, String1))
        {
            if (lstrcmpiA(String1, aStart_2))
            {
                if (!lstrcmpiA(String1, aEnd))
                {
                    if ((unsigned __int8)v38 != 1 || !Size)
                        break;
                    sub_48314A(v26);
                    v32 = (_DWORD*)operator new(44 * Size);
                    if (v32)
                    {
                        for (i = 0; i < (int)(11 * Size); ++i)
                            v32[i] = -1;
                        v31 = (_DWORD*)operator new(4 * Size);
                        if (v31)
                        {
                            v36 = (char*)operator new(Size);
                            if (v36)
                            {
                                while (1)
                                {
                                    if (!sub_482D44(v26, String1))
                                        goto LABEL_25;
                                    if (!lstrcmpiA(String1, aStart_3))
                                        break;
                                    sub_482FAA(v26);
                                }
                                sub_482FAA(v26);
                                i = 0;
                            LABEL_30:
                                if (i < (int)Size)
                                {
                                    v31[i] = 0;
                                    v25 = 0;
                                    while (sub_482D44(v26, String1))
                                    {
                                        if (String1[0] == 110)
                                            goto LABEL_29;
                                        if (v25)
                                        {
                                            v32[11 * i - 1 + v25] = -1;
                                            if (lstrcmpiA(String1, &byte_4B3084) || v25 >= 3)
                                            {
                                                for (j = 0; j < (int)::Size; ++j)
                                                {
                                                    v3 = unknown_libname_18((char*)(36 * j + dword_4B92E0));
                                                    if (!lstrcmpiA(String1, v3))
                                                    {
                                                        v32[11 * i - 1 + v25] = j;
                                                        break;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                v32[11 * i - 1 + v25] = -2;
                                            }
                                            ++v25;
                                        }
                                        else
                                        {
                                            v2 = atoi(String1);
                                            v36[i] = v2;
                                            ++v25;
                                        }
                                        if (v25 == 12)
                                        {
                                            sub_482FAA(v26);
                                        LABEL_29:
                                            ++i;
                                            goto LABEL_30;
                                        }
                                    }
                                LABEL_25:
                                    operator delete(v32);
                                    operator delete(v31);
                                    operator delete(v36);
                                    v39 = -1;
                                    sub_482C2F(v26);
                                    return 0;
                                }
                                v29 = thisx[11688] - 1;
                                if ((int)Size < v29)
                                    v29 = Size;
                                v30 = Size;
                                v37 = (unsigned __int16)sub_475850((short*)thisx + 11816) - 1;
                                v33 = (unsigned __int16)sub_475850((short*)thisx + 11892) - 1;
                                for (i = 0; i < v29 && v30; ++i)
                                {
                                    v15 = rand() % v30 + 1;
                                    v20 = -1;
                                    for (k = 0; k < v15; ++k)
                                    {
                                        ++v20;
                                        while (v20 < (int)Size && v31[v20])
                                            ++v20;
                                    }
                                    v14 = 0;
                                    for (m = 0; m < 3; ++m)
                                    {
                                        v13 = v32[11 * v20 + m];
                                        *(&v21 + m) = 0;
                                        if (v13 == -1)
                                        {
                                            *(&v21 + m) = 1;
                                        }
                                        else if (v13 == -2)
                                        {
                                            v12 = 0;
                                            for (n = 3; n < 11; ++n)
                                            {
                                                if (!sub_4667C7((char*)thisx, v32[11 * v20 + n], i, v14))
                                                    ++v12;
                                            }
                                            if (v12)
                                            {
                                                v10 = rand() % v12;
                                                v8 = 0;
                                                while (v10 >= 0)
                                                {
                                                    v9 = v32[11 * v20 + 3 + v8];
                                                    if (!sub_4667C7((char*)thisx, v9, i, v14))
                                                        --v10;
                                                    ++v8;
                                                }
                                                v32[11 * v20 + m] = v9;
                                                v13 = v9;
                                            }
                                            else
                                            {
                                                *(&v21 + m) = 1;
                                            }
                                        }
                                        else if (sub_4667C7((char*)thisx, v13, i, v14))
                                        {
                                            *(&v21 + m) = 1;
                                        }
                                        if (!*(&v21 + m) && v13 >= 0 && v14 < 2)
                                            *(_WORD*)&thisx[4 * i + 11728 + 2 * v14++] = v13 + 2;
                                    }
                                    v17 = -1;
                                    v18 = -1;
                                    if (v21 || v22)
                                    {
                                        if (!v21 || v22 || v23)
                                        {
                                            if (!v21 && v22 && !v23)
                                            {
                                                v17 = v32[11 * v20];
                                                v18 = v32[11 * v20 + 2];
                                            }
                                        }
                                        else
                                        {
                                            v17 = v32[11 * v20 + 1];
                                            v18 = v32[11 * v20 + 2];
                                        }
                                    }
                                    else
                                    {
                                        for (ii = 0; ii < 2; ++ii)
                                            *(&v17 + ii) = v32[11 * v20 + ii];
                                    }
                                    v31[v20] = 1;
                                    --v30;
                                    if (v17 < 0 || v18 < 0)
                                    {
                                        --i;
                                    }
                                    else
                                    {
                                        for (jj = 0; jj < 2; ++jj)
                                            *(_WORD*)&thisx[4 * i + 11728 + 2 * jj] = *(&v17 + jj) + 2;
                                        if (v36[v20])
                                            thisx[i + 11789] = v36[v20] - 1;
                                        else
                                            thisx[i + 11789] = rand() % v34;
                                    }
                                }
                                operator delete(v32);
                                operator delete(v31);
                                operator delete(v36);
                                v5 = i;
                                v39 = -1;
                                sub_482C2F(v26);
                                return v5;
                            }
                            else
                            {
                                operator delete(v32);
                                operator delete(v31);
                                v39 = -1;
                                sub_482C2F(v26);
                                return -1;
                            }
                        }
                        else
                        {
                            operator delete(v32);
                            v39 = -1;
                            sub_482C2F(v26);
                            return -1;
                        }
                    }
                    else
                    {
                        v39 = -1;
                        sub_482C2F(v26);
                        return -1;
                    }
                }
                if ((unsigned __int8)v38 == 1)
                {
                    sub_482FAA(v26);
                    ++Size;
                }
            }
            else
            {
                sub_482FAA(v26);
                LOBYTE(v38) = 1;
            }
        }
    }
    v39 = -1;
    sub_482C2F(v26);
    return 0;
}

