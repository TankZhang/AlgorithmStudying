// 0714_38求二叉树中节点的最大距离.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

struct  NODE
{
	NODE* pLeft;
	NODE* pRight;
	int nMaxLeft;
	int nMaxRight;
	char chValue;
};

int nMaxLen = 0;

void FindMaxLen(NODE* pRoot)
{
	//遍历到叶子结点，返回
	if (!pRoot)
		return;
	//如果左子树为空，那么该节点的左边最长距离为0
	if (!(pRoot->pLeft))
		pRoot->nMaxLeft = 0;
	//如果右子树为空
	if (!(pRoot->pRight))
		pRoot->nMaxRight = 0;
	//如果左子树不为空，递归寻找左子树最长距离
	if (pRoot->pLeft)
		FindMaxLen(pRoot->pLeft);
	//如果右子树不为空，递归寻找右子树最长距离
	if (pRoot->pRight)
		FindMaxLen(pRoot->pRight);
	//计算左子树最长节点距离
	if (!(pRoot->pLeft))
	{
		int nTempMax = 0;
		if (pRoot->pLeft->nMaxLeft > pRoot->pLeft->nMaxRight)
			nTempMax = pRoot->pLeft->nMaxLeft;
		else
			nTempMax = pRoot->pLeft->nMaxRight;
		pRoot->nMaxLeft = nTempMax + 1;
	}
	if (!(pRoot->pRight))
	{
		int nTempMax = 0;
		if (pRoot->pRight->nMaxLeft > pRoot->pRight->nMaxRight)
			nTempMax = pRoot->pRight->nMaxLeft;
		else
			nTempMax = pRoot->pRight->nMaxRight;
		pRoot->nMaxRight = nTempMax + 1;
	}

	//更新最长距离
	if (pRoot->nMaxLeft + pRoot->nMaxRight > nMaxLen)
		nMaxLen = pRoot->nMaxLeft + pRoot->nMaxRight;
}


int main()
{
    return 0;
}

