#include "sub.h"
DNameNode*  DNameNode::new_DNameNode(DNameNode* thisxx)
{
	*(_DWORD*)thisxx = off_4AC2BC;
	*((_DWORD*)thisxx + 1) = 0;
	return thisxx;
}