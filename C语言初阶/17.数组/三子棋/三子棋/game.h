#pragma once

//字符声明
#define ROW 3
#define COL 3

//头文件包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//游戏在进行过程：
//           返回char类型
//1.玩家赢了 - *
//2.电脑赢了 - #    返回* #	Q 游戏结束
//3.平局     - Q

//4.游戏继续 - C   玩家没赢 电脑没赢 棋盘也没下满平局 游戏应该继续

char isWin(char board[ROW][COL], int row, int col);