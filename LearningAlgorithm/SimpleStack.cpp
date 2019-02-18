#ifndef _Stack_h

#endif // !_Stack_h



#include "stdafx.h"
#include "SimpleStack.h"
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);

struct  Node
{
	int Element;
	PtrToNode Next;
};

int IsEmpty(Stack S) {
	return S  -> Next == NULL;
}