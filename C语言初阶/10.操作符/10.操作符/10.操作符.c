#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{/*
//	float a = 9 / 2.0;
//	printf("%f\n", a);*/
//	int a = 9 % 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//int a = 2;
//	//int b = a << 1; //a向左移动一位 放到b里去
//	//printf("%d\n", b);
//
//	//位操作符：&按位与  |按位或    ^按位异或
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	//a = a + 5;
//	////a += 5;
//	////a = a - 3;
//	//a -= 3;
//	//a = a % 3;
//	a %= 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//printf("%d\n", !a);
//	a = -5;
//	a = -a;
//	a = +a;
//	return 0;
//}

int main()
{
	//printf("%d\n", sizeof(int)); //计算整型大小

	//int a = 10;
	//printf("%d\n", sizeof a); //计算变量大小 a的类型就是int  int也创建了a   计算变量a 和 计算变量a的类型int 其实是一个结果 大小一样是4  变量a和a的类型sizeof都可以算

	int arr[10];
	printf("%d\n", sizeof(arr)); // 10个元素 每个元素是1个int   1个int是4个字节  10*4=40个字节   计算数组总元素大小40（单位 字节）
	printf("%d\n", sizeof(arr[0])); //计算第1个元素大小4  每1个元素都是整型，第1个元素当然也是整型 大小是4
	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //计算数组元素个数  10个元素
	return 0;
}