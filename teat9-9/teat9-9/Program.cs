using System;

namespace teat9_9
{
    class Program
    {
        static void Main(string[] args)
        {
            string StudentId;
            string stuName;
            string Enil;
            string Math;
            string Chinese;

            int tal;
            double avg;

            int ee;
            int cc;
            int mm;

            double e;
            double c;
            double m;

            //01
            //Console.WriteLine("请输入您的学号：");//不与学号在一行
            Console.Write("请输入您的学号：");
            StudentId = Console.ReadLine();
            //输入姓名的过程
            Console.Write("请输入您的姓名：");
            stuName = Console.ReadLine();
            //输入成绩
            Console.Write("请输入您的英语成绩：");
            Enil = Console.ReadLine();
            Console.Write("请输入您的语文成绩：");
            Chinese = Console.ReadLine();
            Console.Write("请输入您的数学成绩：");
            Math = Console.ReadLine();
            //求总成绩
            tal = int.Parse(Enil) + int.Parse(Chinese) + int.Parse(Math);//数据类型转换
            //tal = Enil + Chinese + Math;Convert.ToDouble()
            //tal = Enil + Chinese + Math;
            //求平均分
            avg = Convert.ToDouble(tal) / 3;

            //02
            //Console.WriteLine("请输入您的学号：");//不与学号在一行
            Console.Write("请输入您的学号：");
            StudentId = Console.ReadLine();
            //输入姓名的过程
            Console.Write("请输入您的姓名：");
            stuName = Console.ReadLine();
            //输入成绩
            Console.Write("请输入您的英语成绩：");
            ee =int.Parse( Console.ReadLine());
            Console.Write("请输入您的语文成绩：");
            cc = int.Parse(Console.ReadLine());
            Console.Write("请输入您的数学成绩：");
            mm = int.Parse(Console.ReadLine());
            //求总成绩
            tal = ee + cc + mm  ;//数据类型转换
            //tal = Enil + Chinese + Math;Convert.ToDouble()
            //tal = Enil + Chinese + Math;
            //求平均分
            avg = Convert.ToDouble(tal) / 3;

            //03
            //Console.WriteLine("请输入您的学号：");//不与学号在一行
            Console.Write("请输入您的学号：");
            StudentId = Console.ReadLine();
            //输入姓名的过程
            Console.Write("请输入您的姓名：");
            stuName = Console.ReadLine();
            //输入成绩
            Console.Write("请输入您的英语成绩：");
            e = double.Parse(Console.ReadLine());
            Console.Write("请输入您的语文成绩：");
            c = double.Parse(Console.ReadLine());
            Console.Write("请输入您的数学成绩：");
            m = double.Parse(Console.ReadLine());
            //求总成绩
            tal= (int)e + (int)c + (int)m;//数据类型转换
            //tal = Enil + Chinese + Math;Convert.ToDouble()
            //tal = Enil + Chinese + Math;
            //求平均分
            avg = Convert.ToDouble(tal) / 3;

            Console.WriteLine("{0},{1}",tal,avg);//{}占位符
            // Console.WriteLine(avg);
            Console.ReadKey();
            //输出学生成绩
            Console.WriteLine("--------------------------------------------");
            Console.WriteLine("|   学号   | 姓名 |语文|数学|英语|总分|平均分|");
            Console.WriteLine("--------------------------------------------");
            Console.WriteLine("|{0}|{1}| {2} | {3} | {4} | {5} |  {6}  |", StudentId, stuName, Chinese, Math, Enil, tal, avg);
            Console.WriteLine("--------------------------------------------");
            Console.ReadLine();

        }
    }
}
