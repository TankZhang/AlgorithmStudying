// 0706_217循环移位.cpp : 定义控制台应用程序的入口点。
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
	//生成随机数
	srand((unsigned)time(NULL));
	int A[MAX_LENGTH];
	int N = 10;
	printf("%s\n", "输入的序列为：");
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 100;
		printf("%d ", A[i]);
	}
	printf("\n\n\n");

	Shift(A, N, 6);

	printf("%s\n", "输出的序列为：");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
}

//主要原理为，<---<------两部分分别反转，变化为--->------>整体反转变化为<------<---
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
