// 0714_38��������нڵ��������.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//������Ҷ�ӽ�㣬����
	if (!pRoot)
		return;
	//���������Ϊ�գ���ô�ýڵ����������Ϊ0
	if (!(pRoot->pLeft))
		pRoot->nMaxLeft = 0;
	//���������Ϊ��
	if (!(pRoot->pRight))
		pRoot->nMaxRight = 0;
	//�����������Ϊ�գ��ݹ�Ѱ�������������
	if (pRoot->pLeft)
		FindMaxLen(pRoot->pLeft);
	//�����������Ϊ�գ��ݹ�Ѱ�������������
	if (pRoot->pRight)
		FindMaxLen(pRoot->pRight);
	//������������ڵ����
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

	//���������
	if (pRoot->nMaxLeft + pRoot->nMaxRight > nMaxLen)
		nMaxLen = pRoot->nMaxLeft + pRoot->nMaxRight;
}


int main()
{
    return 0;
}

