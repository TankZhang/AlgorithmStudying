using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0613HanNuo
{
    class Program
    {
        static void Main(string[] args)
        {
            Go(8, 'A', 'B', 'C');
            Console.WriteLine("请按任意键退出……");
            Console.ReadKey();
        }

        public static int i = 0;

        static void Go(int sum, char start, char inter, char end)
        {
            //如果sum为1，则直接从开始移植到结束
            if (sum == 1)
            { Display(1, start, end); }
            else
            {
                //1、将sum-1个盘子从A借助C到B
                Go(sum - 1, start, end, inter);
                //2、将A上的第sum个盘子从A直接移到C
                Display(sum, start, end);
                //3、将B上的sum-1个盘子从B借助A移到C
                Go(sum - 1, inter, start, end);
            }
        }

        //显示函数
        static void Display(int n, char start, char end)
        {
            Console.WriteLine("第{0,3}步：{1,2}号  {2}->{3}", i++, n, start, end);
        }

    }
}
