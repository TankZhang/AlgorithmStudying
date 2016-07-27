// 0727_ð������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

/*ð������ѭ��n�ν���ǰ��ֵ��i����flagΪtrue��
ѭ����iʱ�����Ƚ�flag����false��Ȼ���j=1��n-i���ж�nums[j-1]��nums[j]�����ǰ�ߴ��򽻻�����flagΪtrue��������n-i���Ρ�
��û�н�����Ҳ����flagһֱΪfalseʱ���Ѿ��ź�����ѭ��ֹͣ*/

/*ʱ�临�Ӷȡ�ƽ�������O(n^2)����������O(n)����������O(n^2)�������ռ䣺O(1)���ȶ��ԣ��ȶ���*/

/*ʱ�临�Ӷȷ����������ѭ��ִ�� N - 1�Ρ��ڲ�ѭ������ʱ��ִ��N-i�Σ����ٵ�ʱ��ִ��1�Σ�ƽ��ִ�� (N+1)/2�Ρ�
����ѭ�����ڵıȽϽ���Լִ�� (N - 1)(N + 1) / 2 = (N^2 - 1)/2������N^2�Ƿ���Latex�еļǷ�����ʾN��ƽ������
���ռ��㸴�Ӷȵ�ԭ��ȥ��������ȥ�������ϵ�����临�Ӷ�ΪO(N^2)��*/

//ð��1
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

//ð��1�ظ�
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

//ð��2
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

//ð��2_1
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

