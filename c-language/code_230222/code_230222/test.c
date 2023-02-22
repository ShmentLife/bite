#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* p1 = &arr[4];
//	int* p2 = arr;
//	int test = p1 - p2;
//	printf("%d", test);
//	return 0;
//}
int my_strlen(char str[]) {
	char* start = str;
	while ((*str) != '\0') {
		str++;
	}
	return str - start;
}
int main() {
	char str[] = "abc";
	printf("%d", my_strlen(str));
	return 0;
}