#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EAZY 10

//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
//展示棋盘
void Displayboard(char board[ROWS][COLS],int row,int col);
//布置雷区
void Setmine(char mine[ROWS][COLS], int row, int col, int count);
//排雷
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
//查(x,y)周围8个方格的雷数
int Getcount(char mine[ROWS][COLS], int x, int y);