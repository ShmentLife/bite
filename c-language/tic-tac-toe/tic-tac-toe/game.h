#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
//??ʼ??????
void InitBoard(char board[ROW][COL], int row, int col);
//??ӡ????
void DisplayBoard(char board[ROW][COL], int row, int col);
//????????
void PlayerPlace(char board[ROW][COL], int row, int col);
//????????
void ComputerPlace(char board[ROW][COL], int row, int col);
//?ж???Ӯ
char IsWin(char board[ROW][COL], int row, int col);
//?ж?˭Ӯ
void WhoWin(char ret);