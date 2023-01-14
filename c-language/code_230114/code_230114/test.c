#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Fib1(int n) {
//	if (n < 3) {
//		return 1;
//	}
//	else {
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//}
//int Fib2(int n) {
//	if (n < 3) {
//		return 1;
//	}
//	else {
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		for (int i = n - 2; i > 0; i--) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	printf("递归结果：%d\n", Fib1(i));
//	printf("迭代结果：%d\n", Fib2(i));
//	return 0;
//}
//int pow(int n, int k) {
//	if (1 == k) {
//		return n;
//	}
//	else {
//		return n * pow(n, k - 1);
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	printf("%d的%d次方是%d", n,k,pow(n, k));
//	return 0;
//}
//int DigitSum(int x) {
//	if (x < 10) {
//		return x;
//	}
//	else {
//		return x % 10 + DigitSum(x / 10);
//	}
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", DigitSum(i));
//	return 0;
//}
//void reverse_string(char* str) {
//	
//}
//int main() {
//	char str[] = "abc";
//	reverse_string(&str);
//
//	return 0;
//}
#include <string.h>
//int my_strlen (char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//
//}
//int main() {
//	char str[] = "hello";
//	int n = 0;
//	while (str[n] != '\0') {
//		n++;
//	}
//	printf("%d\n", n);
//	printf("%d\n", my_strlen(&str));
//	return 0;
//}
//int Fac(int x) {
//	if (1 == x) {
//		return 1;
//	}
//	else {
//		return x * Fac(x - 1);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int fac = 1;
//	for (int i = n; i > 0; i--) {
//		fac = i * fac;
//	}
//	printf("%d\n", fac);
//	printf("%d\n", Fac(n));
//}
//int print(int x) {
//	if(x >= 10){
//	print(x / 10);
//	}
//	printf("%d ",x % 10);
//	return 0;
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}
int main()
{
    char str[] = "hello bit";
    printf("%d %d\n", sizeof(str), strlen(str));
    return 0;
}