// 0706_32电话号码本.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define TEL_LENGTH 13

void RecursiveSearch(int *number, int * answer, int index, int n);

char c[10][10] = {
	"",
	"",
	"ABC",
	"DEF",
	"GHI",
	"JKL",
	"MNO",
	"PQRS",
	"TUV",
	"WXYZ",
};
int number[TEL_LENGTH] = { 1,3,3,4,6,7,8,9,8,5,3,6,9 };
int total[TEL_LENGTH] = { 0,0,3,3,3,3,3,4,3,4 };
int answer[TEL_LENGTH] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };

int main()
{
	int	n = 13;
	while (true)
	{
		for (int i = 0; i < n; i++)
			printf("%c", c[number[i]][answer[i]]);
		printf("\n");
		int k = n - 1;
		while (k >= 0)
		{
			if (answer[k] < total[number[k]] - 1)
			{
				answer[k]++;
				break;
			}
			else
			{
				answer[k] = 0; k--;
			}
		}
		if (k < 0)
			break;
	}


	getchar();
	return 0;
}

void RecursiveSearch(int *number, int * answer, int index, int n)
{
	if (index == n)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%c", c[number[i]][answer[i]]);
		}
		printf("\n");
		return;
	}
	for (answer[index] = 0; answer[index] < total[number[index]]; answer[index]++)
	{
		RecursiveSearch(number, answer, index + 1, n);
	}
}
