#include <stdio.h>
//����ͷ�ļ�
int main()
{
	printf("hello,world\n");
	//\nΪ���з�
	printf("%d\n", 100);
	int shaw = 18;
	shaw = shaw + 2;
	float zane = 15.6;
	float zain = zane + 0.85;
	//���ı�������ҪΪ�±�����ע��������
	printf("%d\n", shaw);
	printf("%f\n", zain);
	//�����ȸ��������㾫�ȵͣ�������Ϊ16.450001
	double a = 15.6;
	a = a + 0.85;
	printf("%lf\n", a);
	//˫���ȸ��������㾫�ȸߣ�������Ϊ16.450000
		return 0;
}