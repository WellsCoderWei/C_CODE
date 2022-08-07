#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//#define ROW 10
//#define COL 10
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{//            赋值仅到对角线
//		for (j = 0; j <= i; j++)
//		{//第一列、对角线初始化为1
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < ROW - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}