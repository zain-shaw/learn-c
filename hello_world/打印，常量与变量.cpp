#define _CRT_SECURE_NO_WARNINGS
//scanf������������Ӵ�ָ�define,�¶���
#include <stdio.h>
//����ͷ�ļ�
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d",&a,&b);
	//�����������%d %d������������ע��ո񣬶��ź��&a,&b,��ʾ��һ��%d����a���ڶ���%d����b��
	c = a + b;
	printf("c=%d\n", c);


	printf("hello,world\n");
	//\nΪ���з�
	printf("%d\n", 100);
	int shaw = 18;
	shaw = shaw = shaw + 2;
	float zane = 15.6;
	float zain = zane + 0.85;
	//���ı�������ҪΪ�±�����ע��������
	printf("%d\n", shaw);
	printf("%f\n", zain);
	//�����ȸ��������㾫�ȵͣ�������Ϊ16.450001
	double d = 15.6;
	d = d + 0.85;
	printf("%f\n", d);
	//˫���ȸ��������㾫�ȸߣ�������Ϊ16.450000
	return 0;
}
