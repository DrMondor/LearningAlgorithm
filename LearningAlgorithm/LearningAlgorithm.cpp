// LearningAlgorithm.cpp: 定义控制台应用程序的入口点。
//
#ifndef _List_H

#endif // !_List_H
#include "stdafx.h"
struct  Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
Position FindPrevious(int X, List L);

struct Node
{
	int Element;
	Position Next;
};
int IsEmpty(Position P,List L) {
	return P->Next == NULL;
}
int IsLast(Position P, List L) {
	return P->Next == NULL;
}
Position Find(int X, List L) {
	Position P;

	P = L->Next;
	while (P != NULL && P ->Element != X)
	{
		P = P->Next;
	}
	return P;
}
void Delete(int X, List L) {
	Position P, TmpCell;

	P = FindPrevious(X, L);
}



int main()
{
    return 0;
}

