#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char input[20] = { 0 };
	printf("请在30s内输入 我是傻逼 ，否则你的电脑将会在30s后关机\n");
	system("shutdown -s -t 10");
	scanf("%s", input);
	if (strcmp(input, "hh") == 0) {
		printf("你以为我会给你机会吗，滚吧fw\n");
		system("shutdown -s -t 1");
	}
	else {
		printf("输入不正确捏铁fw，要不你还是早点思把\n");
		system("shutdown -s -t 1");
	}
}