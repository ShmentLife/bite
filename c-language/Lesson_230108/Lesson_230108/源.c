#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//
//int main()
//{
//    int b;
//	int i = func(1);
//    printf("%d\n", i);
//	
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
#include <stdio.h>
//int main() {
//	for (int i = 1;i < 100; i++) {
//		if (0 == i % 3) {
//			printf("%d ", i);
//		}
//	}
//}
//int main() {
//	int a = 0; 
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b) {
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (a <= c) {
//		int tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (b <= c) {
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//int main() {
//	for (int i = 100; i < 200; i++) {
//		for (int j = 2; j < i; j++) {
//			if (0 == i % j) {
//				break;
//			}
//			else if (j == i - 1) {
//				printf("%d ", i);
//			}
//		}
//	}
//}
//int main() {
//	for (int i = 1000;i <=2000; i++) {
//		if ((0 == i % 4 && 0 != i % 100) || 0 == i % 400) {
//			printf("%d ", i);
//		}
//	}
//}
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	if (m < n) {
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	int t = 0;
//	for (t = n; t > 0; t--) {
//		if (0 == m % t && 0 == n % t) {
//			printf("%d", t);
//			break;
//		}
//	}
////}
//int main() {
//	int i = 1;
//	if (i = -1) {
//		printf("111");
//	}
//}