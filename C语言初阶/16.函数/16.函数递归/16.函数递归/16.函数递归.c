#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main(); //递归函数自己调用自己  每一次调用一次自己就会打印一次hehe 死递归
//	return 0; //函数自己调用自己很容易发生Stack overflow error
//}
// 

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num!= 0)
//	{
//		count = count * 10 + num % 10;
//		num /= 10;
//	}
//
//	if (count > 9)
//	{
//		while (count != 0)
//		{
//			printf("%d ", count % 10);
//			count /= 10;
//		}
//	}
//	else
//	{
//		printf("%d ", count % 10);
//	}
//	
//	return 0;
//
//}

//接受一个整型值(无符号)，按顺序打印它的每一位。
//例如：输入：1234 输出：1 2 3 4
//void print(unsigned int n) 
////需要把num打印在屏幕上就可以了 不需要返回什么值
//{
//	//print(1234)
//	//print(123) 4
//	// print(12) 3 4
//	//print(1) 2 3 4
//	if (n > 9)//判断如果数字是大于一位数以上的数字 大于9就是两位数以上的数字 
//	//没有这一步 函数递归可以永远自己调用自己 死递归。控制递归什么时候进去 什么时候停止
//	{//参数部分是大于9的，就要把大的问题化为小的问题
//		print(n / 10); //要拆一位下来  利用print函数自己调用自己 来打印n/10的每一位
//		//这一步没有机会。让递归越来越逼近跳出条件
//	}
//	printf("%d ", n % 10);
//   
//}
//
//int main()
//{
//	unsigned int num = 0;
//	int count = 0;
//	scanf("%u", &num); //1234
//	print(num); //print函数可以打印参数部分 数字的每一位  让print打印把num传过去 传值调用
//	//把num传过去 print就会把num按照顺序打在屏幕上
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10); //让递归越来越逼近跳出条件
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}

//void test(int n) //传过来1得接收一下
//{
//	if (n < 10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1); //调用一个函数
//	return 0;
//}