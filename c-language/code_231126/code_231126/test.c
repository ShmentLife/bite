#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main() {
	int arr1[3][4] = { { 1, 2, 30 }, { 4, 5, 600 } };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%-3d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}