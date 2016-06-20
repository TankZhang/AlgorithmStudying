using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0620MergeSort
{
    class Program
    {
        static void Main(string[] args)
        {
            MergeSortMain();
            Console.ReadKey();
        }

        static int count;
        public const int N = 20;
        //归并排序加逆序数求解
        static void MergeSortMain()
        {
            count = 0;
            int[] a = new int[N];
            int[] temp = new int[N];
            int num = 3;
            Random ran = new Random();
            Console.WriteLine("输入的序列为：");
            for (int i = 0; i <= num; i++)
            {
                a[i] = ran.Next(30);
                Console.Write(a[i] + ",");
            }

            MergeSort(a, 0, num, temp);

            Console.WriteLine("\n排序后：");
            for (int i = 0; i <= num; i++)
            {
                Console.Write(a[i] + ",");
            }
            Console.WriteLine("\n逆序数为：" + count);
        }

        private static void MergeSort(int[] a, int start, int end, int[] temp)
        {
            if (start < end)
            {
                int mid = (start + end) / 2;
                MergeSort(a, start, mid, temp);
                MergeSort(a, mid + 1, end, temp);
                MergeArray(a, start, mid, end, temp);
            }
        }

        private static void MergeArray(int[] a, int start, int mid, int end, int[] temp)
        {
            int i = start, j = mid + 1, m = mid, n = end, k = 0;
            while (i <= m && j <= n)
            {
                if (a[i] < a[j])
                 temp[k++] = a[i++]; 
                else { temp[k++] = a[j++]; count += m - i + 1; }
            }
            while (i <= m)
                temp[k++] = a[i++];
            while (j <= n)
                temp[k++] = a[j++];
            for (int ii = 0; ii < k; ii++)
                a[start + ii] = temp[ii];
        }
    }
}
