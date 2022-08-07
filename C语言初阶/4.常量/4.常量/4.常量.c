#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//1.字面常量
	//10; 整型常量
	//3.14; 浮点型常量
	//'a'; 字符常量
	//"abcder"; 字符串常量

	//2.const 修饰的 常变量
	//          //num本来是变量，因为num可变
	const int num = 10; //被const修饰 num就是常变量  具有常属性（不能被改变的属性）
	/*num = 20;*/ //error 左边num是被const修饰的 
	printf("num=%d\n", num);

	//int arr[10] = { 0 };
	//         //n的本质属性是变量 只不过说被const修饰了一下，但根上还是个变量 变成 常变量 不能被变为常量
	//const int n = 10;
	//int arr2[n] = { 0 }; //n在指定数组大小时，n是变量的 是不行的  这里需要n是常量，而n被const修饰以后 还是不能放在[]里，说明n不是常量，是常变量。

	//3.#define定义
//#define MAX 10000 //MAX就是 #define定义的标识符常量  MAX是不能改的
////MAX = 20000; error
//	int n = MAX; //设n等于MAX赋值 把MAX的值赋给n
//	printf("n=%d\n", n);

	return 0;
}

//4.枚举常量 可以一一列举的常量
//枚举关键字
//enum Sex //定义一个类型性别  把性别这种类型变量的 未来可能取值列举出来
//{
//	//枚举Sex类型变量的 未来可能取值 枚举常量
//	MALE = 3,//这里不是改值 是赋初值  给MALE附上一个最开始的值  最开始就有个值。  当给MALE 3 以后就不能改MALE了
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//用Sex枚举类型 定义s变量 表示一个人性别
//	enum Sex s = MALE;  //这个s变量可能取值只有3种,只能赋值3种中的一个
///*	MALE = 3;*/ //error MALE是常量不能改
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}