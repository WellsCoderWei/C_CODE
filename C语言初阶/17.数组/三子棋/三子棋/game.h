#pragma once

//�ַ�����
#define ROW 3
#define COL 3

//ͷ�ļ�����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//��Ϸ�ڽ��й��̣�
//           ����char����
//1.���Ӯ�� - *
//2.����Ӯ�� - #    ����* #	Q ��Ϸ����
//3.ƽ��     - Q

//4.��Ϸ���� - C   ���ûӮ ����ûӮ ����Ҳû����ƽ�� ��ϷӦ�ü���

char isWin(char board[ROW][COL], int row, int col);