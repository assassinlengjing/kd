#include "sub.h" 
int sub_444DE2(_DWORD* thisx, int a2, struct Concurrency::ISchedulerProxy* a3, int a4, int a5, char a6)
{
    int v7; // [esp+4h] [ebp-44h]
    int v8; // [esp+8h] [ebp-40h]
    int v9; // [esp+Ch] [ebp-3Ch]
    int v11; // [esp+18h] [ebp-30h]
    int v12; // [esp+1Ch] [ebp-2Ch]
    int v13; // [esp+24h] [ebp-24h]
    int v14; // [esp+28h] [ebp-20h]
    int v15; // [esp+2Ch] [ebp-1Ch]
    int i; // [esp+30h] [ebp-18h]
    int v17; // [esp+34h] [ebp-14h]
    int v18; // [esp+38h] [ebp-10h]
    int v19; // [esp+3Ch] [ebp-Ch]
    char v20; // [esp+40h] [ebp-8h]
    int v21; // [esp+44h] [ebp-4h]

    v15 = -1;
    v14 = 0;
    v18 = sub_426090(&thisx[153 * a2 + 657]) / 100;
    v17 = sub_4260B0(&thisx[153 * a2 + 657]) / 100;
    v19 = sub_4260D0(&thisx[153 * a2 + 657]) / 100;
    v20 = sub_426070((char*)&thisx[153 * a2 + 657]);
    v21 = sub_425D70(&thisx[153 * a2 + 657]);
    for (i = 0; i < 8; ++i)
    {
        if (i != a2
            && unknown_libname_7(&thisx[153 * i + 657])
            && SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]) == a3
            && ((a6 != 1 || byte_4B99CC) && a6 != 2 || v20 != sub_426070((char*)&thisx[153 * i + 657])))
        {
            v12 = sub_4260D0(&thisx[153 * i + 657]) / 100;
            if (v19 - v12 <= 0)
                v9 = v12 - v19;
            else
                v9 = v19 - v12;
            if (v9 <= 16)
            {
                if ((v13 = sub_426090(&thisx[153 * i + 657]) / 100, v11 = sub_4260B0(&thisx[153 * i + 657]) / 100, !a4)
                    || v21 && v18 < v13
                    || !v21 && v18 > v13)
                {
                    if (v18 - v13 <= 0)
                        v8 = v13 - v18;
                    else
                        v8 = v18 - v13;
                    if (v8 < a5)
                    {
                        if (v17 - v11 <= 0)
                            v7 = v11 - v17;
                        else
                            v7 = v17 - v11;
                        if (v7 <= 5 && (v15 == -1 || v8 < v14))
                        {
                            v15 = i;
                            v14 = v8;
                        }
                    }
                }
            }
        }
    }
    return v15;
}

