#include <stdio.h>

/*算法原理：希尔排序是按照不同步长对元素进行插入排序，当刚开始元素很无序的时候，步长最大，所以插入排序的元素个数很少，速度很快；
当元素基本有序了，步长很小， 插入排序对于有序的序列效率很高。所以，希尔排序的时间复杂度会比o(n^2)好一些。*/

/*稳定性分析：不稳定。由于多次插入排序，我们知道一次插入排序是稳定的，不会改变相同元 素的相对顺序，但在不同的插入排序过程中，
相同的元素可能在各自的插入排序中移动，最后其稳定性就会被打乱，所以shell排序是不稳定的。
反例3，1，2，2'，4，5-->2',1,2,3,4,5-->2',1,2,3,4,5-->1,2',2,3,4,5*/

/*复杂度分析：Shell排序通过将数据分成不同的组，先对每一组进行排序，然后再对所有的元素进行一次插入排序，
以减少数据交换和移动的次数。平均效率是O(nlogn)。其中分组的合理性会对算法产生重要的影响。现在多用D.E.Knuth的分组方法。
Shell排序比冒泡排序快5倍，比插入排序大致快2倍。Shell排序比起QuickSort，MergeSort，HeapSort慢很多。
但是它相对比较简单，它适合于数据量在5000以下并且速度并不是特别重要的场合。它对于数据量较小的数列重复排序是非常好的。*/

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

/*排序分类
	插入排序：直接插入
	希尔选择排序
	选择排序：直接选择排序
	堆排序
	交换排序：冒泡排序
	快速排序
	归并排序
	基数排序*/