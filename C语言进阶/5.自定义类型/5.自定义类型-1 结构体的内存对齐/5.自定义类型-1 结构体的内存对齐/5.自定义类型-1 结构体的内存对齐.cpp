#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体的内存对齐规则
//struct S
//{
//	char c1; //1
//	int i; //4
//	char c2; //1
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s)); //12
//	return 0;
//}

//#pragma pack(2)
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct s));  //8
//	return 0;
//}

// macro   类型 成员名
//offsetof(type,member) 谁谁谁的偏移量
////返回类型size_t的值，与类型中成员的偏移量
//#include <stddef.h>
//struct s 
//{              //计算c1相较于结构体成员的偏移量几?
//	char c1; //1
//	int i;   //4
//	char c2; //1
//};
//
//int main()
//{
//	//offsetof宏可以计算，结构体中某个成员相较于这个结构体变量起始位置的偏移量
//	printf("%d\n", offsetof(struct s, c1));  //0
//	printf("%d\n", offsetof(struct s, i));  //4
//	printf("%d\n", offsetof(struct s, c2)); //8
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
////结构体传参
////传值
//void printf1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
////            结构体 指针
//void printf2(const struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	printf1(s);  //传结构体 变量
//	printf2(&s); //传地址  
//	return 0;
//}

//结论：结构体传参时，要传结构体地址
//函数传参时，参数需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象时，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降


//什么是位段?
//位段的声明与结构体类似，但有两点不同：
//1.位段的成员必须是int、signed int、unsigned int、char(属于整型家族)类型
//2.位段的成员后边有一个冒号和一个数字

//姓别    2bit足够表示性别这3种状态
//00男
//01女
//10保密
//11

//两个比特位空间里可以存00 01 10 11 四种状态
// 两个比特位可以存4中类型

//A就是一个位段类型
//struct A
//{
//	//开辟4个字节
//	int _a : 2;  //2bit   a最多有4种取值状态
//	int _b : 5;  //5bit
//	int _c : 10; 
//	//开辟4个字节
//	int _d : 30;
//};              //47bit   32bit+15bit    开辟2个整型，一个整型是4， 2*4=8个字节
//
//int main()
//{
//	printf("%d\n", sizeof(struct A)); //8
//	return 0;
//}

//位段的内存分配：
//1.位段的成员必须是int、signed int、unsigned int、char(属于整型家族)类型
//2.成员是int类型 按4字节对齐开辟空间，成员是char类型 按1字节对齐开辟空间


//空间是如何开辟的？
//struct S
//{                            //低地址         
//	char a : 3;  //开辟1个字节  0010 0011     
//	char b : 4; 
//	char c : 5;  //开辟1个字节  0000 0101
//	char d : 4;  //开辟1个字节  0000 0100    
//};                          //高地址
//
//struct S s = { 0 };
//
//int main()
//{                                             //十六进制
//	s.a = 10;   //开辟1个字节 0110 0010         0x62  
//	s.b = 12;   
//	s.c = 3;   //开辟1个字节  0000 0011         0x03
//	s.d = 4;   //开辟1个字节  0000 0100         0x04
//	return 0;
//}

//结论：在当前vs编译器底下(以一个字节为单位来讨论)，
// char  一个字节内部的数据在使用时，是先使用低地址(低比特位的数据)， 再使用高地址(高比特位的数据)
// char                                                     从右向左使用的

// int  一个整型内部，从右向左使用，给你一块空间，是从右向左使用，从低位向高位使用
// int  当一块空间里，剩余的空间内容，不够下一个成员使用时，这块空间被浪费掉

//大小端考虑的是字节序
//16位 - int - 2byte
//TOS Tybe of Service 服务类型
//protocol 协议

enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun,
};

enum Sex
{
	MALE,
	FEMALE,
	SECRET,
};

//        符号常量 在代码里替换，没有类型
//#define RED 5
//#define GREEN 8
//#define BLUE 9

enum Color 
{//常量     枚举里定义的符号是属于枚举类型
	RED=1, //常量赋初值
	GREEN=2,
	BLUE=4,
	//枚举类型的可能取值 - 枚举常量   可能取值都是有值的，默认从0开始，一次递增1，在定义的时候也可以赋初值
	//枚举是类型，可以定义变量，但枚举成员是枚举常量，枚举常量值是整型值
	//枚举的可能取值的数值是整型
};

int main()
{
  //RED=6; //err  在cpp里有类型检查
	              //  :: 限定符  限定GREEN来自Color
	enum Color c = Color::GREEN;  //让类型使用更严谨
	//枚举的取值是一个GREEN,GREEN是整数

	printf("%d\n", RED); //0
	printf("%d\n", GREEN); //1
	printf("%d\n", BLUE); //2

	//枚举类型的大小就是整型变量的大小
	printf("%d\n", sizeof(c));  //枚举变量大小 只有一种可能取值 - 整型大小
	return 0;
}

enum Option
{
	EXIT,
	ADD,
	SUB,
	MUL,
	DIV,
};

void menu()
{
	printf("************************************\n");
	printf("********** 1.Add   2.Sub ***********\n");
	printf("********** 3.Mul   4.Div ***********\n");
	printf("********** 3.Mul   4.Div ***********\n");
	printf("***********    0.Exit    ***********\n");
	printf("************************************\n");
}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}


//test.c           编译             链接          test.exe可执行程序
//          预编译 编译 汇编                      已生成可执行程序，可执行程序才能被调试
//                                                调试一定是在生成程序之后，运行代码时可以对程序进行一定的调试


