#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//写一个函数，每调用一次这个函数，都会将num的值增加1
//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//函数和函数之间是可以有机组合的
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//函数的嵌套调用：定义函数时不能嵌套定义，每一个函数都应该在{}外边独立存在
//int test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3(); //在test2函数里调用test3函数
//}
//int main()
//{
//	test2(); //在main函数里调用test2函数
//}

//链式访问：把一个函数的返回值 作为另外一个函数的参数
//int main()
//{
//	//求一个字符串的长度
//	//printf("%d\n", strlen("abc")); //strlen会返回一个整型
//
//	//char arr1[20] = {0};
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2)); //strcpy返回值做了printf函数的参数
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello";
//	printf("%s\n", strcat(arr, "bit"));
//	printf("%d\n", strlen(strcat(arr, "bit")));
//	return 0;
//}

//告诉编译器函数是什么 参数是什么 返回类型是什么
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int, int); //函数声明
//	printf("%d\n", Add(a, b)); //在调用函数之前先声明 使用函数要满足先声明后使用
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include "Add.h"
//#include "Subtract.h"
#include "Multiply.h"
//#include "Divide.h"

int main()
{
	int a = 10;
	int b = 20;
	/*printf("Add = %d\n", Add(a, b));
	printf("Subtract = %d\n", Subtract(a, b));*/
	printf("Multiply = %d\n", Multiply(a, b));
	/*printf("Divide = %d\n", Divide(a, b));*/
	return 0;
}
