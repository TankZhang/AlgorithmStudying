#include<stdio.h>

/*算法原理：首先以一个元素为基准，从一个方向开始扫描，比如从左至右扫描，以A[0]为基准。接下来从A[0]...A[9]
中找出最小的元素，将其与A[0]交换。然后将基准位置右移一位，重复上面的动作，比如，以A[1]为基准，找出
A[1]~A[9]中最小的，将其与A[1]交换。一直进行到基准位置移到数组最后一个元素时排序结束（此时基准左边所有元素
均递增有序，而基准为最后一个元素，故完成排序）。*/

/*稳定性分析：不稳定。举个例子，序列5 3 5 2 9-->3,5(1),5,2,9-->2,5(1),5,3,9-->2,3,5,5(1),9。此处前后的5交换了*/

/*复杂度分析：平均情况O(n^2),最好情况O(n^2)，最坏情况O(n^2)，空间复杂度O(1)。
选择排序的交换操作介于 0 和 (n - 1） 次之间。选择排序的比较操作为 n (n - 1） / 2 次之间。选择排序的赋值操作介于 0 和 3 (n - 1） 次之间。
比较次数O(n^2），比较次数与关键字的初始状态无关，总的比较次数N=(n-1）+(n-2）+...+1=n*(n-1）/2。
交换次数O(n），最好情况是，已经有序，交换0次；最坏情况交换n-1次，逆序交换n/2次。
交换次数比冒泡排序少多了，由于交换所需CPU时间比比较所需的CPU时间多，n值较小时，选择排序比冒泡排序快。*/

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