#include<stdio.h>

/*�㷨ԭ��http://blog.csdn.net/morewindows/article/details/6709644
		   �Ը��ӣ��õ��������ݽṹ�����ϵ������
		   �ѵĶ��� n ��Ԫ�ص����� {k1,k2,...,kn}���ҽ����������й�ϵʱ��
			��Ϊ��:
			ki<=k2i     ki<=k2i+1     (i=1,2,...,n/2)
			��
			ki>=k2i     ki>=k2i+1     (i=1,2,...,n/2)
			������˼·��
			����������ѡ����������ϣ�
			���������н��ɶѣ���ʼ�����ɣ������еĵ�һ��Ԫ�أ��Ѷ�Ԫ�أ���һ���������е����Ԫ�أ�
			���������е����һ��Ԫ�ؽ����������г��ȼ�һ��
			�ٽ����н��ɶѣ��ѵ������󣬶Ѷ�Ԫ�����������е����Ԫ�أ��ٴν������������һ��Ԫ�ؽ������������г��ȣ�
			�����˹��̣�ֱ�����г���Ϊһ���������м�Ϊ���������*/

/*�ȶ��Է��������ȶ�������3 27 36 27'������Ѷ�3���������27'�ܵ��Ѷ���Ȼ����ȶ���
			��������Ѷ���27'������˵��27'����27��������ȶ���*/

/*���Ӷȷ�����http://blog.csdn.net/mikon_lee/article/details/12313355
			���������������:1.������2.�Ѷ�Ԫ������е����һ��Ԫ�ؽ������ؽ��ѡ�
			��һ�����Ӷ�O(n).
			�ڶ������ܹ�����n-1�Σ�ÿ���ؽ��ѵĸ��Ӷ���logn,���Եڶ����ĸ��Ӷ�Ϊ[log(n-1)+log(n-2)+...+log(2)]<nlogn
			��˶��ŵ��㷨���Ӷ�<O(n)+nlogn,Ҳ�ͽ��Ƶ���Ϊ��nlogn��
			�ռ临�Ӷ�O(1)*/

//1st
//��i�ڵ㿪ʼ����,nΪ�ڵ����� ��0��ʼ���� i�ڵ���ӽڵ�Ϊ 2*i+1, 2*i+2  
void Fix1(int a[], int i, int n)
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
void HeapSort1(int a[], int n)
{
	//��������
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