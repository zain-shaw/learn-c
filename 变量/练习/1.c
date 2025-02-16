#include<stdio.h>
extern int c;
int b = 20;//全局变量
#define d 12345;//#define  定义的标识符常量。也可以在大括号内定义。
int main()

{
	printf("b=%d\n", b);
	//全局变量，整个工程为作用域，变量均可使用
	{                                                                                  //局部变量a的生命周期开始
		int a1 = 10;
		const int a2 = 15;  //const使a2变为常变量，具有常属性，但仍是变量，证明见分段A
		printf("a1=%d\n", a1);
		a1 = 11;
		//a2 = 12;      报错，左值指定const对象
		printf("a1=%d\n", a1);//命令自上而下运行，所以此处a1值改为11
		printf("a2=%d\n", a2);
		printf("b=%d\n", b);
		printf("c=%d\n", c);//全局变量可跨文件，在整个工程使用
		//int d=123456;    报错，证明d为常量，不可更改
		int d1 = d
			printf("d1=%d\n", d1);




		//  A  证明congst int a2为变量
		int arr[10] = { 0 };//10个元素
		int n = 10;
		//int arr2[n] = { 0 };         运行后报错，n为变量，此处需要常量


	}                                                                            //局部变量a的生命周期结束
	//局部变量的作用域，就是局部变量所在的局部范围
	//打印命令在代码框内，所以运行结果是10


	{     //枚举变量
		enum sex   //enum枚举关键字
		{
			MALE,    //这种枚举变量的变量未来可能取值,注意逗号
			FEMALE
		};

		enum sex L = MALE;       //枚举变量给变量赋值时格式
		printf("MALE=%d\n", MALE);
		printf("FEMALE=%d\n", FEMALE);
		printf("L=%d\n", L);





		{
			enum age
			{
				old=3,//赋初值
				young
			};

			printf("old=%d\n", old);
			printf("young=%d\n", young);


	

		}


	}









	return 0;
}