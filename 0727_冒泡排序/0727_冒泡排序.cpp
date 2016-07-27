// 0727_冒泡排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

/*冒泡排序循环n次将当前的值到i，立flag为true，
循环到i时候，首先将flag置作false，然后从j=1到n-i，判断nums[j-1]和nums[j]，如果前者大则交换并置flag为true，交换（n-i）次。
当没有交换，也就是flag一直为false时候已经排好序，外循环停止*/

/*时间复杂度。平均情况：O(n^2)。最好情况：O(n)。最差情况：O(n^2)。辅助空间：O(1)。稳定性：稳定。*/

/*时间复杂度分析。其外层循环执行 N - 1次。内层循环最多的时候执行N-i次，最少的时候执行1次，平均执行 (N+1)/2次。
所以循环体内的比较交换约执行 (N - 1)(N + 1) / 2 = (N^2 - 1)/2（其中N^2是仿照Latex中的记法，表示N的平方）。
按照计算复杂度的原则，去掉常数，去掉最高项系数，其复杂度为O(N^2)。*/

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

//2nd time
void BubbleSort2_2(int nums[], int n)
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

//3nd
void BubbleSort2_3(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n-i; j++)
		{
			if(nums[j-1]>nums[j])
			{
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j-1]= nums[j - 1] - nums[j];
				flag = true;
			}
		}
	}
}

int main()
{
	int nums[] = { 1,3,2,7,8,5,4 };
	int n = 7;
	BubbleSort2_3(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", nums[i]);
	}
	getchar();
	return 0;
}

