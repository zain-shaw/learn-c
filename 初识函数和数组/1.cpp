#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	{
		int a = 0;
		int b = 0;
		printf("�����������������֡�\n");
		scanf("%d%d", & a, & b);
		int c = Add(a, b);//�ú������int c = a + b;
		printf("%d\n", c);
	}//������ʹ��
	{
		//������һ�����ļ��ϣ����±����
		int shuzu[5] = { 6,7,8,9,10 };//����shuzuӵ���������6��7��8��9��10.�������ȫ��ʼ����λ��Ϊ0
		int i = 0;
		while (i < 4)
		{
			printf("%d\n", shuzu[i]);
			i++;
		}
		if (i == 4)
		{
			printf("%d\nѭ��������", shuzu[i]);
		}
	}
	return 0;
}