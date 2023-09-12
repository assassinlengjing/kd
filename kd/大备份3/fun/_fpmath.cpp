#include "sub.h"
unsigned int _fpmath()
{
	unsigned int result; // eax

	_cfltcvt_init();
	unk_4CB228 = _ms_p5_mp_test_fdiv();
	result = _setdefaultprecision();
	__asm { fnclex }
	return result;
}