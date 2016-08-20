#include<stdio.h>

/*�㷨ԭ��http://blog.csdn.net/morewindows/article/details/6709644
		   �Ը��ӣ��õ��������ݽṹ�����ϵ������*/

/*�ȶ��Է��������ȶ�������3 27 36 27'������Ѷ�3���������27'�ܵ��Ѷ���Ȼ����ȶ���
			��������Ѷ���27'������˵��27'����27��������ȶ���*/

/*���Ӷȷ�����http://blog.csdn.net/mikon_lee/article/details/12313355
			���������������:1.������2.�Ѷ�Ԫ������е����һ��Ԫ�ؽ������ؽ��ѡ�
			��һ�����Ӷ�O(n).
			�ڶ������ܹ�����n-1�Σ�ÿ���ؽ��ѵĸ��Ӷ���logn,���Եڶ����ĸ��Ӷ�Ϊ[log(n-1)+log(n-2)+...+log(2)]<nlogn
			��˶��ŵ��㷨���Ӷ�<O(n)+nlogn,Ҳ�ͽ��Ƶ���Ϊ��nlogn��
			�ռ临�Ӷ�O(1)*/

//��i�ڵ㿪ʼ����,nΪ�ڵ����� ��0��ʼ���� i�ڵ���ӽڵ�Ϊ 2*i+1, 2*i+2  
void MaxHeapFixdown1(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i + 1;
	while (j < n)
	{
		if (j + 1 < n && a[j + 1] >= a[j]) //�����Һ�����������  
			j++;
		if (a[j] < temp)
			break;
		a[i] = a[j];     //�ѽϴ���ӽ�������ƶ�,�滻���ĸ����  
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}

//����
void MaxHeapSort1(int a[], int n)
{
	//��������
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