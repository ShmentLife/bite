#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = {1,2,3};
	for (int i = 0; i < 3; i++) {
		printf("%d\n", *(arr+i));
	}
	return 0;
}