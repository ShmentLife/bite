#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void form(int x) {
//	for (int i = 1; i <= x; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d x %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	form(i);
//	return 0;
//}
//#include <stdio.h>
//void interchange(int* pa,int* pb) {
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a = %d,b = %d", a, b);
//	interchange(&a, &b);
//	printf("\n交换后:a = %d,b = %d", a, b);
//	return 0;
//}
//#include <stdio.h>
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if (1 == is_leap_year(year)) {
//		printf("是闰年");
//	}
//	else {
//		printf("不是闰年");
//	}
//	return 0;
//}
//#include <stdio.h>
//int is_prime(int n) {
//	int i = 0;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	if (i == n) {
//		return 1;
//	}
//}
//int main(){
//	int n = 0;
//	for (n = 100; n <= 200; n++) {
//		if (1 == is_prime(n)) {
//			printf("%d ",n);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}
int main() {
    printf("%d", Fun(2));
    return 0;
}