#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int AND(int x, int y)
//{
//	return x & y;
//}
//int OR(int x, int y)
//{
//	return x | y;
//}
//int ExclusiveOR(int x, int y)
//{
//	return x ^ y;
//}
//int LeftShift(int x, int y)
//{
//	return x << y;
//}
//int RightShift(int x, int y)
//{
//	return x >> y;
//}
//int Compare(int x, int y)
//{
//	return (x > y ? x : y);
//}
//void menu()
//{
//	printf("******************************************\n");
//	printf("*************  1.Add  2.Sub    ***********\n");
//	printf("*************  3.Mul  4.Div    ***********\n");
//	printf("*************  5.AND  6.OR     ***********\n");
//	printf("*************  7.ExclusiveOR   ***********\n");
//	printf("*************  8.LeftShift     ***********\n");
//	printf("*************  9.RightShift    ***********\n");
//	printf("*************  10.Compare      ***********\n");
//	printf("*************  0.Exit          ***********\n");
//	printf("******************************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		int(*pfArr[11])(int, int) = { NULL,Add,Sub,Mul,Div,AND,OR,ExclusiveOR,LeftShift,RightShift,Compare };
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 10)
//		{
//			printf("请输入两操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	return 0;
//}