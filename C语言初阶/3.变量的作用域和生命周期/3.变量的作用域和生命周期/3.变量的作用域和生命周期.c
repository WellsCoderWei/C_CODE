#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int g_val = 2022;//全局变量
////printf("3:%d\n", g_val); 这样的写法是错误的，代码都得写到函数里面去 执行性的代码不是变量的创建，变量的创建可以放在{}的外头，但执行性的代码 像打印一句话、变量赋值必须放到一个{}里边去，代码是不可以放到{}外头的，不符合语法规定
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//		int a = 10; //现在这个变量a作用域是在自己所在的大括号  这个变量a只能在代码框内部使用，出了框就不行了
//		printf("a=%d\n", a); //这里就是变量a的作用域，变量在哪里使用/起作用，哪里就是变量的作用域
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}

extern int g_val;//声明 调用外部变量可以使用
int main()
{
	//同一个工程里跨文件
	printf("%d\n", g_val);
	return 0;
}

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}