// 0727_冒泡排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//冒泡1
void BubbleSort1(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				a[j - 1] = a[j - 1] + a[j];
				a[j] = a[j - 1] - a[j];
				a[j - 1] = a[j - 1] - a[j];
			}
		}
	}
}

//冒泡1重复
void BubbleSort1_1(int nums[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (nums[j - 1] > nums[j])
			{
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
			}
		}
	}
}

//冒泡2
void BubbleSort2(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; (i < n) && flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i ;j++)
		{
			if(nums[j - 1] > nums[j])
			{
			flag = true;
			nums[j - 1] = nums[j - 1] + nums[j];
			nums[j] = nums[j - 1] - nums[j];
			nums[j - 1] = nums[j - 1] - nums[j];
			}
		}
	}
}

//冒泡2_1
void BubbleSort2_1(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n-i; j++)
		{
			if (nums[j - 1] > nums[j])
			{
				flag = true;
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
			}
		}
	}
}

int main()
{
	int nums[] = { 1,3,2,7,8,5,4 };
	int n = 7;
	BubbleSort2_1(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", nums[i]);
	}
	getchar();
	return 0;
}

