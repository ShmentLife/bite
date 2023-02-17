#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int count = 0;
	int n = 0;
	scanf("%d", &n);
	while (n % 2 == 1) {
		count++;
		n = n >> 1;
	}
	return 0;
}