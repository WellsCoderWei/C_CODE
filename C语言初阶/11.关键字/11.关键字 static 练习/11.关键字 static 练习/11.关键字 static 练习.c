#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//代码1 
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//代码1 static修饰局部变量
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()0
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//代码2 正常
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//
//	return 0;
//}

//代码2 static修饰全局变量  在编译时会出现连接性错误
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//
//	return 0;
//}

//代码3 正常
//extern int Add(int, int);
//int main()
//{
//	printf("%d\n", Add(2, 3));
//
//	return 0;
//}

//代码3 static修饰函数 在编译时会出现连接性错误
extern int Add(int, int);
int main()
{
	printf("%d\n", Add(2, 3));

	return 0;
}