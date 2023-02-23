#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 5,1,3,4,2 };
//	int arr3[5] = { 4,2,3,1,5 };
//	int* parr[] = {arr1,arr2,arr3};
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ",parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0; i < 10;i++) {
//		printf("%d ", i[arr]);
//	}
//	printf("\n");
//	/*for (int i = 0; i < 10;i++) {
//		printf("%d ", *(arr + i));
//	}*/
//	return 0;
//}'
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main() {
//	int num1 = 6;
//	int num2 = 6;
//	int num3 = 7;
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < num1;j++) {
//			printf(" ");
//		}
//		num1--;
//		for (int j = 7; j > num2;j--) {
//			printf("*");
//		}
//		num2--;
//		for (int j = 7; j > num3;j--) {
//			printf("*");
//		}
//		num3--;
//		printf("\n");
//	}
//	num1 = 6;
//	num2 = 6;
//	num3 = 5;
//	for (int i = 0; i < 6; i++) {
//		for (int j = 7; j > num1;j--) {
//			printf(" ");
//		}
//		num1--;
//		for (int j = 0; j < num2;j++) {
//			printf("*");
//		}
//		num2--;
//		for (int j = 0; j < num3;j++) {
//			printf("*");
//		}
//		num3--;
//		printf("\n");
//	}
//	return 0;
//}
//#include<math.h>
//int count(int x) {
//	int cou = 0;
//	while (x / 10 != 0) {
//		x /= 10;
//		cou++;
//	}
//	cou++;
//	return cou;
//}
//int Narcissistic_number(int x){
//	int num = x;
//	int n = count(x);
//	int count = n;
//	int sum = pow((x % 10),count);
//	n--;
//	while (n > 0) {
//		x /= 10;
//		sum += pow((x % 10), count);
//		n--;
//	}
//	if (sum == num) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	for (int i = 0; i < 100000; i++) {
//		if (Narcissistic_number(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int Sum(int a) {
//	int tmp = a;
//	int sum = a;
//	for (int i = 0; i < 4; i++) {
//		a = tmp + a * 10;
//		sum += a;
//	}
//	return sum;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", Sum(a));
//	return 0;
//}
int main() {
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	return 0;
}