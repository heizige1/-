
#include"game.h"



void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	GenerateMine(mine, ROWS, COLS, MEDIUM);
	
	/*ShowBoard(mine, ROW, COL);*/
	ShowBoard(show, ROW, COL);
	//开始游戏
	while (1)
	{
		/*ShowBoard(show, ROW, COL);*/

		printf("请输入你要展开的坐标：");
		int i ,j;
		scanf("%d%d", &i, &j);
		if (mine[i][j]=='1')
		{
			printf("你踩雷了，游戏结束\n");
			ShowBoard(mine, ROW, COL);
			break;
		}
		else
		{
			int mineNum = GetMine(mine, i, j);
			show[i][j] = mineNum+'0';
			ShowBoard(show, ROW, COL);
		}
	}
}

int main()
{
	game();

	return 0;
}