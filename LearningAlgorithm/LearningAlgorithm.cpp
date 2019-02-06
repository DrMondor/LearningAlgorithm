// LearningAlgorithm.cpp: 定义控制台应用程序的入口点。
//
#ifndef _List_H

#endif // !_List_H
#include "stdafx.h"
#include <iostream>
struct  Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(int X, List L);
void Delete(int X, List L);
Position FindPrevious(int X, List L);
void Insert(int X, List L, Position P);
void DeleteList(List L);


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
	if (!IsLast(P, L)) {
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}
Position FindPrevious(int X, List L) {
	Position P;
	P = L;
	while (P->Next != NULL && P->Next->Element != X) {
		P = P->Next;
	}
}

//test123

int main()
{
    return 0;
}

