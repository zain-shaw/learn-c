#include<stdio.h>
struct student  //创建一个学生的类型
{
	char name[20];
	int age;
	double tall;
};
int main()
{
	struct student s = { "张三", 19, 185.5 };//结构体的创建和初始化
	printf("第一次打印，名字为%s，年龄%d，身高%lf\n", s.name, s.age, s.tall);//格式为“结构体变量.成员变量”
	struct student* a = &s;//使用指针指向结构体的地址
	printf("第二次打印，名字为%s，年龄%d，身高%lf\n", (*a).name,(*a).age,(*a).tall);//使用指针解引用指向s
	printf("第三次打印，名字为%s，年龄%d，身高%lf\n", a->name, a->age, a->tall);//此格式原理等同于上一种
	return 0;
}