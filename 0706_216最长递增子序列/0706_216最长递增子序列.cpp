// 0705_216最长递增子序列.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#define MAX_LENGTH 100


// 求最大增序数目
int MaxIncreasingArray(int A[], int length);
int MaxIncreasingArray2(int A[], int length);
//执行函数
void Do();
//求最大值
int Max(int a, int b);
int Min(int a, int b);

int main()
{
	Do();
	getchar();
}

void Do()
{
	int A[MAX_LENGTH] = { -1,0,3,45,3,2,5,43,-8,5,2,7 };
	int length = 11;
	int result = MaxIncreasingArray2(A, length);
	printf("%d\n", result);
}

int Max(int a, int b)
{
	return a > b ? a : b;
}

int Min(int a, int b)
{
	return a > b ? b : a;
}

//动态规划方式求解，定义L【i】为最长为i时候的最小的最大值。不断更新。见P196解法2
int MaxIncreasingArray(int A[], int length)
{
	int L[MAX_LENGTH];
	L[0] = A[0];
	for (int i = 1; i <= length; i++)
	{
		L[i] = (~0U) >> 1;
		for (int j = i - 1; j >-2; j--)
		{
			if (A[i] > L[j])
				L[j + 1] = Min(A[i], L[j + 1]);
		}
	}
	for (int k = length; k >= 0; k--)
	{
		if (L[k] < ((~0U) >> 1))
			return k + 1;
	}
	return ((~0U) >> 1);
}

//利用L[i+1]=max（1，L【k】+1）当A【i+1】>k时候，见P195解法1
int MaxIncreasingArray2(int A[], int length)
{
	int L[MAX_LENGTH];
	L[0] = 1;
	for (int i = 0; i < length; i++)
	{
		L[i + 1] = 0;
		for (int j = 0; j < i + 1; j++)
		{
			L[i + 1] = A[i + 1] > A[j] ? Max(L[i + 1], L[j] + 1) : L[i + 1];
		}
	}
	return L[length];
}










