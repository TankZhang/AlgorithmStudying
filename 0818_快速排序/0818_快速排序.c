#include<stdio.h>

/*算法原理：快速排序（quick sort）。在这种方法中， n 个元素被分成三段（组）：左段left，
		   右段right和中段middle。中段仅包含一个元素。左段中各元素都小于等于中段元素，
		   右段中各元素都大于等于中段元素。因此left和right中的元素可以独立排序，
		   并且不必对left和right的排序结果进行合并。使用快速排序方法对a[0:n-1]排序
		   从a[0:n-1]中选择一个元素作为middle，该元素为支点把余下的元素分割为两段left和right，
		   使得left中的元素都小于等于支点，而right 中的元素都大于等于支点递归地使用快速排序方法对left
		   进行排序递归地使用快速排序方法对right 进行排序所得结果为left+middle+right*/

		   /*稳定性分析：不稳定，反例2 3 3' 1->1 3 3' 1->1 3 3' 3->1 2 3' 3--以2分开继续快排-->1 2 3' 3*/

		   /*复杂度分析：http://blog.csdn.net/matrix_laboratory/article/details/9342415
						快速排序每次将待排序数组分为两个部分，在理想状况下，每一次都将待排序数组划分成等长两个部分，
						则需要logn次划分。而在最坏情况下，即数组已经有序或大致有序的情况下，每次划分只能减少一个元素，
						快速排序将不幸退化为冒泡排序，所以快速排序时间复杂度下界为O(nlogn)，最坏情况为O(n^2)。
						在实际应用中，快速排序的平均时间复杂度为O(nlogn)。
						快速排序在对序列的操作过程中只需花费常数级的空间。空间复杂度S(1)。
						但需要注意递归栈上需要花费最少logn最多n的空间。*/

//1st
void QuikSort1(int ns[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, temp = ns[l];
		while (i < j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuikSort1(ns, l, i - 1);
		QuikSort1(ns, i + 1, r);
	}
}
//2nd
void QuikSort2(int ns[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, temp = ns[l];
		while (i < j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuikSort2(ns, l, i - 1);
		QuikSort2(ns, i + 1, r);
	}
}
//3rd
void QuikSort3(int ns[], int l, int r)
{
	if (l < r)
	{
		int i=l,j=r, temp = ns[l];
		while (i<j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuikSort3(ns, l, i - 1);
		QuikSort3(ns, i + 1, r);
	}
}
//4th
void QuikSort4(int ns[], int l, int r)
{
	if (l < r)
	{
		int i=l, j=r, temp=ns[l];
		while (i<j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuikSort4(ns, l, i-1);
		QuikSort4(ns, i+1,r);		
	}
}
//5th
void QuickSort5(int ns[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, temp = ns[l];
		while (i<j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuickSort5(ns, l, i - 1);
		QuickSort5(ns, i+1, r);
	}
}
//6th
void QuickSort6(int ns[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, temp = ns[l];
		while (i<j)
		{
			while (i < j&&ns[j] >= temp)
				j--;
			if (i < j)
				ns[i++] = ns[j];
			while (i < j&&ns[i] < temp)
				i++;
			if (i < j)
				ns[j--] = ns[i];
		}
		ns[i] = temp;
		QuickSort6(ns, l, i - 1);
		QuickSort6(ns, i + 1, r);
	}
}
int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10, l = 0, r = 9;
	QuickSort6(nums, l, r);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	getchar();
	return 0;
}