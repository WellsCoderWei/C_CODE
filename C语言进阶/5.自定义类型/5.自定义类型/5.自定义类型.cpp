#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//自定义类型：结构体、枚举、联合
//结构体的声明 语法形式
// struct-关键字
//struct tag     tag-结构体的标签名
//{
//	member-list;  //成员变量的列表
//}variable-list;  //结构体变量

//描述一个学生
struct Stu   //类型声明
{
	char name[20];
	int age;
	char sex[5];
	char id; //学号
	int score;
};

struct Book
{
	char name[20];
	int price;
	char id[12];
}b2,b3; //创造结构体类型的同时，创建结构体变量   全局的

//结构体特殊的声明，在声明结构时可以 不完全的声明
//匿名结构体类型 - 可以没有名字  但只能创建一次，因为没有结构体标签，构不成结构体

struct
{
	int a;
	char b;
	float c;
}s; //用匿名结构体类型直接创建了，结构体变量s
struct
{
	char c;
	int i;
	char ch;
	double d;
}a[20], * ps;  //用匿名结构体类型创，建结构体指针

//结构的自引用 - 结构体里可以包含结构体对象，结构体包含结构体
//在结构中包含一个类型为该结构本身的成员是否可以呢？
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;       //在一个结构体类型里，在struct B类型里包含一个struct A类型变量sa
//	struct A sa;  //结构体类型里是可以包含结构体变量的，一个结构体类型里包含另一个结构体类型的变量，作为它的成员是没有任何问题的
//	double d;
//};


//sn里有一个整型d，4个字节，这4个字节由加上后面的大小
//struct N
//{
//	int d;  //结构体类型里有一个d是整型类型的    //4 byte
//	//struct N n;  //还有一个是自己结构体类型的n  //struct N 类型变量n，大小占多少？ 4+   结构体里永远有结构体本身，死递归，没法算大小
//	//此场景应用不对，一个变量的大小，不可能无限大下去    结构体类型里有自己的结构体类型是不现实的
//};

//结构体如何实现自引用？ 结构体的自引用怎么实现？
// 答：在同类型里不是包含同类型变量，而是包含同类型的结构体指针。

//数据结构：数据在内存中存储的结构
//有一组数据1 2 3 4 5 要存到内存里
//存储类型1： 给一块连续的空间，把1 2 3 4 5 放进去

//此时，一个节点出来了。这个节点能够找到同类型的下一个节点，这就叫作结构体的自引用，自己能找到跟自己同类型的下一个元素
//struct Node
//{
//	int data;
//	struct Node* next; //应该存结构体指针    指针大小变量，大小固定可算4/8个字节
//};

//struct //当把结构体标签名省略掉时，把Node省略掉 出问题
//{
//	int data;
//	struct Node* next; //应该存结构体指针    指针大小变量，大小固定可算4/8个字节
//	      //这里Node 哪里来的? 写法有问题
//};

//把匿名的类型重新起个名字
//typedef struct  
//{
//	int date;
//	Node* next;  //err
//}Node; //叫Node


typedef struct Node   //必须加上名字，对这个名字重新起名字叫
{
	int data;
	struct Node* next;
}Node;  //struct Node


//有了结构体类型，定义变量
struct point
{
	int x;
	int y;
}p1;  //声明类型的同时定义变量P1
struct point p2;  //定义结构体变量p2

//初始化：定义变量的同时赋初值
struct point p3 = { 2,3 };

//struct S
//{
//	char c;
//	int i;
//}s1,s2;

//结构体包含结构体如何初始化？
//struct B
//{
//	double d;
//	struct S s; //s 成员是一个结构体
//	char c;
//};

//int main()
//{
//	struct B sb = { 3.14,{'g',88},'h' };
//	struct B* p = &sb;
//	printf("%lf %c %d %c", p->d, p->s.c, p->s.i, p->c);
//
//	//把成员打印出来，打印成员 .针对结构体变量    ->真对结构体指针  操作符
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	//初始化：定义变量的同时赋初值
//	struct S s3 = {/*char c 一个字符*/'x',10 };  //成员不只一个
//	//struct N sn;  //假设可行sn所占空间大小是多少？   
//
//	//ps = &s;  err  站在编译器角度理解，两个声明是完全不同的结构体类型，所以是非法的
//	struct s;  //匿名结构体类型 - 只能创建一次，因为没有结构体标签，构不成结构体
//
//	//类型是用来创建变量的   局部的
//	struct Book b1 = { "hehe",58,"1234567" };
//	return 0;
//}


//结构体内存大小计算
struct S
{
	int i; //4
	char c; //1
};

struct S2
{
	char c1; //1
	int i; //4
	char c2; //1

};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s)); //8

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2)); //12
	return 0;
}

//结构体内存对齐