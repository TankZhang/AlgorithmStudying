#include "stdafx.h"

/*�㷨ԭ��ð������ѭ��n�ν���ǰ��ֵ��i����flagΪtrue��
ѭ����iʱ�����Ƚ�flag����false��Ȼ���j=1��n-i���ж�nums[j-1]��nums[j]�����ǰ�ߴ��򽻻�����flagΪtrue��������n-i���Ρ�
��û�н�����Ҳ����flagһֱΪfalseʱ���Ѿ��ź�����ѭ��ֹͣ*/

/*ʱ�临�Ӷȣ�ƽ�������O(n^2)����������O(n)����������O(n^2)�������ռ䣺O(1)���ȶ��ԣ��ȶ���*/

/*���Ӷȷ����������ѭ��ִ�� N - 1�Ρ��ڲ�ѭ������ʱ��ִ��N-i�Σ����ٵ�ʱ��ִ��1�Σ�ƽ��ִ�� (N+1)/2�Ρ�
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

//ð��2_1
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

/*�������
	��������ֱ�Ӳ���
	ϣ��ѡ������
	ѡ������ֱ��ѡ������
	������
	��������ð������
	��������
	�鲢����
	��������*/