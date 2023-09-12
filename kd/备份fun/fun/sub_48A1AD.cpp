#include "sub.h" 
void sub_48A1AD(void** thisx, int a2)
{
    int v2; // eax
    int v3; // eax
    int v5[4]; // [esp+18h] [ebp-120h] BYREF
    char v6; // [esp+28h] [ebp-110h]
    CHAR String1[256]; // [esp+2Ch] [ebp-10Ch] BYREF
    int v8; // [esp+134h] [ebp-4h]

    sub_48A150(thisx);
    wsprintfA(String1, "Stage\\Stage%02d_data.txt", a2);
    sub_482BF0(v5);
    v8 = 0;
    if (sub_482C74((int)v5, String1))
    {
        v6 = 0;
        while (sub_482D44(v5, String1))
        {
            if (v6)
            {
                if (v6 == 1)
                {
                    if (thisx[3])
                        operator delete(thisx[3]);
                    v2 = lstrlenA(String1);
                    thisx[3] = operator new(v2 + 1);
                    lstrcpyA((LPSTR)thisx[3], String1);
                    v6 = 0;
                }
                else if (v6 == 2)
                {
                    if (thisx[2])
                        operator delete(thisx[2]);
                    v3 = lstrlenA(String1);
                    thisx[2] = operator new(v3 + 1);
                    lstrcpyA((LPSTR)thisx[2], String1);
                    v6 = 0;
                }
            }
            else if (lstrcmpiA(String1, aHelp_0))
            {
                if (!lstrcmpiA(String1, aName))
                    v6 = 2;
            }
            else
            {
                v6 = 1;
            }
        }
    }
    v8 = -1;
    sub_482C2F(v5);
}