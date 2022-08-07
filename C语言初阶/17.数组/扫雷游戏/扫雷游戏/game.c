#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ��
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

//��ӡ��ʼ��
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

//������
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == ' ') //�����ڿո�˵���Ѿ����ù��ף�������������
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
			if (i >= 1 && i <= ROW && j >= 1 && j <= COL) //��������������Ͳ�չ����
			{
				if (get_mine_count(mine, i, j) == 0 && show[i][j] == '-')
				{
					show[i][j] = ' ';
					spread_mine(mine, show, x, y);
				}
				else if (get_mine_count(mine, i, j) != 0 && show[i][j] == '-') //�ж�mine��show��ͬʱ���֣��޷�����show
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
			if (mine[i][j] != '*' && show[i][j] == '-') //mine����' '�� �� show'-' ˵�����з������������
			{                                          //��ѭ������ mine����' '�� �� show����'-'������ʱ��˵�����з������ѱ����������׳ɹ�
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
		printf("������������:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '-')
		{
			show[x][y] = '#';
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}

static void del_sign_show(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������������:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] == '#')
		{
			show[x][y] = '-';
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}

//�Ų���
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������Ų�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '-')
			{
				printf("���������Ų��������������\n");
			}
			else if (mine[x][y] == '*')
			{
				printf("���ź����㱻ը����\n");
				display_board(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				if (count + '0' == '0')
				{
					show[x][y] = ' ';
					spread_mine(mine, show, x, y); //չ��������
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
			printf("���겻�Ϸ������������룡\n");
		}
		if (is_win(mine, show, row, col) == 1)
		{
			printf("��ϲ�㣬���׳ɹ���\n");
			display_board(mine, ROW, COL);
			break;
		}
	}
}