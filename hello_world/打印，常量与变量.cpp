#define _CRT_SECURE_NO_WARNINGS
//scanf函数报错后增加此指令，define,下定义
#include <stdio.h>
//包含头文件
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d",&a,&b);
	//输出函数，“%d %d“两个整数，注意空格，逗号后加&a,&b,表示第一个%d用于a，第二个%d用于b。
	c = a + b;
	printf("c=%d\n", c);


	printf("hello,world\n");
	//\n为换行符
	printf("%d\n", 100);
	int shaw = 18;
	shaw = shaw = shaw + 2;
	float zane = 15.6;
	float zain = zane + 0.85;
	//更改变量名后要为新变量标注变量类型
	printf("%d\n", shaw);
	printf("%f\n", zain);
	//单精度浮点数计算精度低，计算结果为16.450001
	double d = 15.6;
	d = d + 0.85;
	printf("%f\n", d);
	//双精度浮点数计算精度高，计算结果为16.450000
	return 0;
}
