#include<stdio.h>
extern int c;
int b = 20;//ȫ�ֱ���
#define d 12345;//#define  ����ı�ʶ��������Ҳ�����ڴ������ڶ��塣
int main()

{
	printf("b=%d\n", b);
	//ȫ�ֱ�������������Ϊ�����򣬱�������ʹ��
	{                                                                                  //�ֲ�����a���������ڿ�ʼ
		int a1 = 10;
		const int a2 = 15;  //constʹa2��Ϊ�����������г����ԣ������Ǳ�����֤�����ֶ�A
		printf("a1=%d\n", a1);
		a1 = 11;
		//a2 = 12;      ������ֵָ��const����
		printf("a1=%d\n", a1);//�������϶������У����Դ˴�a1ֵ��Ϊ11
		printf("a2=%d\n", a2);
		printf("b=%d\n", b);
		printf("c=%d\n", c);//ȫ�ֱ����ɿ��ļ�������������ʹ��
		//int d=123456;    ����֤��dΪ���������ɸ���
		int d1 = d
			printf("d1=%d\n", d1);




		//  A  ֤��congst int a2Ϊ����
		int arr[10] = { 0 };//10��Ԫ��
		int n = 10;
		//int arr2[n] = { 0 };         ���к󱨴�nΪ�������˴���Ҫ����


	}                                                                            //�ֲ�����a���������ڽ���
	//�ֲ������������򣬾��Ǿֲ��������ڵľֲ���Χ
	//��ӡ�����ڴ�����ڣ��������н����10


	{     //ö�ٱ���
		enum sex   //enumö�ٹؼ���
		{
			MALE,    //����ö�ٱ����ı���δ������ȡֵ,ע�ⶺ��
			FEMALE
		};

		enum sex L = MALE;       //ö�ٱ�����������ֵʱ��ʽ
		printf("MALE=%d\n", MALE);
		printf("FEMALE=%d\n", FEMALE);
		printf("L=%d\n", L);





		{
			enum age
			{
				old=3,//����ֵ
				young
			};

			printf("old=%d\n", old);
			printf("young=%d\n", young);


	

		}


	}









	return 0;
}