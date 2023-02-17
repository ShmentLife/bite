#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void bubble_sort(int arr[], int sz) {
//	for (int i = 0; i < sz - 1; i++) {
//		for (int j = 0; j < sz - i - 1; j++) {
//			int tmp = 0;
//			if (arr[j] > arr[j + 1]) {
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int arr[] = { 7,5,4,8,4,1,6,3,2,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	int a = 3;
//	//原反补 00000000000000000000000000000011
//	int b = -3;
//	//原  10000000000000000000000000000011
//	//反  11111111111111111111111111111100
//	//补  11111111111111111111111111111101
//	printf("%d\n", a << 1);
//	//移后补码 00000000000000000000000000000110
//	//移后原码 00000000000000000000000000000110
//	printf("%d\n", b << 1);
//	//移后补码 11111111111111111111111111111010
//	//移后原码 10000000000000000000000000000110
//
//	return 0;
//}
int main() {
	int a = 3;
	int b = -3;
	printf("%d\n", a >> 1);
	printf("%d\n", b >> 1);
	return 0;
}