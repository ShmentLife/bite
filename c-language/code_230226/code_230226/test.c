#define _CRT_SECURE_NO_WARNINGS 1
//int main() {
//	int a = 5;
//	//原反补 0000 0000 0000 0000 0000 0000 0000 0101
//	//    0x00000005
//	int b = -9;
//	//原 10000000000000000000000000001001
//	//反 11111111111111111111111111110110
//	//补 1111 1111 1111 1111 1111 1111 1111 0111
//	// 0xfffffff7
//	return 0;
//}
//#include<stdio.h>
//int check() {
//	int a = 1;
//	return((char*)&a);
//}
//int main() {
//	if (check) {
//		printf("小端");
//	}
//	else {
//		printf("大端");
//	}
//	return 0;
//}
//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	unsigned int a = -10;
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110
//	//补码转换为10进制 4294967286
//	printf("%d\n", a);
//	printf("%u\n", a);
//	//实际上我们可以发现，即便你刚开始定义的是unsigned int且给他的是负数
//	//它在内存中无论如何存的都是那一串二进制补码
//	//那么你在后面想打印为整型就按整型的方式去转换并打印
//	//打印为无符号整型就按无符号整型的方式去转换并打印
//	//也就是说，无论类型，数据实际上存储在内存中的二进制序列都是一样的
//	//重点在于你如何去调用这个数据，调用方式不同结果就不同
//}
#include<stdio.h>
//int main()
//{
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;//44
//	//printf("%d %d" , a + b, c);
//
//	//return 0;
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//}
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = i; j > 0; j--) {
			
		}
	}
	return 0;
}