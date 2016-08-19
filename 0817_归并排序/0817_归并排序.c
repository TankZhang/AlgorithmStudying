#include <stdio.h>
#include<malloc.h>

/*�㷨ԭ��Divide: �ѳ���Ϊn���������зֳ���������Ϊn/2�������С�
		   Conquer: �������������зֱ���ù鲢����
		   Combine: ����������õ������кϲ���һ�����յ��������С�*/

		   /*�ȶ��Է������ȶ�*/

		   /*���Ӷȷ�����http://xwrwc.blog.163.com/blog/static/46320003201141582544245/
						�鲢�������á����ƽ��ʱ�临�Ӷȶ���O(nlogn)�����ռ临�Ӷ���O(n)��
						�Ƚϴ�������(nlogn)/2��(nlogn)-n+1����ֵ�����Ĵ�����(2nlogn)��
						��˿��Կ������鲢�����㷨�Ƚ�ռ���ڴ棬��ȴ��Ч�ʸ����ȶ��������㷨��*/
						//1st
void Merge1(int *nums, int low, int m, int high)
{
	int i = low, j = m + 1, p = 0;
	int *nums1;
	nums1 = (int *)malloc((high - low + 1) * sizeof(int));
	while (i <= m&&j <= high)
		nums1[p++] = (nums[i] <= nums[j]) ? nums[i++] : nums[j++];
	while (i <= m)
		nums1[p++] = nums[i++];
	while (j <= high)
		nums1[p++] = nums[j++];
	for (p = 0, i = low; i <= high; p++, i++)
		nums[i] = nums1[p];
}
void MergeSort1(int nums[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		MergeSort1(nums, low, mid);
		MergeSort1(nums, mid + 1, high);
		Merge1(nums, low, mid, high);
	}
}
//2nd
void Merge2(int *n, int l, int m, int h)
{
	int i = l, j = m + 1, p = 0;
	int *n1;
	n1 = (int *)malloc((h - l + 1) * sizeof(int));
	while (i <= m&&j <= h)
		n1[p++] = (n[i] <= n[j]) ? n[i++] : n[j++];
	while (i <= m)
		n1[p++] = n[i++];
	while (j <= h)
		n1[p++] = n[j++];
	for (p = 0, i = l; i <= h; p++, i++)
		n[i] = n1[p];
}
void MergeSort2(int *n, int l, int h)
{
	if (l < h)
	{
		int m = (l + h) / 2;
		MergeSort2(n, l, m);
		MergeSort2(n, m + 1, h);
		Merge2(n, l, m, h);
	}
}
//3rd
void Merge3(int *n, int l, int m, int h)
{
	int *temp;
	temp = (int *)malloc((h - l + 1) * sizeof(int));
	int i = l, j = m + 1, k = 0;
	while (i <= m&&j <= h)
		temp[k++] = n[i] < n[j] ? n[i++] : n[j++];
	while (i <= m)
		temp[k++] = n[i++];
	while (j <= h)
		temp[k++] = n[j++];
	for (i = 0, j = l; j <= h; i++, j++)
		n[j] = temp[i];
}
void MergeSort3(int *n, int l, int h)
{
	if (l < h)
	{
		int m = (l + h) / 2;
		MergeSort3(n, l, m);
		MergeSort3(n, m + 1, h);
		Merge3(n, l, m, h);
	}
}
//4th
void Merge4(int ns[], int l, int m, int h)
{
	int* temp;
	temp = (int *)malloc((h - l + 1) * sizeof(int));
	int i = l, j = m+1, k = 0;
	while (i <= m&&j <=h)
		temp[k++] = ns[i] < ns[j] ? ns[i++] : ns[j++];
	while (i <= m)
		temp[k++] = ns[i++];
	while (j <= h)
		temp[k++] = ns[j++];
	for (i = l, k = 0; i <= h; i++, k++)
		ns[i] = temp[k];
}
void MergeSort4(int ns[], int l, int h)
{
	if (l < h)
	{
		int m = (l + h) / 2;
		MergeSort4(ns, l, m);
		MergeSort4(ns, m + 1, h);
		Merge4(ns, l, m, h);
	}
}

int main()
{
	int nums[10] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int low = 0;
	int high = 9;
	int n = 10;

	MergeSort4(nums, low, high);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	getchar();
	return 0;
}