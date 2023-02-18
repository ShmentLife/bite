#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//void print(){ 
//	printf("---------\n");
//}
//int main() {
//	int a = 2;
//	int b = 3;
//	print();
//	printf("%d", Add(a, b));
//	return 0;
//}
//struct people
//{
//	char name[10];
//	int age;
//};
//void set_age1(struct people x)
//{
//	//不改变原结构体
//	x.age = 10;
//}
//void set_age2(struct people* y)
//{	//改变原结构体
//	//解引用
//	(*y).age = 10;
//	//运用箭头
//	y -> age = 10;
//
//}
//int main() {
//	//定义结构体
//	struct people test = { "asd",20 };
//	//传结构体
//	set_age1(test);
//	printf("%d\n", test.age);
//	//传地址
//	set_age2(&test);
//	printf("%d\n", test.age);
//	return 0;
//}