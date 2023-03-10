#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"	


//游戏菜单
void menu() {
	printf("***************************************\n");
	printf("*************** 1.play ****************\n");
	printf("*************** 0.exit ****************\n");
	printf("***************************************\n");
}


//游戏主体
void game() {
	char board[ROW][COL] = {0};
	char ret = 0;
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1) {
		PlayerPlace(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') { 
			break;
		}
		ComputerPlace(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	WhoWin(ret);
	printf("\n游戏重置\n\n\n");
}


//选择是否开始游戏
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{	
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误重新选择\n");
			break;
		}
	} while (input);
	return 0;
}