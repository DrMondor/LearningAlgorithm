#include <iostream>
#include "stdafx.h"

typedef struct TreeNode *ptrToNode;
typedef struct TreeBinaryNode *ptrToNodeBinary;
typedef struct ptrToNodeBinary Tree;


struct TreeNode
{
	int Element;
	ptrToNode FirstChild; //第一孩子结点
	ptrToNode NextSibling; //旁兄弟结点
};

struct TreeBinaryNode
{
	//YU
	int Element;
	ptrToNodeBinary Left;
	Tree right;
};