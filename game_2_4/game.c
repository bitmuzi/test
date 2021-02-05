
#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i,j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("----------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------\n");

}

void Setmine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (win<row*col-EAZY)
	{
		//录入坐标后要考虑
		//1 坐标是否合法
		//2 所选坐标是不是雷
		//3 不是就要统计周围雷的个数
		printf("请输入要排查的坐标");
		scanf("%d%d", &x, &y);
		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				Displayboard(mine, row, col);
				break;
			}
			else
			{
				int ret = Getcount(mine, x, y);
				show[x][y] = ret + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重输！\n");
		}
	}
	if (win == row*col - EAZY)
	{
		printf("恭喜你，挑战成功\n");
		Displayboard(mine, row, col);
	}
}

//'1'-'0'=1  '0'-'0'=0
int Getcount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		 + mine[x + 1][y] + mine[x + 1][y + 1]- 8 * '0';
}