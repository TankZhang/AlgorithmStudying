// 0706_217ѭ����λ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "time.h"
#include "stdlib.h"
#define MAX_LENGTH 100

void Shift(int A[], int N, int K);
void DoMain();
void Reverse(int A[], int b, int e);

void main()
{
	DoMain();

	getchar();
}


void DoMain()
{
	//���������
	srand((unsigned)time(NULL));
	int A[MAX_LENGTH];
	int N = 10;
	printf("%s\n", "���������Ϊ��");
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 100;
		printf("%d ", A[i]);
	}
	printf("\n\n\n");

	Shift(A, N, 6);

	printf("%s\n", "���������Ϊ��");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
}

//��Ҫԭ��Ϊ��<---<------�����ֱַ�ת���仯Ϊ--->------>���巴ת�仯Ϊ<------<---
void Shift(int A[], int N, int K)
{
	K %= N;
	Reverse(A, 0, N - K - 1); 
	Reverse(A, N - K,N - 1); 
	Reverse(A, 0, N - 1);
}

void Reverse(int A[], int b, int e)
{
	for (; b < e; b++, e--)
	{
		int temp = A[e];
		A[e] = A[b];
		A[b] = temp;
	}
}
