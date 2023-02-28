#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"	


//��Ϸ�˵�
void menu() {
	printf("***************************************\n");
	printf("*************** 1.play ****************\n");
	printf("*************** 0.exit ****************\n");
	printf("***************************************\n");
}


//��Ϸ����
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
	printf("\n��Ϸ����\n\n\n");
}


//ѡ���Ƿ�ʼ��Ϸ
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{	
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}