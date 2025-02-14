#include <stdio.h>
typedef unsigned int u_int;//typedef 表示用u_int重新定义unsigned int
extern int g_val;//声明外部文件变量
//extern int a_val;  无法声明，因为在static命令下此变量仅可在本文件内使用
extern int add(int, int);//还可以声明函数，但同样原理在static命令下则不可用
#define max 2025
#define ADD(x,y) x+y
#define Add(x,y) ((x)+(y))



void test1()//一个空的，不需要返回的函数
{
	int a = 1;
	a++;
	printf("%d ", a);//输出结果因局部变量的值存储在内存中的栈区，每循环一次变量的值都会清空
}


void test2()
{
	static int b = 1;//输出结果因为static操作符将变量值由栈区转移到了静态区，使循环结束后变量值不清空
	b++;
	printf("%d ", b);
}


int main()
{
	{
		unsigned int a = 12;//unsigned 表示无符号的
		u_int b = 15;
	}


	{
		int a = 0;
		printf("不使用静态符的情况下，a的三次取值：");
		while (a < 3)
		{
			test1();//每执行一次则使用一次test函数
			a++;
		}
		if (a = 3)//通过if命令使结果换行，对比更清晰
		{
			printf("\n使用静态符的情况下，a的三次取值：");
		}
		while (a < 6)//上一个while命令执行完成后开始循环执行此命令
		{
			test2();
			a++;
		}


		{
			printf("\n2.c文件中的g_val变量的值经过声明操作符输出结果为：%d\n",g_val);
		  //printf("2.c文件中的a_val变量无法经过声明操作在本文件使用%d", a_val);
		}


		{
			int a = 15;
			int b = 65;
			int c = add(a, b);
			printf("通过声明操作后，使用2.c文件中的函数，计算c的值为：%d\n", c);
		}


		{/*define的使用规则
		 1.其为预处理指令，可定义常量，符号
		 2.也可以定义宏*/
			printf("输出常量max=%d\n", max);
			printf("输出带有宏的计算值%d\n", ADD(2, 3) * 4);//此时的结果因为ADD函数没有加括号导致输出的计算公式为2+3*4=14
			printf("输出带有宏的计算值%d\n", Add(2, 3) * 4);//加有括号之后计算公式为（2+3）*4=20
		}
	}
	return 0;
}