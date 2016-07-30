// 0727_ֱ�Ӳ�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


/*ֱ�Ӳ�������Ϊ��i=1��ʼ����ǰ��ĳ��ֵС�������Ҳ��ǽ��ڵģ�����ҵ�����Ӵ�����i���м���������ֶ�Ҫ�ƶ���i֮��*/

/*ƽ�����O(n^2)������O(n^2),������O(n)�������洢O(1)���ȶ��ԣ��ȶ�*/

/*�����£�������ȫ���򣬲����2��Ԫ��ʱҪ����ǰ1��Ԫ�أ������3��Ԫ��ʱ��Ҫ����ǰ2��Ԫ�أ�������
�����N��Ԫ�أ�Ҫ����ǰ N - 1 ��Ԫ�ء���ˣ������µıȽϴ����� 1 + 2 + 3 + ... + (N - 1)���Ȳ�������ͣ����Ϊ N^2 / 2
���������µĸ��Ӷ�Ϊ O(N^2)���������£������Ѿ�������ģ�ÿ����һ��Ԫ�أ�ֻ��Ҫ����ǰһ��Ԫ�أ�����������£����������ʱ�临�Ӷ�ΪO(N)��*/


//ֱ�Ӳ�������1
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

//�ڶ���д
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

/*�������
	��������ֱ�Ӳ���
	ϣ��ѡ������
	ѡ������ֱ��ѡ������
	������
	��������ð������
	��������
	�鲢����
	��������*/