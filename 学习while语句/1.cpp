#include<stdio.h>
int main()
{
	int Ia = 0;
	while (Ia <= 10)
	{
		if (Ia == 5)
		{
			++Ia;    //没有此代码则输出1 2 3 4 ，之后陷入死循环
			continue;//跳过本次循环
		}
		++Ia;//没有此代码则一直输出0
		printf("%d\n", Ia);
	}
	return 0;
}