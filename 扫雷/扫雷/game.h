#pragma once
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化雷区
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印初始化雷区
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷       操作的是11*11的数组  但只操作中间9*9
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
//1.输入排查的坐标
	//2.检查坐标是不是雷
		//(1) 如果  是雷 - 很遗憾炸死了 - 游戏结束
	   // (2)     不是雷 - 统计坐标周围有几个雷 - 存储排查雷信息到show数组 - 游戏继续