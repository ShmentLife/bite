#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char input[20] = { 0 };
	printf("����30s������ ����ɵ�� ��������ĵ��Խ�����30s��ػ�\n");
	system("shutdown -s -t 10");
	scanf("%s", input);
	if (strcmp(input, "hh") == 0) {
		printf("����Ϊ�һ��������𣬹���fw\n");
		system("shutdown -s -t 1");
	}
	else {
		printf("���벻��ȷ����fw��Ҫ���㻹�����˼��\n");
		system("shutdown -s -t 1");
	}
}