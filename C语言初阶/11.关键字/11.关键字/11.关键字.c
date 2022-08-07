#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	register int num = 100; //num被register修饰了 建议num的值存放在寄存器中
//	return 0;
//}

//typedef unsigned int u_int; //typedef类型重定义 类型重命名  可以让类型更加简单去使用类型
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//将unsigned int 重命名为 uint_32,所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//	//num1和num2,这两个变量的类型是一样的 都是无符号类型
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}

//关键字static - 静态的
//void test()
//{
//	static int a = 1; //a是局部变量 用static修饰一下
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	//i从0开始，i<10,每次i+1 循环10次
//	int i = 0;
//	while (i < 10)
//	{
//		test(); //每次循环调一个test函数
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

extern int Add(int, int); //只需要声明 函数名 返回类型 返回参数类型即可
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //Add函数把a和b加一下 
//加出来的和放到sum里头去
	printf("sum=%d\n", sum);

	return 0;
}