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
            GetMaxAppleMain();
            Console.WriteLine("请按任意键退出……");
            Console.ReadKey();
        }

        static void GetMaxAppleMain()
        {
            int[,] map = { { 0, 0, 1, 0, 2, 0, 0 }, { 0, 2, 0, 3, 0, 4, 0 }, { 0, 1, 2, 0, 5, 0, 0 }, { 1, 0, 7, 0, 8, 0, 0 }, { 3, 0, 4, 4, 5, 0, 0 }, { 6, 1, 0, 0, 3, 0, 2 } };
            Console.WriteLine(GetMaxApple(map));
        }
        //二维矩阵得到最多苹果
        static int GetMaxApple(int[,] map)
        {
            //初始化二维矩阵储存当前最大值，并将【0，0】赋值为当前的map【0，0】
            int[,] maxApple=(int[,])map.Clone();
            Array.Clear(maxApple, 0, maxApple.Length);
            maxApple[0, 0] = map[0, 0];

            int row = maxApple.GetLength(0);
            int column = maxApple.GetLength(1);
            //按行遍历map
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    //如果非首行，则判断上面来的路径的最大值和当前值比较。
                    if (i > 0)
                        maxApple[i, j] = maxApple[i - 1, j] + map[i, j] > maxApple[i, j] ? maxApple[i - 1, j] + map[i, j] : maxApple[i, j];
                    //如果非首列，则判断左面路径的最大值和当前值比较。
                    if (j > 0)
                        maxApple[i, j] = maxApple[i, j - 1] + map[i, j] > maxApple[i, j] ? maxApple[i, j - 1] + map[i, j] : maxApple[i, j];
                }
            }

            //遍历maxApple的最下行和最右列，找到最大值输出。
            int max = 0;
            for (int i = 0; i < row; i++)
            {
                max = max > maxApple[i, column - 1] ? max : maxApple[i, column - 1];
            }
            for (int i = 0; i < column; i++)
            {
                max = max > maxApple[row - 1, i] ? max : maxApple[row - 1, i];
            }
            return max;
        }

        static void GetLISMain()
        {
            List<int> list = new List<int>();
            int[] l = { 5, 3, 4, 8, 6, 7 };
            list = l.ToList<int>();
            Console.WriteLine(GetLIS(list));
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
