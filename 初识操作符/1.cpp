#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	{
		int a = 9 / 2;
		int b = 9 % 2;
		float c = 9 / 2;
		float d = 9 % 2;
		printf("整型除法运算结果a=%d\n整形取余运算结果b=%d\n", a,b);
		printf("浮点型除法运算结果c=%f\n浮点型取余运算结果d=%f\n", c, d);
		float e = 9 / 2.0;
		printf("带有小数的浮点型运算结果e=%f\n", e);//若浮点型运算中有带有小数的数值参与，则结果为小数
	}//算数操作符，例如：+ - * / % ，加减乘除取余
	{
		int a = 2;//移位操作符移动的是二进制字符，此处应用的是整型变量，占据内存4字节，
		          //因为每字节包含8个bit位，所以变量a共使用32bit位。所以a=00000000 00000000 00000000 00000010
		int b = a << 1;//a向左移动一位后变为b=00000000 00000000 00000000 00000100,也就是4.
		printf("a左移一位后的值b=%d\n", b);
	}//移位操作符，例如>>  <<，右移 左移
	{
		int a = 2;
		a += 3;//使用赋值操作符，效果等于a=a+3;
		printf("使用赋值操作符中+=后的变量a=%d\n", a);
	}//赋值操作符
	{
		int a = 10;
		int shuzu[10] = { 1,2,3,4,5,6,7,8,9,10 };
		printf("使用单目操作符！进行逻辑反操作，使a=%d\n", !a);//c语言中，0表示假，非0表示真。所以10为真，逻辑反操作后为假0
		printf("使用操作数类型长度符判断整型的长度，b=%d字节\n", sizeof(int));//使用sizeof计算长度
		printf("计算数组shuzu长度为%d字节\n", sizeof shuzu);
		printf("计算数组中第一项shuzu[0]的长度为%d字节\n", sizeof shuzu[0]);
		//结合此原理我们可以尝试计算数组的个数
		int geshu = sizeof shuzu / sizeof shuzu[0];
		printf("数组个数为%d个\n", geshu);
	}//单目操作符
	{
		int a = 0;
		printf("将0按位取反之后的值为%d\n",~a);//在内存中存储的是补码，0按位取反之后是32个1
		                                       //根据负数的三码互换规则，减1获得反码，再取反之后获得原码
		                                       //也就是10000000 00000000 00000000 00000001=-1
	}//按位取反操作符
	{
		int a  = 10;
		int b = a++;
		printf("使用后置++，先使用，后++。a=%d,b=%d.\n", a, b);
		int c = ++a;
		printf("使用前置++，先++，后使用。a=%d,c=%d.\n",a,c);
		int f = 1;
		     /*int g = (++f) + (++f) + (++f);
		     printf(" % d", g);   
			 仅作娱乐，不同编译器结果不同。*/
	}//前置后置++,--
	{
		int a = (int)3.14;//将浮点型强制转化为整型
		printf("%d\n",a);
	}//强制类型转化
	{
		int a = 4;
		int b = 9;
		int c = 0;
		{
			if (a && b)
				printf("a和b均为真\n");
			if (a && c)
				printf("a和c均为真\n");
			else
				printf("a和c至少有一个为假\n");
		}//逻辑与，当两个变量均为真时，才为真。
		{
			if(a || b)
				printf("a和b一定有一个为真\n");
			if (a || c)
				printf("a和c一定有一个为真\n");
			else
				printf("a和c均为假");
		}//逻辑或，当两个变量有一个为真时，就为真。
	}//逻辑操作符
	{
		int a = 0;
		int b = 1;
		int max = 0;

		/*if (a > b)
			max = a;
		else
			max = b;*/
		
		max = a > b ? a : b;//凭借三目操作符替换简单的if函数。
		printf("最大值max=%d\n", max);
	}//三目操作符
	{
		int a = 0;
		int b = 5;
		int c = 3;
		int d = (a = b + 1, b = a + 1, c = a + b);//从左到右依次计算
		printf("最终结果d=%d\n", d);
	}//逗号表达式
	return 0;
}