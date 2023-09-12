#include "sub.h"
DNameNode*  DNameNode::new_DNameNode(DNameNode* thisxx)
{
	*(_DWORD*)thisxx = unk_4AC2BC;
	*((_DWORD*)thisxx + 1) = 0;
	return thisxx;
}