#define _CRT_SECURE_NO_WARNINGS 1
//DEV C++��ɾȥ�˴��룡����
#include<stdio.h>
#include<stdlib.h>
//����ͷ�ļ�������������������
int main()
{
	int gaodu=0;
	//��ʼ������
	int zhangai;
	//�����������γ���
	//srand(1);
	//ʹ��1��Ϊ���������
	printf("��������Ծ�߶�(1-10):\n");
	scanf("%d",&gaodu);
	//����һ����������������gaodu��
	zhangai = rand() % 10 + 1;
	//ʹ��rand()��������һ���������ʹ��ȡģ�����%����������0-9����1ʹ��Χ��Ϊ1-10��������zhangai��
	printf("�ϰ���߶�Ϊ%d\n", zhangai);
	if (gaodu > zhangai)
		printf("�ɹ�������\n");
	else
		printf("δ��������\n");
	return 0;
}