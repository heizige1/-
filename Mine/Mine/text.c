
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
	//��ʼ��Ϸ
	while (1)
	{
		/*ShowBoard(show, ROW, COL);*/

		printf("��������Ҫչ�������꣺");
		int i ,j;
		scanf("%d%d", &i, &j);
		if (mine[i][j]=='1')
		{
			printf("������ˣ���Ϸ����\n");
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