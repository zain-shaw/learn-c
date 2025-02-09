#include<stdio.h>
#include<string.h>//strlen()函数需要引用此头文件
int main()
{
	char a[] = "abc";//一个字符
	char b[] = { 'a','b','c' };//三个字符
	char c[] = { 'a','b','c','\0' };
	printf("a=%s\n", a);
	printf("b=%s\n", b);
	printf("c=%s\n", c);
	int z = strlen("abc");
	//strlen()求字符串长度的函数。
	printf("z=%d\n", z);
	printf("%d\n", strlen(b));
	//结果
	//a=abc
	//b = abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫蘟bc
	//c = abc

	//可以证明，字符串类型若不加\0结尾提示符会一直调用内存资源造成乱码



	return 0;
}