#include "sub.h" 
void sub_45B346(_WORD* thisx, _BYTE* a2)
{
    const void* v2; // eax
    int i; // [esp+4h] [ebp-4h]

    if (a2)
    {
        v2 = (const void*)unknown_libname_18(a2);
        memcpy(thisx + 1, v2, 0xBu);
        *thisx = 1;
        thisx[10] = sub_475CB0((short*)a2);
        *((_BYTE*)thisx + 22) = sub_4016F0(a2);
        *((_BYTE*)thisx + 26) = sub_401710(a2);
        thisx[12] = unknown_libname_22((_DWORD*)(char*)unk_4B93A4 + 24 * *((unsigned __int8*)thisx + 26));
        *((_BYTE*)thisx + 16) = MarkedForDetachment(a2);
        thisx[14] = 825 * (unsigned __int8)sub_4265B0(a2) / 1000;
        thisx[15] = (unsigned __int8)sub_426570(a2);
        thisx[16] = (unsigned __int8)sub_4265D0(a2);
        thisx[17] = (unsigned __int8)sub_4265F0(a2);
        thisx[18] = (unsigned __int8)sub_426610(a2);
        thisx[19] = (unsigned __int8)sub_426550(a2);
        thisx[20] = (unsigned __int8)sub_426670(a2);
        thisx[21] = (unsigned __int8)sub_426630(a2);
        thisx[22] = (unsigned __int8)sub_426650(a2);
        thisx[23] = 8 * (unsigned __int8)sub_426690(a2) / 10;
        *((_BYTE*)thisx + 48) = 12;
        *((_BYTE*)thisx + 49) = 12;
        *((_BYTE*)thisx + 50) = 12;
        *((_BYTE*)thisx + 51) = 12;
        *((_BYTE*)thisx + 52) = 12;
        *((_BYTE*)thisx + 53) = 12;
        *((_BYTE*)thisx + 54) = 9;
        *((_BYTE*)thisx + 55) = 12;
        *((_BYTE*)thisx + 56) = 12;
        *((_BYTE*)thisx + 57) = 12;
        if (*((_BYTE*)thisx + 16))
        {
            switch (*((_BYTE*)thisx + 16))
            {
            case 1:
                thisx[15] += 15;
                *((_BYTE*)thisx + 49) += 10;
                *((_BYTE*)thisx + 57) += 5;
                break;
            case 2:
                thisx[16] += 15;
                *((_BYTE*)thisx + 50) += 10;
                *((_BYTE*)thisx + 55) += 5;
                break;
            case 3:
                thisx[17] += 15;
                *((_BYTE*)thisx + 51) += 10;
                *((_BYTE*)thisx + 54) += 2;
                break;
            }
        }
        else
        {
            thisx[15] += 5;
            thisx[16] += 5;
            thisx[17] += 5;
            *((_BYTE*)thisx + 49) += 5;
            *((_BYTE*)thisx + 50) += 5;
            *((_BYTE*)thisx + 51) += 5;
        }
        for (i = 0; i < 3; ++i)
            *((_BYTE*)thisx + i + 68) = sub_4266B0(a2, i);
    }
}

