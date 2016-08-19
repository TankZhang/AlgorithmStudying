#include<stdio.h>

/*�㷨ԭ��������һ��Ԫ��Ϊ��׼����һ������ʼɨ�裬�����������ɨ�裬��A[0]Ϊ��׼����������A[0]...A[9]
���ҳ���С��Ԫ�أ�������A[0]������Ȼ�󽫻�׼λ������һλ���ظ�����Ķ��������磬��A[1]Ϊ��׼���ҳ�
A[1]~A[9]����С�ģ�������A[1]������һֱ���е���׼λ���Ƶ��������һ��Ԫ��ʱ�����������ʱ��׼�������Ԫ��
���������򣬶���׼Ϊ���һ��Ԫ�أ���������򣩡�*/

/*�ȶ��Է��������ȶ����ٸ����ӣ�����5 3 5 2 9-->3,5(1),5,2,9-->2,5(1),5,3,9-->2,3,5,5(1),9���˴�ǰ���5������*/

/*���Ӷȷ�����ƽ�����O(n^2),������O(n^2)������O(n^2)���ռ临�Ӷ�O(1)��
ѡ������Ľ����������� 0 �� (n - 1�� ��֮�䡣ѡ������ıȽϲ���Ϊ n (n - 1�� / 2 ��֮�䡣ѡ������ĸ�ֵ�������� 0 �� 3 (n - 1�� ��֮�䡣
�Ƚϴ���O(n^2�����Ƚϴ�����ؼ��ֵĳ�ʼ״̬�޹أ��ܵıȽϴ���N=(n-1��+(n-2��+...+1=n*(n-1��/2��
��������O(n�����������ǣ��Ѿ����򣬽���0�Σ���������n-1�Σ����򽻻�n/2�Ρ�
����������ð�������ٶ��ˣ����ڽ�������CPUʱ��ȱȽ������CPUʱ��࣬nֵ��Сʱ��ѡ�������ð������졣*/

//1st
void SelectSort(int nums[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (nums[j] < nums[i])
			{
				nums[j] = nums[j] + nums[i];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
//2nd
void SelectSort2(int nums[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (nums[j] < nums[i])
			{
				nums[j] = nums[j] + nums[i];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
//3rd
void SelectSort3(int nums[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (nums[j] < nums[i])
			{
				nums[j] = nums[i] + nums[j];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
//4th
void SelectSort4(int nums[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (nums[j] < nums[i])
			{
				nums[j] = nums[j] + nums[i];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
//5th
void SelectSort5(int nums[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (nums[i] > nums[j])
			{
				nums[j] = nums[i] + nums[j];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
//6th
void SelectSort6(int ns[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (ns[j] < ns[i])
			{
				ns[j] = ns[i] + ns[j];
				ns[i] = ns[j] - ns[i];
				ns[j] = ns[j] - ns[i];
			}
}
//7th
void SelectSort7(int nums[], int n)
{
	int i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if (nums[j] < nums[i])
			{
				nums[j] = nums[i] + nums[j];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
}
int main()
{

	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	SelectSort7(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	getchar();
	return 0;
}