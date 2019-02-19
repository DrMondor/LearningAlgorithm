#pragma once
class LinkLIst
{
public:
	LinkLIst();
	~LinkLIst();
};
struct  Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

void CreateList(List L);
//List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(int X, List L);
void Delete(int X, List L);
Position FindPrevious(int X, List L);
void Insert(int X, List L, Position P);
void DeleteList(List L);


