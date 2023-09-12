#include "sub.h" 
int sub_456D33(const CHAR* thisx, LPCSTR lpString2, int a3, int a4)
{
    int v5; // eax
    CHAR String1[256]; // [esp+Ch] [ebp-224h] BYREF
    int v8[4]; // [esp+10Ch] [ebp-124h] BYREF
    int v9; // [esp+11Ch] [ebp-114h]
    CHAR String[260]; // [esp+120h] [ebp-110h] BYREF
    int v11; // [esp+22Ch] [ebp-4h]

    if (sub_475810((_DWORD*)unk_4BDB28) && !a4 && (!lpString2 || !lstrcmpiA(thisx + 13125, lpString2)))
        return 1;
    sub_440C04((_DWORD*)unk_4BDB28, 0);
    wsprintfA(String, "BGM\\%s", lpString2);
    v9 = lstrlenA(String);
    String[v9 - 3] = 116;
    String[v9 - 2] = 120;
    String[v9 - 1] = 116;
    sub_482BF0(v8);
    v11 = 0;
    if (sub_482C74((int)v8, String))
    {
        while (sub_482D44(v8, String1))
        {
            if (!lstrcmpiA(String1, aLooppos))
            {
                sub_482D44(v8, String1);
                v5 = atol(String1);
                sub_440C04((_DWORD*)unk_4BDB28, v5);
            }
        }
    }
    String[v9 - 3] = 119;
    String[v9 - 2] = 97;
    String[v9 - 1] = 118;
    if (sub_4404CB((_DWORD*)unk_4BDB28, String, a3))
    {
        lstrcpyA((LPSTR)thisx + 13125, lpString2);
        v11 = -1;
        sub_482C2F(v8);
        return 1;
    }
    else
    {
        v11 = -1;
        sub_482C2F(v8);
        return 0;
    }
}