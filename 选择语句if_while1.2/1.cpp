#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("���һ��������1-7�е�һ������");
	int day = 0;
	scanf("%d", &day);
	switch(day)
	{
		case 1:
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
		default:
			printf("���ֳ�����Χ\n");
			break;
	}
	
			/*

			switch���ṹ��
			switch(���ͱ��ʽ)
			{
			case ���ͳ������ʽ;
			���;
			default:
			printf("");
			break;
			}

			*/

		printf("������������1-7�е�һ������");
		int day1 = 0;
		scanf("%d", &day1);
		if (0 < day1 && day1 < 8)
		{
			switch (day1)
			{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("������\n");
				break;
			case 6:
			case 7:
				printf("��Ϣ��\n");
				break;
			}

		}
		else
		{
		printf("���ֳ�����Χ\n");
		}
	return 0;
}