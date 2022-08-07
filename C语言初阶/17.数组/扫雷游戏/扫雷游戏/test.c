#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**************************************************\n");
	printf("************         1.play          *************\n");
	printf("************         0.exit          *************\n");
	printf("*********     tip1: 0 0 进行标记操作      ********\n");
	printf("*********     tip2: 0 1 取消标记操作      ********\n");
	printf("**************************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化
	init_board(mine, ROWS, COLS, ' '); //'*'雷  ' '非雷
	init_board(show, ROWS, COLS, '-'); //'-'待翻开

	//打印初始化
	display_board(show, ROW, COL);
	

	//布置雷
	set_mine(mine, ROW, COL);
	/*display_board(mine, ROW, COL);*/

	//排查雷
	find_mine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
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
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}