#include <stdio.h>
typedef unsigned int u_int;//typedef ��ʾ��u_int���¶���unsigned int
extern int g_val;//�����ⲿ�ļ�����
//extern int a_val;  �޷���������Ϊ��static�����´˱��������ڱ��ļ���ʹ��
extern int add(int, int);//������������������ͬ��ԭ����static�������򲻿���
#define max 2025
#define ADD(x,y) x+y
#define Add(x,y) ((x)+(y))



void test1()//һ���յģ�����Ҫ���صĺ���
{
	int a = 1;
	a++;
	printf("%d ", a);//��������ֲ�������ֵ�洢���ڴ��е�ջ����ÿѭ��һ�α�����ֵ�������
}


void test2()
{
	static int b = 1;//��������Ϊstatic������������ֵ��ջ��ת�Ƶ��˾�̬����ʹѭ�����������ֵ�����
	b++;
	printf("%d ", b);
}


int main()
{
	{
		unsigned int a = 12;//unsigned ��ʾ�޷��ŵ�
		u_int b = 15;
	}


	{
		int a = 0;
		printf("��ʹ�þ�̬��������£�a������ȡֵ��");
		while (a < 3)
		{
			test1();//ÿִ��һ����ʹ��һ��test����
			a++;
		}
		if (a = 3)//ͨ��if����ʹ������У��Աȸ�����
		{
			printf("\nʹ�þ�̬��������£�a������ȡֵ��");
		}
		while (a < 6)//��һ��while����ִ����ɺ�ʼѭ��ִ�д�����
		{
			test2();
			a++;
		}


		{
			printf("\n2.c�ļ��е�g_val������ֵ��������������������Ϊ��%d\n",g_val);
		  //printf("2.c�ļ��е�a_val�����޷��������������ڱ��ļ�ʹ��%d", a_val);
		}


		{
			int a = 15;
			int b = 65;
			int c = add(a, b);
			printf("ͨ������������ʹ��2.c�ļ��еĺ���������c��ֵΪ��%d\n", c);
		}


		{/*define��ʹ�ù���
		 1.��ΪԤ����ָ��ɶ��峣��������
		 2.Ҳ���Զ����*/
			printf("�������max=%d\n", max);
			printf("������к�ļ���ֵ%d\n", ADD(2, 3) * 4);//��ʱ�Ľ����ΪADD����û�м����ŵ�������ļ��㹫ʽΪ2+3*4=14
			printf("������к�ļ���ֵ%d\n", Add(2, 3) * 4);//��������֮����㹫ʽΪ��2+3��*4=20
		}
	}
	return 0;
}