#include<stdio.h>
int main()
{
	printf("x\a");//�����ַ�������
	printf("x\?");
	printf("x\'");
	printf("x\"");
	printf("x\\");//���ϻ����\��ķ���
	printf("a\b");//�˸��
	printf("b\f");//��ֽ��
	printf("c\n");//����
	printf("d\r");//�س�
	printf("e\t");//ˮƽ�Ʊ��
	printf("f\v");//��ֱ�Ʊ��
	printf("\130");//\��Ӱ˽������֣��Ὣ�˰˽�����תΪʮ�������ֲ���������ֵ�ASCIIֵ
	printf("\x30");//\x���ʮ����������������ԭ��ͬ��
	return 0;
}