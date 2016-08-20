#include<stdio.h>

/*算法原理：http://blog.csdn.net/morewindows/article/details/6709644
		   略复杂，用到类似数据结构，不断调整输出*/

/*稳定性分析：不稳定，反例3 27 36 27'，如果堆顶3先输出，则，27'跑到堆顶，然后堆稳定，
			继续输出堆顶，27'，这样说明27'先于27输出，不稳定。*/

/*复杂度分析：http://blog.csdn.net/mikon_lee/article/details/12313355
			堆排由两部分组成:1.建初堆2.堆顶元素与堆中的最后一个元素交换并重建堆。
			第一步复杂度O(n).
			第二步：总共交换n-1次，每次重建堆的复杂度是logn,所以第二步的复杂度为[log(n-1)+log(n-2)+...+log(2)]<nlogn
			因此堆排的算法复杂度<O(n)+nlogn,也就近似的认为是nlogn。
			空间复杂度O(1)*/

//从i节点开始调整,n为节点总数 从0开始计算 i节点的子节点为 2*i+1, 2*i+2  
void MaxHeapFixdown1(int a[], int i, int n)
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
void MaxHeapSort1(int a[], int n)
{
	//建立最大堆
	for (int i = n / 2 - 1; i >= 0; i--)
		MaxHeapFixdown1(a, i, n);
	for (int i = n - 1; i >= 1; i--)
	{
		a[i] = a[i] + a[0];
		a[0] = a[i] - a[0];
		a[i] = a[i] - a[0];
		MaxHeapFixdown1(a, 0, i);
	}
}

int main()
{
	int nums[] = { 49, 38, 65, 97, 26, 13, 27, 49, 55, 4 };
	int n = 10;
	MaxHeapSort1(nums, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", nums[i]);
	}
	getchar();
	return 0;
}