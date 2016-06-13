using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0613DPProblem
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> list = new List<int>();
            int[] l = { 5, 3, 4, 8, 6, 7 };
            list = l.ToList<int>();
            Console.WriteLine(GetLIS(list));
            Console.WriteLine("请按任意键退出……");
            Console.ReadKey();
        }



        //LIS问题。 list表示已有的数组，加一个数要么多一个要么和原来一致
        static int GetLIS(List<int> list)
        {
            //初始化一个最大值矩阵
            List<int> listMax = new List<int>();
            for (int i = 0; i < list.Count; i++)
            {
                listMax.Add(1);
            }
            for (int i = 0; i < list.Count; i++)
            {
                //判断在某一个j时候list[j]<=list[i]，这种情况下，最大值为listMax【j】+1。否则为原值。
                for (int j = i - 1; j >= 0; j--)
                {
                    if (list[j] <= list[i])
                    {
                        listMax[i] = listMax[j] + 1 > listMax[i] ? listMax[j] + 1 : listMax[i];
                    }
                }
            }
            return listMax[list.Count - 1];
        }

        //1，3，5硬币最少需要几个多少
        static int GetLeastCoin(int sum)
        {
            //初始化最小值数组，将除0以外的最小值设置为int的最大值。
            List<int> min = new List<int>();
            min.Add(0);
            for (int i = 0; i < sum; i++)
            {
                min.Add(int.MaxValue);
            }
            //硬币的币值
            int[] v = { 1, 3, 5 };
            //从总数为1开始到最终需要的sum。
            for (int i = 0; i <= sum; i++)
            {
                //每个硬币进行尝试
                for (int j = 0; j < 3; j++)
                {
                    //如果可以加一个当前硬币，并且加上之后整体的min会变小，则采用当前的min
                    if (i - v[j] >= 0 && min[i - v[j]] + 1 < min[i])
                        min[i] = min[i - v[j]] + 1;
                }
            }
            return min[sum];
        }
    }
}
