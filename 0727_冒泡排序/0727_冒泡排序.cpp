#include "stdafx.h"

/*算法原理：冒泡排序循环n次将当前的值到i，立flag为true，
循环到i时候，首先将flag置作false，然后从j=1到n-i，判断nums[j-1]和nums[j]，如果前者大则交换并置flag为true，交换（n-i）次。
当没有交换，也就是flag一直为false时候已经排好序，外循环停止*/

/*时间复杂度：平均情况：O(n^2)。最好情况：O(n)。最差情况：O(n^2)。辅助空间：O(1)。稳定性：稳定。*/

/*复杂度分析：其外层循环执行 N - 1次。内层循环最多的时候执行N-i次，最少的时候执行1次，平均执行 (N+1)/2次。
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
		for (int j = 1; j < n - i; j++)
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

//冒泡2_1
void BubbleSort2_1(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i; j++)
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
		for (int j = 1; j < n - i; j++)
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
		for (int j = 1; j < n - i; j++)
		{
			if (nums[j - 1] > nums[j])
			{
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
				flag = true;
			}
		}
	}
}

//4th
void BubbleSort2_4(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i; j++)
		{
			if (nums[j - 1] > nums[j])
			{
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
				flag = true;
			}
		}
	}
}

//5th
void BubbleSort2_5(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i; j++)
			if (nums[j - 1] > nums[j])
			{
				flag = true;
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
			}
	}
}

//6th
void BubbleSort2_6(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n && flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i; j++)
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

//7th
void BubbleSort2_7(int nums[], int n)
{
	bool flag = true;
	for (int i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (int j = 1; j < n - i; j++)

			if (nums[j - 1] > nums[j])
			{
				flag = true;
				nums[j - 1] = nums[j - 1] + nums[j];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
			}
	}
}

//8th
void BubbleSort2_8(int nums[], int n)
{
	int i, j;
	bool flag = true;
	for (i = 0; i < n&&flag; i++)
	{
		flag = false;
		for (j = 1; j < n - i; j++)
			if (nums[j - 1] > nums[j])
			{
				flag = true;
				nums[j - 1] = nums[j] + nums[j - 1];
				nums[j] = nums[j - 1] - nums[j];
				nums[j - 1] = nums[j - 1] - nums[j];
			}
	}
}

int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	BubbleSort2_8(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", nums[i]);
	}
	getchar();
	return 0;
}

/*排序分类
	插入排序：直接插入
	希尔选择排序
	选择排序：直接选择排序
	堆排序
	交换排序：冒泡排序
	快速排序
	归并排序
	基数排序*/