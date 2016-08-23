#include<stdio.h>

/*算法原理：http://blog.csdn.net/morewindows/article/details/6709644
		   略复杂，用到类似数据结构，不断调整输出
		   堆的定义 n 个元素的序列 {k1,k2,...,kn}当且仅当满足下列关系时，
			称为堆:
			ki<=k2i     ki<=k2i+1     (i=1,2,...,n/2)
			或
			ki>=k2i     ki>=k2i+1     (i=1,2,...,n/2)
			堆排序思路：
			建立在树形选择排序基础上；
			将待排序列建成堆（初始堆生成）后，序列的第一个元素（堆顶元素）就一定是序列中的最大元素；
			将其与序列的最后一个元素交换，将序列长度减一；
			再将序列建成堆（堆调整）后，堆顶元素仍是序列中的最大元素，再次将其与序列最后一个元素交换并缩短序列长度；
			反复此过程，直至序列长度为一，所得序列即为排序后结果。*/

/*稳定性分析：不稳定，反例3 27 36 27'，如果堆顶3先输出，则，27'跑到堆顶，然后堆稳定，
			继续输出堆顶，27'，这样说明27'先于27输出，不稳定。*/

/*复杂度分析：http://blog.csdn.net/mikon_lee/article/details/12313355
			堆排由两部分组成:1.建初堆2.堆顶元素与堆中的最后一个元素交换并重建堆。
			第一步复杂度O(n).
			第二步：总共交换n-1次，每次重建堆的复杂度是logn,所以第二步的复杂度为[log(n-1)+log(n-2)+...+log(2)]<nlogn
			因此堆排的算法复杂度<O(n)+nlogn,也就近似的认为是nlogn。
			空间复杂度O(1)*/

//1st
//从i节点开始调整,n为节点总数 从0开始计算 i节点的子节点为 2*i+1, 2*i+2  
void Fix1(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i + 1;
	while (j < n)
	{
		if (j + 1 < n && a[j + 1] >= a[j]) //在左右孩子中找最大的  
			j++;
		if (a[j] < temp)
			break;
		a[i] = a[j];     //把较大的子结点往上移动,替换它的父结点  
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}
//排序
void HeapSort1(int a[], int n)
{
	//建立最大堆
	for (int i = n / 2 - 1; i >= 0; i--)
		Fix1(a, i, n);
	for (int i = n - 1; i >= 1; i--)
	{
		a[i] = a[i] + a[0];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		Fix1(a, 0, i);
	}
}
//2nd
void Fix2(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i + 1;
	while (j<n)
	{
		if (j + 1 < n&&a[j + 1] >= a[j])
			j++;
		if (a[j] < temp)
			break;
		a[i] = a[j];
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}
void HeapSort2(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Fix2(a, i, n);
	for (int i = n-1; i > 0; i--)
	{
		a[i] = a[i] + a[0];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		Fix2(a, 0, i);
	}
}
//3rd
void Fix3(int a[], int i, int n)
{
	int j = 2 * i + 1, temp = a[i];
	while (j<n)
	{
		if (j + 1 < n&&a[j + 1] > a[j])
			j++;
		if (a[j] < temp)
			break;
		a[i] = a[j];
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}
void HeapSort3(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Fix3(a, i, n);
	for (int i = n - 1; i > 0; i--)
	{
		a[i] = a[i] + a[0];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		Fix3(a, 0, i);
	}
}
//4th
void Fix4(int a[], int i, int n)
{
	int j = 2 * i + 1, temp = a[i];
	while(j<n)
	{
		if (j + 1 < n&&a[j + 1] > a[j])
			j++;
		if (a[j] <= temp)
			break;
		a[i] = a[j];
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;	
}
void HeapSort4(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Fix4(a, i, n);
	for (int i = n - 1; i > 0; i--)
	{
		a[i] = a[i] + a[0];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		Fix4(a, 0, i);
	}
}
//5th
void Fix5(int a[], int i, int n)
{
	int j = 2 * i + 1, temp = a[i];
	while (j<n)
	{
		if (j + 1 < n&&a[j + 1] > a[j])
			j++;
		if (a[j] <= temp)
			break;
		a[i] = a[j];
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}
void HeapSort5(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Fix5(a, i, n);
	for (int i = n - 1; i > 0; i--)
	{
		a[i] = a[0] + a[i];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		Fix5(a, 0, i);
	}
}
int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	HeapSort5(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	getchar();
	return 0;
}