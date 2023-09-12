#include "sub.h" 
int __fastcall sub_43EF86(int a1)
{
    int result; // eax
    int v3[2]; // [esp+4h] [ebp-8h] BYREF

    result = a1;
    if (*(_DWORD*)(a1 + 4))
    {
        if (sub_426410(*(_DWORD**)(a1 + 4))
            || (result = sub_426410(*(_DWORD**)(a1 + 4))) == 0
            && (result = (int)SchedulerBase::GetSchedulerProxy(*(SchedulerBase**)(a1 + 4)),
                result == 82))
        {
            *(_DWORD*)(a1 + 16) += *(char*)(a1 + 20);
            if (*(int*)(a1 + 16) <= 0 || *(int*)(a1 + 16) >= 400)
            {
                if (*(int*)(a1 + 16) >= 0)
                {
                    if (*(int*)(a1 + 16) > 400)
                        *(_DWORD*)(a1 + 16) = 400;
                }
                else
                {
                    *(_DWORD*)(a1 + 16) = 0;
                }
                *(_BYTE*)(a1 + 20) = -*(_BYTE*)(a1 + 20);
            }
            sub_4097DF(*(void**)(a1 + 4), (int)v3);
            *(_DWORD*)(a1 + 8) = v3[0] - 20;
            *(_DWORD*)(a1 + 12) = v3[1] + 2;
            if (*(int*)(a1 + 8) >= 0)
            {
                if (*(_DWORD*)(a1 + 8) + 40 > 320)
                    *(_DWORD*)(a1 + 8) = 280;
            }
            else
            {
                *(_DWORD*)(a1 + 8) = 0;
            }
            result = a1;
            if (*(int*)(a1 + 12) >= 0)
            {
                result = *(_DWORD*)(a1 + 12) + 8;
                if (result > 176)
                    *(_DWORD*)(a1 + 12) = 168;
            }
            else
            {
                *(_DWORD*)(a1 + 12) = 0;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 4) = 0;
        }
    }
    return result;
}

