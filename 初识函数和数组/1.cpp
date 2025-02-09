#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	{
		int a = 0;
		int b = 0;
		printf("请输入两个整型数字。\n");
		scanf("%d%d", & a, & b);
		int c = Add(a, b);//用函数替代int c = a + b;
		printf("%d\n", c);
	}//函数的使用
	{
		//数组是一组数的集合，用下标访问
		int shuzu[5] = { 6,7,8,9,10 };//数组shuzu拥有五个数，6，7，8，9，10.如果不完全初始化空位则为0
		int i = 0;
		while (i < 4)
		{
			printf("%d\n", shuzu[i]);
			i++;
		}
		if (i == 4)
		{
			printf("%d\n循环结束。", shuzu[i]);
		}
	}
	return 0;
}