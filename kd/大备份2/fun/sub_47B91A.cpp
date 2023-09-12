#include "sub.h" 
int __cdecl sub_47B91A(int a1, int a2, LPCSTR lpString, int a4, int a5)
{
    int result; // eax
    int n; // [esp+0h] [ebp-6Ch]
    int j; // [esp+4h] [ebp-68h]
    int k; // [esp+4h] [ebp-68h]
    int m; // [esp+4h] [ebp-68h]
    int v10; // [esp+8h] [ebp-64h]
    int v11; // [esp+Ch] [ebp-60h]
    int i; // [esp+10h] [ebp-5Ch]
    CHAR String1; // [esp+14h] [ebp-58h] BYREF
    char v14; // [esp+15h] [ebp-57h]
    int v15; // [esp+18h] [ebp-54h]
    int v16; // [esp+1Ch] [ebp-50h]
    int v17[2]; // [esp+20h] [ebp-4Ch] BYREF
    int v18; // [esp+28h] [ebp-44h]
    struct tagRECT rc; // [esp+58h] [ebp-14h] BYREF
    int v20; // [esp+68h] [ebp-4h]

    sub_49C15E((int)v17);
    v20 = a1 - 8;
    v15 = a2;
    v16 = lstrlenA(lpString);
    result = a4 & 2;
    if ((a4 & 2) != 0)
    {
        v20 -= 2 * v16;
    }
    else
    {
        result = a4 & 4;
        if ((a4 & 4) != 0)
            v20 -= 4 * v16;
    }
    for (i = 0; i < v16; i += 2)
    {
        v20 += 8;
        lstrcpynA(&String1, &lpString[i], 3);
        if (String1 == 92 && v14 == 110)
        {
            v15 += 16;
            v20 = a1 - 8;
        }
        else
        {
            v10 = 0;
            v11 = 0;
            for (j = 0; j < 81; ++j)
            {
                if (String1 == byte_4B443C[3 * j] && v14 == byte_4B443D[3 * j])
                {
                    v10 = 1;
                    String1 = byte_4B4530[3 * j];
                    v14 = byte_4B4531[3 * j];
                    break;
                }
            }
            if (!v10)
            {
                for (k = 0; k < 10; ++k)
                {
                    if (String1 == byte_4B4624[3 * k] && v14 == byte_4B4625[3 * k])
                    {
                        v11 = 1;
                        String1 = byte_4B4644[3 * k];
                        v14 = byte_4B4645[3 * k];
                        break;
                    }
                }
            }
            for (m = 0; m < 246 && (String1 != byte_4B4158[3 * m] || v14 != byte_4B4159[3 * m]); ++m)
                ;
            if (m != 246)
            {
                for (n = 0; n < (a4 & 1) + 1; ++n)
                {
                    v17[1] = n + v20;
                    v18 = v15;
                    v17[0] = dword_4B921C;
                    SetRect(&rc, 8 * (m % 16), 8 * (m / 16), 8, 8);
                    if (a5 == -1)
                        sub_49C8A6((int)byte_4BDC60, v17, (_DWORD*)&rc);
                    else
                        sub_4A03B3((short*)byte_4BDC60, a5, v17, (_DWORD*)&rc);
                    if (v10 || v11)
                    {
                        v18 = v15 - 8;
                        v17[0] = dword_4B921C;
                        if (v10)
                            SetRect(&rc, 120, 56, 8, 8);
                        else
                            SetRect(&rc, 0, 64, 8, 8);
                        if (a5 == -1)
                            sub_49C8A6((int)byte_4BDC60, v17, (_DWORD*)&rc);
                        else
                            sub_4A03B3((short*)byte_4BDC60, a5, v17, (_DWORD*)&rc);
                    }
                }
            }
        }
        result = i + 2;
    }
    return result;
}