#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
biaoqian://定义一个标签，用于goto语句跳转
	int input = 0;//初始化一个值,整形
	int line = 0;
	while (line < 3)//循环语句
	{
		printf("请输入一个数（1/0）。第%d次循环\n",line);
		scanf("%d", &input);
		line++;
		if (input == 1)//判断语句
		{
			printf("你输入的是1。第%d次循环\n",line);
		}
		else
		{
			printf("你输入的是0。第%d次循环n",line);
		}
	}
	if (line == 3)
	{
		int xunhuan = 0;
		printf("3次循环结束，是否重新开始循环，是选1，否选2。\n");
		scanf("%d", &xunhuan);
		if (xunhuan == 2)
		{
			printf("好的，循环结束。\n");
		}
		else
		{
			printf("好的，已经重新开始循环。\n");
			goto biaoqian;//跳转至标签处
		}
	}
	return 0;
}