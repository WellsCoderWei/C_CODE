#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("*********   1.play   **********\n");
	printf("*********   0.exit   **********\n");
	printf("*******************************\n");
}

void game()
{
	//1.布置雷 
	//       存放雷的棋盘  1 - 雷   0 - 不是雷
	//2.排查雷
	//       存放排查到的雷
	char mine[ROWS][COLS]={0}; //存放布置好的雷的信息
	char show[ROWS][COLS]={0}; //存放排查出的雷的信息
	//1.初始化雷区
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//2.打印初始化雷区
	DisplayBoard(show, ROW, COL);

	//3.布置雷
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL);*/

	//4.排查雷  从mine数组排查信息放到 show数组里去
	FindMine(mine,show,ROW,COL); //排查时 只排查9*9的格子，最终也放到9*9的格子 因此一定要传实际操作的行列 只操作9行9列
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