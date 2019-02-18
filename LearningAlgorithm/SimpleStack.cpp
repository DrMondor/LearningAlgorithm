#ifndef _Stack_h

#endif // !_Stack_h



#include "stdafx.h"
#include "SimpleStack.h"
#include <iostream>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreatStack(void);
void MakeEmpty(Stack S);
void Pop(Stack S);

struct  Node
{
	int Element;
	PtrToNode Next;
};

int IsEmpty(Stack S) {
	return S  -> Next == NULL;
}
Stack CreatStack(void) {
	Stack S;

	S = (Stack)malloc(sizeof(struct Node));
	if (S == NULL)
		printf("Out of space");
	S->Next == NULL;
	MakeEmpty(S);
	return S;
}
void MakeEmpty(Stack S) {

	if (S == NULL)
	{
		printf("Must use CreateStack first");
	}
	else
	{
		while (!IsEmpty(S))
		{
			Pop(S);
		}
	}
}