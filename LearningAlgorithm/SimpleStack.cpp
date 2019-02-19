#ifndef _Stack_h

#endif // !_Stack_h



#include "stdafx.h"
#include "SimpleStack.h"
#include <iostream>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsStackEmpty(Stack S);
Stack CreatStack(void);
void MakeEmpty(Stack S);
void DisposeStack(Stack S);
void Push(int X, Stack S);
void Pop(Stack S);
int Top(Stack S);

struct  Node
{
	int Element;
	PtrToNode Next;
};

int IsStackEmpty(Stack S) {
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
		while (!IsStackEmpty(S))
		{
			Pop(S);
		}
	}
}
void Push(int X, Stack S) {
	
	PtrToNode TmpCell;

	TmpCell = (PtrToNode)malloc(sizeof(struct Node));
	if (TmpCell == NULL)
		printf("out of space");
	else
	{
		TmpCell->Element = X;
		TmpCell->Next = S->Next;
		S->Next = TmpCell;
	}
}

int Top(Stack S) {

	if (!IsStackEmpty(S))
		return S->Next->Element;
	return 0;
}
void Pop(Stack S) {

	PtrToNode FirstCell;

	if (!IsStackEmpty(S)) {
		printf("Empty Stack");
	}
	else
	{
		FirstCell = S->Next;
		S->Next = S->Next->Next;

	}
}