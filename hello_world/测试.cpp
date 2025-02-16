#include <stdio.h>
//包含头文件
int main()
{
	printf("hello,world\n");
	//\n为换行符
	printf("%d\n", 100);
	int shaw = 18;
	shaw = shaw + 2;
	float zane = 15.6;
	float zain = zane + 0.85;
	//更改变量名后要为新变量标注变量类型
	printf("%d\n", shaw);
	printf("%f\n", zain);
	//单精度浮点数计算精度低，计算结果为16.450001
	double a = 15.6;
	a = a + 0.85;
	printf("%lf\n", a);
	//双精度浮点数计算精度高，计算结果为16.450000
		return 0;
}