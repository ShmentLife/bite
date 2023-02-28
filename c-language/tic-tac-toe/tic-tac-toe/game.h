#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
//≥ı ºªØ∆Â≈Ã
void InitBoard(char board[ROW][COL], int row, int col);
//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROW][COL], int row, int col);
//ÕÊº“œ¬∆Â
void PlayerPlace(char board[ROW][COL], int row, int col);
//µÁƒ‘œ¬∆Â
void ComputerPlace(char board[ROW][COL], int row, int col);
//≈–∂œ ‰”Æ
char IsWin(char board[ROW][COL], int row, int col);
//≈–∂œÀ≠”Æ
void WhoWin(char ret);