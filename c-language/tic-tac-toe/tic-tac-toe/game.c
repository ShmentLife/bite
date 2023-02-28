#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col) {
	//for
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
	//memset(起始地址，想要替换的字符，要替换的字节数)
	//memset(&board[0][0], ' ', row * col * sizeof(board[0][0]);
}


void DisplayBoard(char board[ROW][COL], int row, int col) {
	printf("\n");
	for (int i = 0; i < row; i++) {
		//打印元素及列间隔
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		//打印纵向坐标
		printf("[%d]", i + 1);
		printf("\n");
		//打印行间隔
		if (i < row - 1) {
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
	//打印横向坐标
	for (int j = 0; j < col; j++) {
		printf("[%d] ", j + 1);
	}
	printf("\n\n");
}


void PlayerPlace(char board[ROW][COL], int row, int col)
{
	printf("请输入要下子的坐标（例如想要下到第一行第二列，输入:1 2）\n");
	while (1) {
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//合法性判断
		if ((x > 0 && x <= row) && (y > 0 && y <= row)) {
			//占有性判断
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标被占用，请更改坐标点\n");
			}
		}
		else {
			printf("数据不合法，请重新输入\n");
		}
	}
}


void ComputerPlace(char board[ROW][COL], int row, int col) {
	printf("\n电脑下棋\n");
	while (1) {
		int x = 0;
		int y = 0;
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (int i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[0][2];
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ') {
				return 'C';
			}
		}
	}
	return 'F';
}

void WhoWin(char ret) {
	if ('*' == ret) {
		printf("玩家胜利\n");
	}
	else if ('#' == ret) {
		printf("电脑胜利\n");
	}
	else {
		printf("平局\n");
	}
}

