// 0727_直接插入排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


/*直接插入排序，为从i=1开始，找前面某个值小于它并且不是紧邻的，如果找到，则从此数到i数中间的所有数字都要移动到i之后*/

/*平均情况O(n^2)，最坏情况O(n^2),最好情况O(n)，辅助存储O(1)，稳定性：稳定*/

/*最坏情况下，数组完全逆序，插入第2个元素时要考察前1个元素，插入第3个元素时，要考虑前2个元素，……，
插入第N个元素，要考虑前 N - 1 个元素。因此，最坏情况下的比较次数是 1 + 2 + 3 + ... + (N - 1)，等差数列求和，结果为 N^2 / 2
所以最坏情况下的复杂度为 O(N^2)。最好情况下，数组已经是有序的，每插入一个元素，只需要考查前一个元素，因此最好情况下，插入排序的时间复杂度为O(N)。*/


//直接插入排序1
void InsertionSort(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;

		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//第二遍写
void InsertionSort2(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//3rd times
void InsertionSort3(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//4th times
void InsertionSort4(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//5th
void InsertionSort5(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//6th
void InsertionSort6(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//7th
void InsertionSort7(int nums[], int n)
{
	int i, j, k,temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

//8th
void InsertionSort8(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] <= nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1]=temp;
		}
		
	}
}

//9th
void InsertionSort9(int nums[], int n)
{
	int i, j, k, temp;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
			if (nums[j] < nums[i])
				break;
		if (j != i - 1)
		{
			temp = nums[i];
			for (k = i - 1; k > j; k--)
				nums[k + 1] = nums[k];
			nums[k + 1] = temp;
		}
	}
}

int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	InsertionSort9(nums, n);
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