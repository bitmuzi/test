#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>//利用时间戳获得随机数，不会点链接
#define ROW 3
#define COL 3
//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断谁赢
char checkwin(char board[ROW][COL], int row, int col);
//判断是否满棋
int isfull(char board[ROW][COL], int row, int col);
