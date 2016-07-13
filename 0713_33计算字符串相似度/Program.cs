using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0713_33计算字符串相似度
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("请输入字符串a：");
            string a = Console.ReadLine();
            Console.WriteLine("请输入字符串b：");
            string b= Console.ReadLine();
            int distance = CalCulateStringDistance(a, 0, a.Length - 1, b, 0, b.Length - 1);
            Console.WriteLine("\"{0}\"与\"{1}\"两者的相似度为{2}",a,b,1.0/(distance+1));
            Console.ReadKey();
        }

        static int CalCulateStringDistance(string strA,int ABegin,int AEnd,string strB,int BBegin,int BEnd)
        {
            //经过一步之后如果A判断完了
            if(ABegin>AEnd)
            { if (BBegin > BEnd)
                    return 0;
                else
                    return BEnd - BBegin + 1;
            }
            //经过一步之后如果B判断完了
            if(BBegin>BEnd)
            {
                if (ABegin > AEnd)
                    return 0;
                else
                    return AEnd - ABegin + 1;
            }
            //如果当前的A【】和B【】相等了
            if(strA[ABegin]==strB[BBegin])
            {
                return CalCulateStringDistance(strA, ABegin + 1, AEnd, strB, BBegin + 1, BEnd);
            }
            //如果当前的A【】和B【】不相等，求他们B去一个和A去一个和A、B都去一个得到的值的最小值。
            else
            {
                int t1= CalCulateStringDistance(strA, ABegin + 1, AEnd, strB, BBegin + 1, BEnd);
                int t2 = CalCulateStringDistance(strA, ABegin , AEnd, strB, BBegin + 1, BEnd);
                int t3 = CalCulateStringDistance(strA, ABegin + 1, AEnd, strB, BBegin , BEnd);
                return Math.Min(Math.Min(t1, t2), t3)+1;
            }
        }
    }
}
