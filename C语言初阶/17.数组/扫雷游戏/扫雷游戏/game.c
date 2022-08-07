#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印初始化
void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("=======================================\n");
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
		if (i < col)
		{
			printf("|");
		}
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("---");
		if (i < col)
		{
			printf("|");
		}
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		printf("|");
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row)
		{
			for (j = 0; j <= col; j++)
			{
				printf("---");
				if (j < col)
				{
					printf("|");
				}
			}
			printf("\n");
			
		}
	}
	printf("=======================================\n");
}

//布置雷
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == ' ') //不等于空格说明已经设置过雷，重新生成坐标
		{
			mine[x][y] = '*';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

static void spread_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i >= 1 && i <= ROW && j >= 1 && j <= COL) //如果雷区外的坐标就不展开了
			{
				if (get_mine_count(mine, i, j) == 0 && show[i][j] == '-')
				{
					show[i][j] = ' ';
					spread_mine(mine, show, x, y);
				}
				else if (get_mine_count(mine, i, j) != 0 && show[i][j] == '-') //判断mine，show不同时出现，无法操作show
				{
					int count = get_mine_count(mine, i, j);
					show[i][j] = count + '0';
				}
			}
		}
	}
}

static int is_win(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (mine[i][j] != '*' && show[i][j] == '-') //mine非雷' '区 且 show'-' 说明还有非雷区域待翻开
			{                                          //当循环结束 mine非雷' '区 且 show已无'-'待翻开时，说明所有非雷区已被翻开，排雷成功
				return 0;
			}
		}
	}
	return 1;
}

static void sign_show(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入标记坐标:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '-')
		{
			show[x][y] = '#';
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}

static void del_sign_show(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入标记坐标:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '#')
		{
			show[x][y] = '-';
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}

//排查雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入排查坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '-')
			{
				printf("此坐标已排查过，请重新输入\n");
			}
			else if (mine[x][y] == '*')
			{
				printf("很遗憾，你被炸死了\n");
				display_board(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				if (count + '0' == '0')
				{
					show[x][y] = ' ';
					spread_mine(mine, show, x, y); //展开非雷区
				}
				else
				{
					show[x][y] = count + '0';
				}
				display_board(show, ROW, COL);
			}
		}
		else if (x == 0 && y == 0)
		{
			sign_show(show, row, col);
			display_board(show, ROW, COL);
		}
		else if (x == 0 && y == 1)
		{
			del_sign_show(show, row, col);
			display_board(show, ROW, COL);
		}
		else
		{
			printf("坐标不合法，请重新输入！\n");
		}
		if (is_win(mine, show, row, col) == 1)
		{
			printf("恭喜你，排雷成功！\n");
			display_board(mine, ROW, COL);
			break;
		}
	}
}