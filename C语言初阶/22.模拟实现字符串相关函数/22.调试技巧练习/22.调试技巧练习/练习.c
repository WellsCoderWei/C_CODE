#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//题目：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水？
//喝了  空瓶
//20    20

//10   10
//5    5
//2    2 1
//1    1 1
//1  

//总共喝了39瓶

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	//买的
//	int total = money; //有多少钱 就可以喝多少瓶
//	int empty = money; //有多少钱 就有多少个空瓶
//
//	//置换的
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}