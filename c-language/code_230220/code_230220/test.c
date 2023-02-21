#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int n = 10;
//	char* pn1 = &n;
//	int* pn2 = &n;
//	printf("%p\n", pn1);
//	printf("%p\n", pn1 + 1);
//	printf("%p\n", pn2);
//	printf("%p\n", pn2 + 1);
//	return 0;
//}
//int main() {
//	int n = 0x11223344;
//	char* pc = &n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0; 
//	return 0;
//}
//int main() {
//    int arr[10] = { 0 };
//    for (int n = 0; n < 11; n++) {
//        *(arr + n) = 0;
//        //越界的后果则和上方一样
//    }
//    return 0;
//}
int* test() {
	int a = 10;
	return &a;
}
int main() {
	*(test()) = 10;
	return 0;
}