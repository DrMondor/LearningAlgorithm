/*------------------------------------------

实例为表的顺序实现，代码来自《数据结构与算法分析 -c语言实现》
学习版本
--------------------------------------------*/

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
int IsEmpty(List L) {
	return L->Next == NULL;
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
void Insert(int X, List L, Position P) {
	Position TmpCell;
	TmpCell = (Position) malloc(sizeof(struct Node));
	if (TmpCell == NULL)
	{
		printf("Out of space!!!");
	}
	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;

}

void DeleteList(List L) {
	Position P,Tmp;

	P = L->Next;
	L->Next = NULL;
	while (P != NULL) {
		Tmp = P->Next;
		free(P);
		P = Tmp;
	}
}
//test123

int main()
{
    return 0;
}

