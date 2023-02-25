#define _CRT_SECURE_NO_WARNINGS 1
//struct Book
//{
//	int price;
//	char name;
//}book1;
//int main() {
//	struct Book book2;
//	return 0;
//}
//typedef struct Book
//{
//	int price;
//	char name;
//}book;
//int main() {
//	book a;//创建结构体变量
//	return 0;
//}
//struct num
//{
//	int x;
//	int y;
//};
//struct test
//{
//	char name[20];
//	struct num a;
//};
//int main() {
//	struct test a = { "hehe",{1,2} };
//	return 0;
//}
#include<stdio.h>
//struct book
//{
//	char name[20];
//	int price;
//};
//int main() {
//	struct book book1= { .price = 20, .name = "hehe" };
//	printf("%d\n", book1.price);
//	struct book* pbook1 = &book1;
//	printf("%d\n", pbook1->price);
//	//当然也以通过解引用
//	printf("%d\n", (*pbook1).price);
//	return 0;
//}
//struct S
//{
//	int data[1000];
//	int a;
//};
//struct S s = { {1,2,3},5 };
//void print1(struct S s) {
//	printf("%d\n",s.a);
//}
//void print2(struct S* s) {
//	printf("%d\n",s->a);
//}
//int main() {
//	print1(s);
//	print2(&s);
//	return 0;
//}#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", *p.a);
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("% s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}

//int main() {
//	char str[10000];
//	int count = 0;
//	while(scanf("%c",str) !)
//}
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//void analyze_string(char* string);   /* Prototype */
//
//void main(void)
//{
//	char  test1[] = "abc", * test2 = NULL, test3[] = "";
//
//	printf("Analyzing string '%s'\n", test1);
//	analyze_string(test1);
//	printf("Analyzing string '%s'\n", test2);
//	analyze_string(test2);
//	printf("Analyzing string '%s'\n", test3);
//	analyze_string(test3);
//}
//
///* Tests a string to see if it is NULL, */
///*   empty, or longer than 0 characters */
//void analyze_string(char* string)
//{
//	assert(string != NULL);        /* Cannot be NULL */
//	assert(*string != '\0');       /* Cannot be empty */
//	assert(strlen(string) > 2);  /* Length must exceed 2 */
//}
#include <string.h>
#include <assert.h>
void reverse(char* str) {
    /*通过做指针和右指针互换。*/
    int len = strlen(str);
    char* left = str;  //左指针是传进来的首元素的地址
    char* right = str + len - 1;//右指针是左指针地址加上字符串长度，然后减去1。
    while (left < right) {
        // 两值交换
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main() {
    char arr[200] = { 0 };
    scanf("%s", arr);
    //逆序函数
    reverse(arr);
    printf("%s", arr);
}
