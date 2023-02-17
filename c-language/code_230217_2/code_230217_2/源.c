#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	if (a > 5) {
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//	//上面的代码等效于下方代码
//	(a > 5) ? (b = 3) : (b = -3);
//	printf("%d",b);
//	return 0;
//}
//int main() {
//	int a = 0;
//	scanf("%d",&a);
//	int b = (a > 3 ? 1 : 0);
//	printf("%d", b);
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 1;
//	int c = a > b;
//	printf("%d", c);
//	return 0;
//}
int main() {
	int a = 1;
	int b = 2;
	int d = (a > b, a = b + 10, a, b = a + 1);
	//         0      11       11     13
	//最后d为13
	return 0;
}