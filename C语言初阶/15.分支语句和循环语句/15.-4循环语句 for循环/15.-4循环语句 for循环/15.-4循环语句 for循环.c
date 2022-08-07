#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (;;) //省略判断部分，判断部分恒为真
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n"); //双重循环打印9次
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n"); //双重循环打印9次
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n"); //打印3次
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //两个循环变量控制的
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int k = 0;
	                  //k=0判断条件是赋值 0赋值给k  0为假  循环一次都没进去
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}