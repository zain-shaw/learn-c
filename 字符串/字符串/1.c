#include<stdio.h>
#include<string.h>//strlen()������Ҫ���ô�ͷ�ļ�
int main()
{
	char a[] = "abc";//һ���ַ�
	char b[] = { 'a','b','c' };//�����ַ�
	char c[] = { 'a','b','c','\0' };
	printf("a=%s\n", a);
	printf("b=%s\n", b);
	printf("c=%s\n", c);
	int z = strlen("abc");
	//strlen()���ַ������ȵĺ�����
	printf("z=%d\n", z);
	printf("%d\n", strlen(b));
	//���
	//a=abc
	//b = abc�����������������������������abc
	//c = abc

	//����֤�����ַ�������������\0��β��ʾ����һֱ�����ڴ���Դ�������



	return 0;
}