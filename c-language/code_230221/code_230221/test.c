#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = -3;
//	int count = 0;
//	int b = 1;
//	while((a & b) == 1) {
//		count++;
//		b <<= 1;//注意写法，不要写成 a>>1
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//    int num = -1;
//    int i = 0;
//    int count = 0;
//    while (num)
//    {
//        count++;
//        num = num & (num - 1);
//
//    }
//    printf("二进制中1的个数 = %d\n", count);
//    return 0;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if ((a & 1) == 1){
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if ((a & 1) != (b & 1)) {
//			count++;
//		}
//		a >>= 1;
//		b >>= 1;
//	}
//	printf("%d", count);
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    int a = sizeof(i);
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//int main() {
//	int sz1 = 0;
//	int sz2 = 0;
//	scanf("%d %d", &sz1, &sz2);
//	int arr1[1000] = {0};
//	int arr2[1000] = {0};
//	for (int i = 0; i < sz1; i++) {
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < sz2; i++) {
//		scanf("%d", &arr2[i]);
//	}
//	int n = 0;
//	int m = 0;
//	while (n < sz1 && m < sz2) {
//		if (arr1[n] < arr2[m]) {
//			printf("%d ", arr1[n]);
//			n++;
//		}
//		else {
//			printf("%d ", arr2[m]);
//			m++;
//		}
//	}
//	if (n == sz1) {
//		for (int i = m; i < sz2; i++) {
//			printf("%d ", arr2[i]);
//		}
//	}
//	else if(m == sz2){
//		for (int i = n; i < sz1; i++) {
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}
//int Lily_Number(int x) {
//	int a = (x % 10000) * (x / 10000);
//	int b = (x % 1000) * (x / 1000);
//	int c = (x % 100) * (x / 100);
//	int d = (x % 10) * (x / 10);
//	if (x == (a + b + c + d)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int i = 0;
//	for (i = 10000; i < 100000; i++) {
//		if (Lily_Number(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            if (a == b && b == c && a == c) {
                printf("Isosceles triangle!");
            }
            else if (a == b || b == c || a == c) {
                printf("Equilateral triangle!");
            }
            printf("Ordinary triangle!");
        }
        printf("Not a triangle!");
    }
}