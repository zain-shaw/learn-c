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
		printf("�������");
		int a = 0;
		int b = 2;
		if (a == 1)
			if (b == 2)
				printf("��һ");
	    else
			printf("�𰸶�");//else�������ifΪһ�飬���Ƕ����
		printf("\n�����������");
	}
	return 0;
}