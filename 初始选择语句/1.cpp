#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int xingbie = 0;//��������xingbie��������ʼ��
	int xunhuan = 1;//����ѭ������xunhuan��������ѭ�������жϲ���ʼ��
	while(xunhuan<3)//ѭ������ж�ԭ��
	{              
		printf("�������Ա�1/0���л�Ů����%d�����ʡ�\n",xunhuan);
		scanf("%d", &xingbie);//���뺯�������ڽ�����ѡ�������жϡ�
		if (xingbie == 1)
			printf("�������ԡ�\n");
		else
			printf("����Ů�ԡ�\n");
		xunhuan++;
	}//ѭ�������ѡ����䲿��
	if(xunhuan == 3)
	{
		xunhuan = xunhuan - 1;
		printf("�Ѿ�����%d�Σ�ѭ��������\n",xunhuan);
	}
	return 0;
}