#include<stdio.h>
int main()
{
	printf("x\a");//警告字符，蜂鸣
	printf("x\?");
	printf("x\'");
	printf("x\"");
	printf("x\\");//以上会输出\后的符号
	printf("a\b");//退格符
	printf("b\f");//进纸符
	printf("c\n");//换行
	printf("d\r");//回车
	printf("e\t");//水平制表符
	printf("f\v");//垂直制表符
	printf("\130");//\后加八进制数字，会将此八进制数转为十进制数字并输出此数字的ASCII值
	printf("\x30");//\x后加十六进制数，，其余原理同上
	return 0;
}