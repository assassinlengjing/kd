#include "sub.h" 
int sub_464229(_BYTE* thisx, SchedulerBase* a2)
{
    int v3; // [esp+0h] [ebp-5Ch]
    int v4; // [esp+4h] [ebp-58h]
    int v5; // [esp+8h] [ebp-54h]
    BOOL v6; // [esp+Ch] [ebp-50h]
    int v8; // [esp+1Ch] [ebp-40h]
    int v9; // [esp+2Ch] [ebp-30h]
    int v10; // [esp+34h] [ebp-28h]
    int v11; // [esp+38h] [ebp-24h]
    int v12; // [esp+3Ch] [ebp-20h]
    int v13; // [esp+40h] [ebp-1Ch]
    int i; // [esp+44h] [ebp-18h]
    int v15; // [esp+4Ch] [ebp-10h]
    int v16; // [esp+50h] [ebp-Ch]
    int v17; // [esp+54h] [ebp-8h]
    int v18; // [esp+58h] [ebp-4h]

    v12 = sub_426090((_DWORD*)a2);
    v11 = sub_4260B0((_DWORD*)a2);
    v13 = sub_4260D0((_DWORD*)a2);
    v15 = sub_425D30((_DWORD*)a2);
    SchedulerBase::GetSchedulerProxy(a2);
    v16 = 0;
    v17 = 0;
    v10 = 0;
    v18 = 0;
    for (i = 0; i < (unsigned __int8)byte_4B999A; ++i)
    {
        v9 = unknown_libname_12((_DWORD*)&thisx[196 * i + 7524]);
        if (sub_425CB0(&thisx[196 * i + 7524]) == 12)
        {
            if (unknown_libname_15((_DWORD*)&thisx[196 * i + 7524]) == 1)
            {
                v9 = 0;
            }
            else if (v9 == 3)
            {
                v9 = 2;
            }
        }
        v6 = v9 == 2 || v9 == 5;
        if (unknown_libname_22((_DWORD*)&thisx[196 * i + 7524])
            && (!v9 || v9 == 2 || v9 == 5)
            && (v9 || !v15)
            && (!v6 || sub_475530((_DWORD*)&thisx[196 * i + 7524])))
        {
            v5 = sub_426470((_DWORD*)&thisx[196 * i + 7524]) - v12 <= 0 ? v12 - sub_426470((_DWORD*)&thisx[196 * i + 7524]) : sub_426470((_DWORD*)&thisx[196 * i + 7524]) - v12;
            v4 = sub_426530((_DWORD*)&thisx[196 * i + 7524]) - v11 <= 0 ? v11 - sub_426530((_DWORD*)&thisx[196 * i + 7524]) : sub_426530((_DWORD*)&thisx[196 * i + 7524]) - v11;
            v8 = (int)UMSFreeVirtualProcessorRoot::GetExecutingProxy((UMSFreeVirtualProcessorRoot*)&thisx[196 * i + 7524])
                - v13;
            if (!v6 || v8 <= 0)
            {
                if (v8 <= 0)
                    v3 = -v8;
                else
                    v3 = v8;
                if (v5 <= 800 * v6 + 800 && v4 <= 500 && v3 <= 1800 * v6 + 600 && (!v16 || v17 > v5 && v10 > v4 && v18 > v3))
                {
                    v16 = (int)&thisx[196 * i + 7524];
                    v17 = v5;
                    v10 = v4;
                    v18 = v3;
                }
            }
        }
    }
    return v16;
}

