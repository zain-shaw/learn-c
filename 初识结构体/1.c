#include<stdio.h>
struct student  //����һ��ѧ��������
{
	char name[20];
	int age;
	double tall;
};
int main()
{
	struct student s = { "����", 19, 185.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("��һ�δ�ӡ������Ϊ%s������%d�����%lf\n", s.name, s.age, s.tall);//��ʽΪ���ṹ�����.��Ա������
	struct student* a = &s;//ʹ��ָ��ָ��ṹ��ĵ�ַ
	printf("�ڶ��δ�ӡ������Ϊ%s������%d�����%lf\n", (*a).name,(*a).age,(*a).tall);//ʹ��ָ�������ָ��s
	printf("�����δ�ӡ������Ϊ%s������%d�����%lf\n", a->name, a->age, a->tall);//�˸�ʽԭ���ͬ����һ��
	return 0;
}