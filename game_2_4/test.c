#include"game.h"

void menu()
{
	printf("********扫****雷*********\n");
	printf("*\t1.play\t\t*\n");
	printf("*\t0.exit\t\t*\n");
	printf("*************************\n");
}

void game()
{
	//创造棋盘数组
	char mine[ROWS][COLS];//存放已布置的雷信息
	char show[ROWS][COLS];//存放被排查出的雷信息
	//初始化棋盘,为避免函数冗余，将要全盘设置的字符直接录入
	//假设不像这样操作就要造两个Initboard
	Initboard(mine, ROWS, COLS,'0');//初始化为全为非雷，即‘0’
	Initboard(show, ROWS, COLS,'*');//初始化为全为‘*’
	//展示棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷区
	Setmine(mine, ROW, COL, EAZY);
	//展示棋盘
	//Displayboard(mine, ROW, COL);
	//Displayboard(show, ROW, COL);
	//排查雷
	Findmine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入（0/1）:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏，谢谢使用！");
			break;
		default:
			printf("输入错误，请重输！\n");
			break;
		}
	} while (input);
	return 0;
}
