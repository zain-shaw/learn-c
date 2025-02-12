#include <stdio.h>
typedef unsigned int u_int;//typedef 表示用u_int重新定义unsigned int
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
	}
	return 0;
}