#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu() {
	printf("��ѡ��(����1/2)\n");
	printf("1.play\n");
	printf("2.exit\n");
}
void game() {
	int num = rand() % 101;
	printf("������²���\n");
	while (1) {
		int guess = 0;
		scanf("%d", &guess);
		if (num < guess) {
			printf("�²�����ֹ�������������²���\n");

		}
		else if (num > guess) {
			printf("�²�����ֹ�С������������²���\n");
		}
		else {
			printf("��ϲ�㣬�¶���\n");
			printf("��������һ����\n");
			menu();
			break;
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do {
		input = 0;
		scanf("%d", &input);
		switch (input) {
		case(1):
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case(2):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������е�ѡ��,��Ϸ�ر�\n");
			break;
		}
	} while (1 == input);
}
