#include <stdio.h>
typedef unsigned int u_int;//typedef ��ʾ��u_int���¶���unsigned int
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
	}
	return 0;
}