#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
biaoqian://����һ����ǩ������goto�����ת
	int input = 0;//��ʼ��һ��ֵ,����
	int line = 0;
	while (line < 3)//ѭ�����
	{
		printf("������һ������1/0������%d��ѭ��\n",line);
		scanf("%d", &input);
		line++;
		if (input == 1)//�ж����
		{
			printf("���������1����%d��ѭ��\n",line);
		}
		else
		{
			printf("���������0����%d��ѭ��n",line);
		}
	}
	if (line == 3)
	{
		int xunhuan = 0;
		printf("3��ѭ���������Ƿ����¿�ʼѭ������ѡ1����ѡ2��\n");
		scanf("%d", &xunhuan);
		if (xunhuan == 2)
		{
			printf("�õģ�ѭ��������\n");
		}
		else
		{
			printf("�õģ��Ѿ����¿�ʼѭ����\n");
			goto biaoqian;//��ת����ǩ��
		}
	}
	return 0;
}