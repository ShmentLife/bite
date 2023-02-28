#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col) {
	//for
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
	//memset(��ʼ��ַ����Ҫ�滻���ַ���Ҫ�滻���ֽ���)
	//memset(&board[0][0], ' ', row * col * sizeof(board[0][0]);
}


void DisplayBoard(char board[ROW][COL], int row, int col) {
	printf("\n");
	for (int i = 0; i < row; i++) {
		//��ӡԪ�ؼ��м��
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		//��ӡ��������
		printf("[%d]", i + 1);
		printf("\n");
		//��ӡ�м��
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
	//��ӡ��������
	for (int j = 0; j < col; j++) {
		printf("[%d] ", j + 1);
	}
	printf("\n\n");
}


void PlayerPlace(char board[ROW][COL], int row, int col)
{
	printf("������Ҫ���ӵ����꣨������Ҫ�µ���һ�еڶ��У�����:1 2��\n");
	while (1) {
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//�Ϸ����ж�
		if ((x > 0 && x <= row) && (y > 0 && y <= row)) {
			//ռ�����ж�
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else {
			printf("���ݲ��Ϸ�������������\n");
		}
	}
}


void ComputerPlace(char board[ROW][COL], int row, int col) {
	printf("\n��������\n");
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
		printf("���ʤ��\n");
	}
	else if ('#' == ret) {
		printf("����ʤ��\n");
	}
	else {
		printf("ƽ��\n");
	}
}

