using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0613BigestHouse
{
    //得到最大的房子面积,连续的1为房顶，只有上下左右为连续。否则不为一个房子。
    class Program
    {
        static void Main(string[] args)
        {
            GetBigMain();
            Console.WriteLine("请按任意键退出……");
            Console.ReadKey();
        }

        static void GetBigMain()
        {
            int[,] grid = { { 0, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 0 } };
            Console.WriteLine(GetBig(grid));
        }

        //初始化一个最大面积的int类型。
        static int max = 0;
        static int maxTemp = 0;

        //设置变量保存行数目和列数目
        static int row = 0;
        static int column = 0;

        static int GetBig(int[,] grid)
        {
            //设置新的flag矩阵，然后初始化为0。
            int[,] flag = (int[,])grid.Clone();
            Array.Clear(flag, 0, flag.Length);

            //int[][] flag = (int[][])grid.clone();
            //for (int i = 0; i < row; i++)
            //{
            //    for (int j = 0; j < column; j++)
            //    {
            //        flag[i][j] = 0;
            //    }
            //}

            //获取行列
            row = flag.GetLength(0);
            column = flag.GetLength(1);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (grid[i, j] == 0 || flag[i, j] == 1)
                        continue;
                    //初始化临时最大面积为0
                    maxTemp = 0;
                    //初始化到来方向
                    int direc = 1;
                    while (Check(grid, flag, i, j, direc) != 0)
                    { }
                    max = max > maxTemp ? max : maxTemp;
                }
            }
            return max;
        }

        //处理所有与当前方块连续的不为0的数据,direc为来的方向，左上右下
        private static int Check(int[,] grid, int[,] flag, int i, int j, int direc)
        {
            maxTemp++;
            flag[i, j] = 1;
            if (direc != 1 && j > 0 && grid[i, j - 1] == 1 && flag[i, j - 1] == 0)
                Check(grid, flag, i, j - 1, 3);
            if (direc != 2 && i > 0 && grid[i - 1, j] == 1 && flag[i - 1, j] == 0)
                Check(grid, flag, i - 1, j, 4);
            if (direc != 3 && j < column - 1 && grid[i, j + 1] == 1 && flag[i, j + 1] == 0)
                Check(grid, flag, i, j + 1, 1);
            if (direc != 4 && i < row - 1 && grid[i + 1, j] == 1 && flag[i + 1, j] == 0)
                Check(grid, flag, i + 1, j, 2);
            return 0;
        }
    }
}
