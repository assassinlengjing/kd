#include "sub.h" 
int __fastcall sub_4419F6(int a1)
{
    int result; // eax

    result = a1;
    if (*(_BYTE*)(a1 + 20))
    {
        ++* (_DWORD*)(a1 + 12);
        result = *(unsigned __int8*)(a1 + 20);
        if (result == 1)
        {
            if (!*(_DWORD*)(a1 + 12))
            {
                *(_DWORD*)(a1 + 4) -= 4;
                *(_DWORD*)(a1 + 8) -= 4;
            }
            result = (*(_DWORD*)(a1 + 12) - 1) / 2;
            *(_DWORD*)(a1 + 24) = result;
            if (*(_DWORD*)(a1 + 12) == 6)
            {
                result = a1;
                *(_BYTE*)(a1 + 20) = 0;
            }
        }
        else if (*(unsigned __int8*)(a1 + 20) < 2u || (result = a1, *(unsigned __int8*)(a1 + 20) > 0x10u))
        {
            switch (*(_BYTE*)(a1 + 20))
            {
            case 0x11:
                if (*(_DWORD*)(a1 + 12) != 75
                    && *(_DWORD*)(a1 + 16)
                    && SchedulerBase::GetSchedulerProxy(*(SchedulerBase**)(a1 + 16)) == (struct Concurrency::ISchedulerProxy*)96)
                {
                    if (!*(_DWORD*)(a1 + 12))
                    {
                        if (*(_DWORD*)(a1 + 28))
                            *(_DWORD*)(a1 + 4) = -*(_DWORD*)(a1 + 4);
                        *(_DWORD*)(a1 + 4) -= 4;
                        *(_DWORD*)(a1 + 8) -= 4;
                    }
                    *(_DWORD*)(a1 + 24) = 3;
                    result = a1;
                    *(_DWORD*)(a1 + 32) = *(_DWORD*)(a1 + 12) % 2 == 0;
                }
                else
                {
                    result = a1;
                    *(_BYTE*)(a1 + 20) = 0;
                }
                break;
            case 0x12:
                result = *(_DWORD*)(a1 + 12) / 8 + 4;
                *(_DWORD*)(a1 + 24) = result;
                if (*(int*)(a1 + 12) >= 24)
                {
                    result = a1;
                    *(_BYTE*)(a1 + 20) = 0;
                }
                break;
            case 0x13:
                result = a1;
                if (*(int*)(a1 + 12) >= 15)
                {
                    result = (*(_DWORD*)(a1 + 12) - 15) / 4 + 1;
                    *(_DWORD*)(a1 + 24) = result;
                }
                else
                {
                    *(_DWORD*)(a1 + 24) = 0;
                }
                if (*(int*)(a1 + 12) >= 31)
                {
                    result = a1;
                    *(_BYTE*)(a1 + 20) = 0;
                }
                break;
            case 0x14:
                result = a1;
                if (*(int*)(a1 + 12) >= 20)
                    *(_BYTE*)(a1 + 20) = 0;
                break;
            }
        }
        else
        {
            result = *(_DWORD*)(a1 + 12) / 3;
            if (!(*(_DWORD*)(a1 + 12) % 3))
            {
                result = *(_DWORD*)(a1 + 8) - 1;
                *(_DWORD*)(a1 + 8) = result;
            }
            if (*(int*)(a1 + 12) >= 60)
            {
                result = a1;
                *(_BYTE*)(a1 + 20) = 0;
            }
            switch (*(_BYTE*)(a1 + 20))
            {
            case 2:
                result = a1;
                *(_DWORD*)(a1 + 24) = 3;
                break;
            case 3:
                result = a1;
                *(_DWORD*)(a1 + 24) = 4;
                break;
            case 4:
                result = a1;
                *(_DWORD*)(a1 + 24) = 4;
                break;
            case 5:
                result = a1;
                *(_DWORD*)(a1 + 24) = 1;
                break;
            case 6:
                result = a1;
                *(_DWORD*)(a1 + 24) = 0;
                break;
            case 7:
                result = a1;
                *(_DWORD*)(a1 + 24) = 2;
                break;
            case 8:
                result = a1;
                *(_DWORD*)(a1 + 24) = 5;
                break;
            case 9:
                result = a1;
                *(_DWORD*)(a1 + 24) = 5;
                break;
            case 0xA:
                result = a1;
                *(_DWORD*)(a1 + 24) = 6;
                break;
            case 0xB:
                result = a1;
                *(_DWORD*)(a1 + 24) = 7;
                break;
            case 0xC:
                result = a1;
                *(_DWORD*)(a1 + 24) = 7;
                break;
            case 0xD:
                result = a1;
                *(_DWORD*)(a1 + 24) = 8;
                break;
            case 0xE:
                result = a1;
                *(_DWORD*)(a1 + 24) = 10;
                break;
            case 0xF:
                result = a1;
                *(_DWORD*)(a1 + 24) = 8;
                break;
            case 0x10:
                result = a1;
                *(_DWORD*)(a1 + 24) = 8;
                break;
            }
        }
    }
    return result;
}

