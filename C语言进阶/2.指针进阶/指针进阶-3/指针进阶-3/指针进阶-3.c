#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{//调用0地址处的函数，该函数无参，返回类型是void
//	//(*(void(*)())0)();
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	return 0;
//}
//
//     //signal是一个 函数声明
////1)
//void(* signal(int, void(*)(int)))(int);  
////        signal(int, void(*)(int))
//// void(*                           )(int);
////          void(*)(int) 函数指针类型
////1. signal和()先结合，说明signal是个函数名
////2. signal函数的 第一个参数类型是int，第二个参数类型是void(*)(int)函数指针
////   该函数指针，指向一个参数为int，返回类型为void的函数
////3. signal函数的返回类型也是一个void(*)(int)函数指针
////   该函数指针，也指向一个参数为int，返回类型为void的函数
//
////void(*)(int) signal(int, void(*)(int)); //err 语法不支持
////2)
//typedef void(*pfun_t)(int);  //对 void(*)int 函数指针类型 重命名为pfun_t
//pfun_t signal(int, pfun_t);  //pfun_t就是这个函数指针的类型 等价


//函数指针数组 - 存放函数指针的数组
//int* p;  //整型指针                                    char* pc;   字符指针
//int* arr[5];  //整型指针数组                           char* ch[10];  字符指针数组
//int(*parr[2])(int, int);  //函数指针数组               char(*pch[3])(char); 函数指针数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int,int) = Add;  //f1 函数指针
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { pf1,pf2 };  //函数指针 存放函数地址
//	int(*pfArr[2])(int, int) = { Add,Sub }; //函数名 是函数地址
////	int(*        )(int, int)
////		 pfArr[2]  除了数组名和[]以外，剩下的都是函数指针
////       pfArr  -  函数指针数组 - 可以存放同类型的函数指针
//	return 0;
//}


//函数指针数组用途
//整型计算器 - 计算整型变量的加、减、乘、除
void menu()
{
	printf("******************************************\n");
	printf("**********  1.Add    2.Sub   *************\n");
	printf("**********  3.Mult   4.Div   *************\n");
	printf("**********      0.exit       *************\n");
	printf("******************************************\n");
}
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mult(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{// a&b  a^b  a|b  a>>b  a<<b  a>b
	int input;
	do
	{
		menu();
		//int input;  //int input; 放在do while循环这不行，因为do-while循环，在while这要用，创建在循环里是不行的，要创建在外头
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1: 
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			 ret = Add(x,y);
			 printf("ret = %d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x,y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Mult(x,y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Div(x,y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);

	return 0;
}
