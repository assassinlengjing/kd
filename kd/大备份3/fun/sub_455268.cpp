#include "sub.h" 
_BYTE* sub_455268(_BYTE* thisx, int a2)
{
    _BYTE* result; // eax

    if (a2 == -1)
    {
        sub_451EB5(thisx, 1, 1);
        sub_452045(thisx, 1, 1, 38, 22);
        sub_47B7ED(16, 32, aDevice, 0, unk_4B9248);
        sub_47B7ED(16, 52, aUp_2, 0, unk_4B9248);
        sub_47B7ED(16, 62, aDown_1, 0, unk_4B9248);
        sub_47B7ED(16, 72, aLeft_1, 0, unk_4B9248);
        sub_47B7ED(16, 82, aRight_1, 0, unk_4B9248);
        sub_47B7ED(16, 102, aA, 0, unk_4B9248);
        sub_47B7ED(16, 112, aB, 0, unk_4B9248);
        sub_47B7ED(16, 122, aC, 0, unk_4B9248);
        sub_47B7ED(16, 132, aAB, 0, unk_4B9248);
        sub_47B7ED(16, 142, aAC, 0, unk_4B9248);
        sub_47B7ED(16, 162, aSelect_1, 0, unk_4B9248);
        sub_47B7ED(16, 172, aStart_1, 0, unk_4B9248);
        return sub_455268(thisx, -2);
    }
    else if (a2 == -2)
    {
        sub_451EB5(thisx, 1, 1);
        if (thisx[2562])
        {
            if (thisx[2562] == 1)
            {
                return (_BYTE*)sub_47B91A(16, 208, &unk_4B2078, 0, unk_4B9248);
            }
            else
            {
                result = thisx;
                if (thisx[2562] == 2)
                    return (_BYTE*)sub_47B91A(16, 208, &unk_4B20A4, 0, unk_4B9248);
            }
        }
        else
        {
            return (_BYTE*)sub_47B91A(16, 208, &unk_4B203C, 0, unk_4B9248);
        }
    }
    return result;
}