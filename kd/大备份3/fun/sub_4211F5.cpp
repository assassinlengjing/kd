#include "sub.h" 
char* sub_4211F5(int thisx)
{
	char* result; // eax

	result = (char*)sub_465E0A((char*)unk_4B9B10, thisx, 5 * (*(unsigned __int8*)(thisx + 325) / 3) + 15);
	*(_DWORD*)(thisx + 4) = (int)result;
	return result;
}

