#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 3;
	int b = 5;
	printf("交换前:a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}
//int main() {
//	int flag = 0;
//	if (flag) {
//		//flag为true执行
//	}
//	if (!flag) {
//		//flag为false执行
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;// c = 6 , a = 6
//	b = ++c, c++, ++a, a++;
//	// 7 7 7 7 c=8 a=8 b=7
//	b += a++ + c;
//	//b=23 a=9 c=8
//
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}