#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	{
		int age = 0;
		printf("���������䡣\n");
		scanf("%d", &age);
		printf("�ʼǰ��һ��");
		if (age < 18)
			printf("δ���ꡣ\n");
		else if (age == 18)
			printf("�պó��ꡣ\n");
		else
		{
			printf("�Ѿ����ꡣ\n");
			printf("������ʡ�\n");
		}//һ��if����elseֻ�ܿ���һ����䣬���������Ҫ���ϴ�����
	}
	{
		printf("�ʼǰ�����");
		int age = 60;
		if (age < 18)
			printf("δ���ꡣ\n");
		else if (18 <= age < 27)
			printf("���ꡣ\n");
		else if (age >= 27)
			printf("׳��������ꡣ\n");
	}//��ʱ��Ϊ18<=age���ж�Ϊ�棬�˴���1���棬������������1<27�����Դ�ʱ���Ϊ����
	{//��ȷд��Ϊ��
		printf("�ʼǰ������");
		int age = 60;
		if (age < 18)
			printf("δ���ꡣ\n");
		else if (18 <= age &&age< 27)//��ʾage���ڵ���18����С��27
			printf("���ꡣ\n");
		else if (age >= 27)
			printf("׳��������ꡣ\n");
	} 
	{//����if
		printf("�ʼǰ������");
		int a = 0;
		int b = 2;
		if (a == 1)
			if (b == 2)
				printf("��һ");
	    else
			printf("�𰸶�");//else�������ifΪһ�飬���Ƕ����
		printf("\n\n�ʼǰ����������\n");
	}
	{
		printf("�ʼǰ���ģ�whileѭ�������1-100֮���������\n");
		int a = 1;
		printf("����Ϊ��");
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
		printf("\nforѭ�������1-100֮���ż��:\n");
		printf("ż��Ϊ��");
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