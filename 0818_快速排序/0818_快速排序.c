#include<stdio.h>

/*�㷨ԭ����������quick sort���������ַ����У� n ��Ԫ�ر��ֳ����Σ��飩�����left��
		   �Ҷ�right���ж�middle���жν�����һ��Ԫ�ء�����и�Ԫ�ض�С�ڵ����ж�Ԫ�أ�
		   �Ҷ��и�Ԫ�ض����ڵ����ж�Ԫ�ء����left��right�е�Ԫ�ؿ��Զ�������
		   ���Ҳ��ض�left��right�����������кϲ���ʹ�ÿ������򷽷���a[0:n-1]����
		   ��a[0:n-1]��ѡ��һ��Ԫ����Ϊmiddle����Ԫ��Ϊ֧������µ�Ԫ�طָ�Ϊ����left��right��
		   ʹ��left�е�Ԫ�ض�С�ڵ���֧�㣬��right �е�Ԫ�ض����ڵ���֧��ݹ��ʹ�ÿ������򷽷���left
		   ��������ݹ��ʹ�ÿ������򷽷���right �����������ý��Ϊleft+middle+right*/

		   /*�ȶ��Է��������ȶ�������2 3 3' 1->1 3 3' 1->1 3 3' 3->1 2 3' 3--��2�ֿ���������-->1 2 3' 3*/

		   /*���Ӷȷ�����http://blog.csdn.net/matrix_laboratory/article/details/9342415
						��������ÿ�ν������������Ϊ�������֣�������״���£�ÿһ�ζ������������黮�ֳɵȳ��������֣�
						����Ҫlogn�λ��֡����������£��������Ѿ������������������£�ÿ�λ���ֻ�ܼ���һ��Ԫ�أ�
						�������򽫲����˻�Ϊð���������Կ�������ʱ�临�Ӷ��½�ΪO(nlogn)������ΪO(n^2)��
						��ʵ��Ӧ���У����������ƽ��ʱ�临�Ӷ�ΪO(nlogn)��
						���������ڶ����еĲ���������ֻ�軨�ѳ������Ŀռ䡣�ռ临�Ӷ�S(1)��
						����Ҫע��ݹ�ջ����Ҫ��������logn���n�Ŀռ䡣*/

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