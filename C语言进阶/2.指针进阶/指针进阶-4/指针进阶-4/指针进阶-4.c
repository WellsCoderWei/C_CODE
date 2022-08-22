#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数指针数组 应用
// 1.给一个下标，通过下标找到数组里的一个元素，元素是某个函数的地址。
// 2.通过元素直接去调用地址对应的函数
// 转移表：跳板、跳转的作用
//计算器 - 计算整型变量的加、减、乘、除
// a&b a^b a|b a<<b a>>b a>b
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mult(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************************************\n");
//	printf("**************  1.Add  2.Sub  ****************\n");
//	printf("**************  3.Mul  4.Div  ****************\n");
//	printf("**************     0.exit     ****************\n");
//	printf("**********************************************\n");
//}
//int main()
//{                             
//	int input;
//	do
//	{
//		menu();                  //  数组每个元素是函数的地址，0NULL空指针 第一元素没放 无地址
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mult,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;            
//		printf("请选择:>"); //2
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			    // pfArr就是函数指针数组
//			ret = (pfArr[input])(x, y);  //调用函数传参
//			//(pfArr[input])函数地址拿到了input为下标的数组元素
//			//pfArr访问下标2的元素Sub
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
//			continue;
//		}
//
//	} while (input);
//	return 0;
//}

//指向 函数指针数组 的指针
//指向函数指针数组的指针是一个指针
//指针指向一个数组
//数组的元素都是函数指针

//整型数组
//int arr[5]; 
////整型数组指针 存放整型数组
//int (*p1)[5] = &arr; 
//
////整型指针数组
//int* arr[5]; 
////p2是指向 整型指针数组 的指针
//int* (*p2)[5] = &arr;
//
////函数指针
//int(*p)(int, int);
////函数指针数组 &pfunarr
//int(* pfunarr[4] )(int, int);
//int(* (*p3)[4] )(int, int) = &pfunarr; //取出函数指针数组地址  
//
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void(*pfun)(const char*) = test;
//	//函数指针数组pfunArr
//	void(*pfunArr[1])(const char*) = { test };
//	//&pfunArr 
//	void(* (*p4)[1] )(const char*) = &pfunArr;
//	return 0;
//}
//
//int arr[10];
//arr数组元素类型 int
//arr数组类型 int[10]


//回调函数
//通过函数指针调用的函数
//把函数的指针(地址)作为参数,传递给另外一个函数，当这个指针被用来调用，其所指向的函数时，就是回调函数
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Mod(int x, int y)
{
	return x % y;
}
int AND(int x, int y)
{
	return x & y;
}
int OR(int x, int y)
{
	return x | y;
}
int ExclusiveOR(int x, int y)
{
	return x ^ y;
}
int LeftShift(int x, int y)
{
	return x << y;
}
int RightShift(int x, int y)
{
	return x >> y;
}
int Compare(int x, int y)
{
	return (x > y ? x : y);
}
void menu()
{
	printf("**********************************************\n");
	printf("**********  1.Add  2.Sub          ************\n");
	printf("**********  3.Mul  4.Div          ************\n");
	printf("**********  5.Mod  6.AND          ************\n");
	printf("**********  7.OR   8.ExclusiveOR  ************\n");
	printf("**********  9.LeftShift           ************\n");
	printf("**********  10.RightShift         ************\n");
	printf("**********  11.Compare            ************\n");
	printf("**********  0.Exit                ************\n");
	printf("**********************************************\n");
}
int Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两操作数:>");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main()
{
	int input = 0;
	do
	{
		int ret = 0;
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret=%d\n", ret);
			break;
		case 5:
			ret = Calc(Mod);
			printf("ret=%d\n", ret);
			break;
		case 6:
			ret = Calc(AND);
			printf("ret=%d\n", ret);
			break;
		case 7:
			ret = Calc(OR);
			printf("ret=%d\n", ret);
			break;
		case 8:
			ret = Calc(ExclusiveOR);
			printf("ret=%d\n", ret);
			break;
		case 9:
			ret = Calc(LeftShift);
			printf("ret=%d\n", ret);
			break;
		case 10:
			ret = Calc(RightShift);
			printf("ret=%d\n", ret);
			break;
		case 11:
			ret = Calc(Compare);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}