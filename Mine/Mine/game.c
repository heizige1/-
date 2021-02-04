#include"game.h"

void InitBoard(char arr[ROWS][COLS], int row, int col, char val)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = val;
		}
	}
}

void ShowBoard(char arr[ROWS][COLS], int row, int col, char val)
{
	printf("  ");
	for (int i = 0; i <= row; ++i)
	{
		printf("%d ", i);
	}
	printf("\n");

		for (int i = 0; i <= row; ++i)
		{
			printf("%d ", i);
			for (int j = 0; j <= col;++j)
			{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void GenerateMine(char arr[ROWS][COLS], int row, int col, int difficulty)
{
	while (difficulty)
	{
		int i = rand() % row+1;
		int j = rand() % col+1;
		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			--difficulty;
		}
	}
}



int GetMine(char mine[ROWS][COLS], int i, int j)
{
	int n= mine[i - 1][j - 1] + mine[i - 1][j] + mine[i - 1][j + 1] + mine[i][j - 1] + mine[i][j + 1] + mine[i + 1][j - 1] + mine[i + 1][j] + mine[i + 1][j + 1];
	return n - 8 * '0';
}
