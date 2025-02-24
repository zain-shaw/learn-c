using System;
namespace ConsolAppHelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("hello world!");
            int a = 2025;
            Console.WriteLine("此代码创建于"+a);
            Console.WriteLine("请输入您的年龄：");
            string shuru=Console.ReadLine();
            int age;
            age=int.Parse(shuru);
            if(age<18)
            {
                Console.WriteLine("您未成年。");
            }
            else if(age>=18&&age<=26)
            {
                Console.WriteLine("您为青年。");
            }
            else
            {
                Console.WriteLine("你老了！");
            }
        }
    }
}