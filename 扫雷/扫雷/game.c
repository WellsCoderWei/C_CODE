#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//1.初始化雷区
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
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

//2.打印初始化雷区
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("---------------扫雷游戏---------------\n");
//
//	for (i = 0; i <= col; i++)//列是在最上面的，在打印行之前 先打印列
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i); //在每一行打印之前先打印i 行数
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]); //打印初始化的 0 和 *
//		}
//		printf("\n");
//	}
//	printf("---------------扫雷游戏---------------\n");
//}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
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
			printf(" %c ", arr[i][j]);
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
		if (mine[x][y] == ' ')
		{
			mine[x][y] = '*';
			count--;
		}
	}
}


//3.布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷 
	int count = EASY_COUNT; //布置成功一个 count--   当count=0时，不再布置雷
	while (count) //count != 0 进while循环 布置雷
	{
		//生成随机下标 把雷放进去
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--; //布雷成功count--     如果生成位置被占用，则不进入if语句 去减要布雷的个数。 回到while循环开头重新生成坐标
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	/*return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';*/
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
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
	for (i = x - 1; i <= x + 1; i++)//遍历'0'坐标周围九宫格
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i >= 1 && i <= ROW && y >= 1 && y <= COL) //且九宫格是雷区范围
			{
				//调用雷个数函数 把该坐标参数传过去 看有几个雷
				if (get_mine_count(mine, i, j) == 0 && show[i][j] == '*') //如果得到雷个数为0，则继续展开
				{                       //如果此坐标周围又没有雷
					show[i][j] = ' ';
					spread_mine(mine, show, i, j); //递归 继续展开非雷区
				}
				else if (get_mine_count(mine, i, j) != 0 && show[i][j] == '*')
				{
					int count = get_mine_count(mine, i, j); //返回值放到count里
					show[i][j] = count + '0'; 
				}
			}
		}
	}
}

static void sign_show(char show[ROWS][COLS], int row, int col)//标记坐标
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请选择需要标记的坐标:>");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '*')
		{
			show[x][y] = '#';
			break;
		}
		else
		{
			printf("选择错误，请重新选择!\n");
		}
	}
}

static void del_sign_show(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请选择取消标记的坐标:>");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '#')
		{
			show[x][y] = '*';
			break;
		}
		else
		{
			printf("选择错误，请重新选择!\n");
		}
	}
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	//检查坐标合法性
	while (win < row * col - EASY_COUNT) //小于说明还有雷要排查
	{
		printf("tip1：坐标输入0 0进行标记操作\n");
		printf("tip2：坐标输入0 1进行取消标记操作\n");
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("\n");
				printf("此坐标已排查过，请重新选择排查坐标！\n");
				printf("\n");
				continue;
			}
			else if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{   //不是雷的情况下，统计x,y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				if (count + '0' == '0')
				{
					show[x][y] = ' ';
					spread_mine(mine, show, x, y); //展开非雷区
				}
				else //在该坐标周围显示雷数
				{
					show[x][y] = count + '0'; // '0'是48  数字+字符=字符    数字+数字还是数字
				}
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else if (x == 0 && y == 0)//进行标记操作
		{
			sign_show(show, row, col);
			DisplayBoard(show, ROW, COL);
		}
		else if (x == 0 && y == 1)//进行取消标记操作
		{
			del_sign_show(show, row, col);
			DisplayBoard(show, ROW, COL);
		}
		else
		{
			printf("坐标不合法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(show, ROW, COL);
	}
}
