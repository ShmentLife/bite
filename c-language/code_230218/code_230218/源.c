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
//	//���ı�ԭ�ṹ��
//	x.age = 10;
//}
//void set_age2(struct people* y)
//{	//�ı�ԭ�ṹ��
//	//������
//	(*y).age = 10;
//	//���ü�ͷ
//	y -> age = 10;
//
//}
//int main() {
//	//����ṹ��
//	struct people test = { "asd",20 };
//	//���ṹ��
//	set_age1(test);
//	printf("%d\n", test.age);
//	//����ַ
//	set_age2(&test);
//	printf("%d\n", test.age);
//	return 0;
//}