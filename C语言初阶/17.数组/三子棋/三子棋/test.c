#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************************\n");
	printf("**********  1.play  0.exit  ***********\n");
	printf("***************************************\n");
}

void game()
{
	char board[ROW][COL]={0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	char ret = 0; //接收游戏状态
	while (1)
	{
	  //玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//每一方下完之后都应该判断一下输赢  isWin函数既能判断玩家赢也能判断电脑赢
		ret = isWin(board, ROW, COL); //传参判断有没有人赢，就是在判断数组里是不是有3个横线、3个竖线、或2个对角线 相连了
		//函数得返回一个char类型的返回值
		if (ret != 'C') //不等于字符'C' 相当于 等于字符'*' '#' 'Q'
		{
			break; //跳出while循环 去判断ret=什么字符
		}

	  //电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL); //传参过去要遍历数组的 行 列 对角线，得知道数组的行和列
		//记录到ret里
		if (ret != 'C') //返回不是'C' 游戏不需要继续
		{
			break; 
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n"); 
		DisplayBoard(board, ROW, COL); //把棋盘打印出来告诉玩家是怎么赢得
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}