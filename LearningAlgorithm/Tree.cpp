#include <iostream>
#include "stdafx.h"

typedef struct TreeNode *ptrToNode;
typedef struct TreeBinaryNode *ptrToNodeBinary;
typedef struct ptrToNodeBinary Tree;


struct TreeNode
{
	int Element;
	ptrToNode FirstChild; //��һ���ӽ��
	ptrToNode NextSibling; //���ֵܽ��
};

struct TreeBinaryNode
{
	int Element;
	ptrToNodeBinary Left;
	Tree right;
};