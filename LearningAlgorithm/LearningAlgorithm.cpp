#include "stdafx.h"
#include "SimpleStack.h"
#include "LinkLIst.h"
#include <iostream>
using namespace std;

struct  Node;
struct Node
{
	int Element;
	Position Next;
};
int main()
{
	int ListLength;
	List L;
	cout << "输入链表的长度\n";
	cin >> ListLength;
	L = (List)malloc(sizeof(struct Node));
	CreateList(L);
	//
}

