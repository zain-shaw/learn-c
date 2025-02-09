#define _CRT_SECURE_NO_WARNINGS 1
//DEV C++中删去此代码！！！
#include<stdio.h>
#include<stdlib.h>
//包含头文件输入输出，随机数生成
int main()
{
	int gaodu=0;
	//初始化变量
	int zhangai;
	//声明两个整形常量
	//srand(1);
	//使用1作为随机数种子
	printf("请输入跳跃高度(1-10):\n");
	scanf("%d",&gaodu);
	//输入一个整数，并储存在gaodu中
	zhangai = rand() % 10 + 1;
	//使用rand()函数生成一个随机数，使用取模运算符%将其限制在0-9，加1使范围变为1-10，储存在zhangai中
	printf("障碍物高度为%d\n", zhangai);
	if (gaodu > zhangai)
		printf("成功跳过！\n");
	else
		printf("未能跳过。\n");
	return 0;
}