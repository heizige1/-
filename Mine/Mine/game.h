#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


enum Difficulty
{
	EASY=10,
	MEDIUM=20,
	HARD=30
};

void InitBoard(char arr[ROWS][COLS], int row, int col, char val);

void ShowBoard(char arr[ROWS][COLS], int row, int col);

void GenerateMine(char arr[ROW][COL], int row, int col,int difficulty);

//获取位置周围雷的数量

int GetMine(char mine[ROWS][COLS], int i, int j);