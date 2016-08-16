#include <stdio.h>

/*�㷨ԭ��ϣ�������ǰ��ղ�ͬ������Ԫ�ؽ��в������򣬵��տ�ʼԪ�غ������ʱ�򣬲���������Բ��������Ԫ�ظ������٣��ٶȺܿ죻
��Ԫ�ػ��������ˣ�������С�� ��������������������Ч�ʺܸߡ����ԣ�ϣ�������ʱ�临�ӶȻ��o(n^2)��һЩ��*/

/*�ȶ��Է��������ȶ������ڶ�β�����������֪��һ�β����������ȶ��ģ�����ı���ͬԪ �ص����˳�򣬵��ڲ�ͬ�Ĳ�����������У�
��ͬ��Ԫ�ؿ����ڸ��ԵĲ����������ƶ���������ȶ��Ծͻᱻ���ң�����shell�����ǲ��ȶ��ġ�
����3��1��2��2'��4��5-->2',1,2,3,4,5-->2',1,2,3,4,5-->1,2',2,3,4,5*/

/*���Ӷȷ�����Shell����ͨ�������ݷֳɲ�ͬ���飬�ȶ�ÿһ���������Ȼ���ٶ����е�Ԫ�ؽ���һ�β�������
�Լ������ݽ������ƶ��Ĵ�����ƽ��Ч����O(nlogn)�����з���ĺ����Ի���㷨������Ҫ��Ӱ�졣���ڶ���D.E.Knuth�ķ��鷽����
Shell�����ð�������5�����Ȳ���������¿�2����Shell�������QuickSort��MergeSort��HeapSort���ܶࡣ
��������ԱȽϼ򵥣����ʺ�����������5000���²����ٶȲ������ر���Ҫ�ĳ��ϡ���������������С�������ظ������Ƿǳ��õġ�*/

//1st
void ShellSort(int nums[], int n)
{
	int i, j, gap;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j] < nums[j - gap])
				{
					int temp = nums[j];
					int k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//2nd
void ShellSort2(int nums[], int n)
{
	int i, j, gap;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j] < nums[j - gap])
				{
					int temp = nums[j];
					int k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}

}
//3rd
void ShellSort3(int nums[], int n)
{
	int i, j, k, gap, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//4th
void ShellSort4(int nums[], int n)
{
	int i, j, k, temp, gap;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//5th
void ShellSort5(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//6th
void ShellSort6(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//7th
void ShellSort7(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}

}
//8th
void ShellSort8(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//9th
void ShellSort9(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//10th
void ShellSort10(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}
//11th
void ShellSort11(int nums[], int n)
{
	int gap, i, j, k, temp;
	for (gap = n / 2; gap > 0; gap /= 2)
		for (i = 0; i < gap; i++)
			for (j = i + gap; j < n; j += gap)
				if (nums[j - gap] > nums[j])
				{
					temp = nums[j];
					k = j - gap;
					while (k >= 0 && nums[k] > temp)
					{
						nums[k + gap] = nums[k];
						k -= gap;
					}
					nums[k + gap] = temp;
				}
}

int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	ShellSort11(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
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