#include<stdio.h>
int main()
{
	int Ia = 0;
	while (Ia <= 10)
	{
		if (Ia == 5)
		{
			++Ia;    //û�д˴��������1 2 3 4 ��֮��������ѭ��
			continue;//��������ѭ��
		}
		++Ia;//û�д˴�����һֱ���0
		printf("%d\n", Ia);
	}
	return 0;
}