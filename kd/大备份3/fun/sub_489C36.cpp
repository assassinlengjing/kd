#include "sub.h" 
int sub_489C36(const CHAR* thisx)
{
    int result; // eax

    result = sub_456D33((char*)unk_4B9B10, thisx + 40, 1, 1);
    if (!result)
        return sub_456D33((char*)unk_4B9B10, aStage00Wav, 1, 1);
    return result;
}
