#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	for (int i = 0;i < 1000; i++) {
//		printf("%d\n", i);
//	}
//	for (int i = 0;i < 100; i++) {
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	 int* const p = &a;
//	*p = 0;//可修改
//	p = &b;//不可修改
//	return 0;
//}
//#include<assert.h>
//char* my_strcpy(char* str2,const char* str1) {
//	assert(str2 || str1);
//	int n = 0;
//	char* ret = str2;
//	while (str1[n] != '\0') {
//		*str2++ = *str1++;
//	}
//	return ret;
//}
//int main() {
//	char str1[] = "abcde";
//	char str2[20] = { 0 };
//	printf("%s",my_strcpy(str2, str1));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//void adjust_num(int* arr) {
//	int tmparr[10] = { 0 };
//	int count = 0;
//	for (int i = 0;i < 10; i++) {
//		if (*(arr+i) % 2 != 0) {
//			tmparr[count] = *(arr + i);
//			count++;
//		}
//	}
//	for (int i = 0;i < 10; i++) {
//		if (*(arr + i) % 2 == 0) {
//			tmparr[count] = *(arr + i);
//			count++;
//		}
//	}
//	for (int i = 0;i < 10; i++) {
//		arr[i] = tmparr[i];
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	adjust_num(arr);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<assert.h>
//int my_strlen(const char* str) {
//	int count = 0;
//	assert(str != NULL);
//	while (str[count] != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	char str[] = "abdfec";
//	printf("%d", my_strlen(str));
//	return 0;
//}
//int main() {
//	int money = 20;
//	int bottle = 0;
//	int sum = 0;
//	while (money > 0) {
//		money--;
//		bottle++;
//		if (bottle == 2) {
//			money++;
//			bottle = 0;
//		}
//		sum++;
//	}
//	printf("%d", sum);
//}
#include<stdio.h>
int main() {
    char in[100];
    gets(in);
    for (int i = strlen(in) - 1;i >= 0;i--) {
        printf("%c", in[i]);
    }
}