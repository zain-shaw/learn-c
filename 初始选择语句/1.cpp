#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int xingbie = 0;//引入整型xingbie变量并初始化
	int xunhuan = 1;//引入循环语句的xunhuan变量用于循环次数判断并初始化
	while(xunhuan<3)//循环语句判断原则
	{              
		printf("请输入性别（1/0）男或女。第%d次提问。\n",xunhuan);
		scanf("%d", &xingbie);//输入函数，用于接下来选择语句的判断。
		if (xingbie == 1)
			printf("你是男性。\n");
		else
			printf("你是女性。\n");
		xunhuan++;
	}//循环语句中选择语句部分
	if(xunhuan == 3)
	{
		xunhuan = xunhuan - 1;
		printf("已经提问%d次，循环结束。\n",xunhuan);
	}
	return 0;
}