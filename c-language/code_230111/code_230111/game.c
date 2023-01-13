#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu() {
	printf("请选择(输入1/2)\n");
	printf("1.play\n");
	printf("2.exit\n");
}
void game() {
	int num = rand() % 101;
	printf("请输入猜测数\n");
	while (1) {
		int guess = 0;
		scanf("%d", &guess);
		if (num < guess) {
			printf("猜测的数字过大，请重新输入猜测数\n");

		}
		else if (num > guess) {
			printf("猜测的数字过小，请重新输入猜测数\n");
		}
		else {
			printf("恭喜你，猜对了\n");
			printf("还想在玩一次吗？\n");
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
			printf("游戏开始\n");
			game();
			break;
		case(2):
			printf("退出游戏\n");
			break;
		default:
			printf("请输入已有的选择,游戏关闭\n");
			break;
		}
	} while (1 == input);
}
