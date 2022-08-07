#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	////printf("hehe\n");
	////printf("比特\n");
	////printf("%d\n", 100);
	//printf("sizeof(char)=%d\n\n", sizeof(char));
	//printf("sizeof(short)=%d\n\n", sizeof(short));
	//printf("sizeof(int)=%d\n\n", sizeof(int));
	//printf("sizeof(long)=%d\n\n", sizeof(long));
	//printf("sizeof(long long)=%d\n\n", sizeof(long long));
	//printf("sizeof(float)=%d\n\n", sizeof(float));
	//printf("sizeof(double)=%d\n\n", sizeof(double));

//	int age = 20;//创建一个变量 表示一个人的年龄  创建变量时给一个初始化的值
//	double weight = 75.3;
//
//	age++; // age=age+1;
//	weight = weight - 10;
//	printf("age=%d\n", age);
//	printf("weight=%lf\n", weight);
//	return 0;
//}

//int a = 100; //在大括号外边也定义一个变量a  是全局变量
//int main()
//{     //a是局部变量
//	int a = 10; //大括号内部的变量 都被称为局部变量
//	printf("%d\n", a);
//	return 0;
//}

//int global = 2021; //全局变量
//int main()
//{
//	int local = 2020; //局部变量
//	//下面定义的global会不会有问题？
//	int global = 2022; //局部变量
//	printf("global = %d\n", global);
//	return 0;
//}
//写一个代码求两个整数的和

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("输入两个操作数");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}