#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d x %d == %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int arr[10];
//	for (int j = 0; j < 10; j++) {
//		scanf("%d", &arr[j]);
//	}
//	for (int i = 0; i < 9; i++) {
//		if (arr[0] < arr[i + 1]) {
//			int tmp = 0;
//			tmp = arr[i + 1];
//			arr[i + 1] = arr[0];
//			arr[0] = tmp;
//		}
//	}
//	printf("最大值是 %d", arr[0]);
//	return 0;
//}
//int main() {
//	float sum = 0;
//	for (int j = 1; j <= 100; j++) {
//		float a = 1.0 / j;
//		if(j % 2 == 0){
//			a = -a;
//		}
//		sum = sum + a;
//	}
//	printf("%f", sum);
//	return 0;
//}
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	for (int i = 1; i < 100; i++) {
		a = i % 10;//个位
		b = i / 10;//十位
		if (a % 9 == 0 && a != 0) {
			sum++;
		}		
		if (b % 9 == 0 && b != 0) {
			sum++;
		}
			
	}
	printf("共有%d个",sum);
	return 0;
}