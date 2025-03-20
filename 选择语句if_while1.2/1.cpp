#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("板块一：请输入1-7中的一个数：");
	int day = 0;
	scanf("%d", &day);
	switch(day)
	{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期七\n");
			break;
		default:
			printf("数字超出范围\n");
			break;
	}
	
			/*

			switch语句结构：
			switch(整型表达式)
			{
			case 整型常量表达式;
			语句;
			default:
			printf("");
			break;
			}

			*/

		printf("板块二：请输入1-7中的一个数：");
		int day1 = 0;
		scanf("%d", &day1);
		if (0 < day1 && day1 < 8)
		{
			switch (day1)
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("工作日\n");
				break;
			case 6:
			case 7:
				printf("休息日\n");
				break;
			}

		}
		else
		{
		printf("数字超出范围\n");
		}
	return 0;
}