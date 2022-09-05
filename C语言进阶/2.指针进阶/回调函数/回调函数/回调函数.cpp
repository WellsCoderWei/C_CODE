#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//回调函数的概念一定是通过函数指针去调用这个函数。如果把函数的指针或者地址作为函数参数传递给另外一个函数。
//当这个指针被用来调用其所指向函数时，就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或者条件发生时，由另外一方调用，对事件或者条件的响应。
//void menu()
//{
//	printf("*************************************************\n");
//	printf("***************** 1.Add  2.Sub  *****************\n");
//	printf("***************** 3.Mul  4.Div  *****************\n");
//	printf("*****************    0.exit     *****************\n");
//	printf("*************************************************\n");
//}
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
//
////       函数名是函数的地址 参数部分得有一个函数指针
//int calc(int(*pf)(int, int)) //函数指针指向函数参数是int int 返回类型也是int
//{//calc函数 传什么参数 进行什么运算   输入 两个操作数 接收 两个操作数 返回 两个操作数
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	//pf里如果存的是函数Add的地址 传过来Add pf指向Add函数
//	return pf(x, y); //传参调用
//	//calc返回类型是int 运算的结果return返回去
//}
////前面写的加减乘除函数地址没有直接用，没有直接调用Add函数 Sub函数
////把Add函数的函数名作为参数传给calc函数
////通过pf指针调用它所指向函数，这种机制被称为回调函数机制
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		int ret = 0;
//
//		switch (input)
//		{
//		case 1:
//			ret = calc(Add); //函数名就是函数的地址 作为参数传进去
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择。\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int(*pfArr[5])(int, int) = {NULL,Add,Sub,Mul,Div};  //函数指针数组充当跳板作用 -- 转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数:>");  //输入
//			scanf("%d %d", &x, &y);  //接收
//			ret = (pfArr[input])(x, y); //找到函数地址传参 调用
//                      选择1 访问下标为1的位置
//                      选择2 访问下标为2的位置 拿到的是Sub函数的地址
//                      intput为数组下标的元素 其实就是函数的地址
// 通过不同下标访问了不同的元素，不同的元素存放的是不同的函数地址
// 通过下标找到一个元素，通过元素直接去调用一个函数
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择。\n");
//		}
//	} while (input);
//	return 0;
//}

int main()
{

	return 0;
}