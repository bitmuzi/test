#include "three_chess.h"
void menu()
{
	printf("*******三子棋******\n");
	printf("*******1.PLAY******\n");
	printf("*******0.EXIT******\n");
	printf("*******************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL];
	//ROW,COL均为3，宏定义是为了后期便于维护和更改
	//利用二维数组创建棋盘.落子地初始化为空格
	InitBoard(board, ROW, COL);
	//展示棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		ret = checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋,随机下棋
		ComputerMove(board, ROW, COL);
		ret = checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == 'Q')
	{
		printf("平局了，再来一局吧\n");
	}
	DisplayBoard(board, ROW, COL);
	Sleep(3000);//暂缓3秒，头文件Windows.h
	system("cls");//清空屏幕，头文件stdlib.h
}
int main()
{
	srand((unsigned int)time(NULL));//不懂点链接
	int input = 0;
	do
	{
		menu(); 
		printf("请输入（1/0）:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重输!\n");
			break;
		}
	} while (input);
	return 0;
}