#pragma once
class SimpleStack
{
public:
	SimpleStack();
	~SimpleStack();
};
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

