#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//题目：求两个数二进制中不同位的个数。 两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同？
//      输入两个整数，求两个整数二进制格式有多少个位不同。
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++; //每次执行n = n & (n - 1)  去掉一个1 这个动作++
//	}
//	return count; //返回去掉1的次数  就有多少个不同的位
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = m ^ n; //按位异或 相异为0 相同为1
//	int count = NumberOf1(ret);
//	printf("%d\n", count); //打印有多少个不相同的位
//}

//题目：打印整数二进制位的奇数位和偶数位。 获取一个二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	//打印偶数位：32位-2位   移动31位-1位  -2下一个偶数位的移动位数
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	//打印奇数位：31位-1位  移动30位-0位  -2移动下一个奇数位的移动位数
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}