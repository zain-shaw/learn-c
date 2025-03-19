#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	{
		int age = 0;
		printf("请输入年龄。\n");
		scanf("%d", &age);
		printf("笔记板块一：");
		if (age < 18)
			printf("未成年。\n");
		else if (age == 18)
			printf("刚好成年。\n");
		else
		{
			printf("已经成年。\n");
			printf("允许访问。\n");
		}//一个if或者else只能控制一条语句，多条语句需要加上大括号
	}
	{
		printf("笔记板块二：");
		int age = 60;
		if (age < 18)
			printf("未成年。\n");
		else if (18 <= age < 27)
			printf("青年。\n");
		else if (age >= 27)
			printf("壮年或中老年。\n");
	}//此时因为18<=age被判断为真，此处以1代替，而接下来则变成1<27，所以此时输出为青年
	{//正确写法为：
		printf("笔记板块三：");
		int age = 60;
		if (age < 18)
			printf("未成年。\n");
		else if (18 <= age &&age< 27)//表示age大于等于18并且小于27
			printf("青年。\n");
		else if (age >= 27)
			printf("壮年或中老年。\n");
	} 
	{//悬空if
		printf("笔记板块三：");
		int a = 0;
		int b = 2;
		if (a == 1)
			if (b == 2)
				printf("答案一");
	    else
			printf("答案二");//else与最近的if为一组，而非对齐的
		printf("\n\n笔记板块三结束。\n");
	}
	{
		printf("笔记板块四，while循环，输出1-100之间的奇数：\n");
		int a = 1;
		printf("奇数为：");
		while (a <= 100)
		{
			if (a % 2 == 1)
			{
				printf("%d ", a);
				a++;
			}
			else if(a%2==0)
			{
				a++;
			}
		}
		printf("\nfor循环，输出1-100之间的偶数:\n");
		printf("偶数为：");
		int b = 0;
		for (b = 1; b <= 100; b++)
		{
			if(b % 2 == 0)
			{
				printf("%d ", b);
			}
		}

	}
	return 0;
}