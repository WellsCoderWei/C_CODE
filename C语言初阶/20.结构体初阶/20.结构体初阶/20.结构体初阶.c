#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//集合：1.数组是一种集合。数组是一组相同类型元素的集合
//      2.结构体也是一种集合。结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量（值的类型可以不同）。
//                          //结构体的值-->结构体的成员
//char short int float 单个类型无法描述。描述复杂对象：结构体类型 - 把描述人的相关属性放到结构体里面去


//1.结构的声明:结构体的定义方式
//struct tag
//{
//	member - list;
//}variable-list;

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}Stu;

//struct B //B类型
//{
//	char c;
//	short s;
//	double d;
//};
//
////创建类型1
////struct结构体关键字
////struct Stu //Stu结构体类型名字
////{//大括号中描述结构体相关属性：名字、年龄、学号等信息
////	//（结构的）成员变量 - 成员可以是不同类型
////	char name[20]; //名字是个字符串
////	int age;
////	char id[20]; //学号
////}; 
//
//////创建类型2
//struct Stu 
//{
////结构体成员类型是struct B
//	struct B sb; //结构体的成员可以是其他结构体：sb是其他结构体
//	char name[20]; //结构的成员：name是数组
//	int age; //结构的成员：age是标量
//	char id[20]; //学号
//}s1, s2; //s1和s2也是创建两个结构体变量
////区别：在大括号外定义的s1和s2是全局变量
//
//int main()
//{
//	//int a = 10; 拿类型int创建了一个变量a
////拿类型struct Stu创建了 
////在main函数里 s是局部变量  (一个学生)对象 里得有空间存放name,age,id
//	struct Stu s = { {'w',20,3.14},"张三",30,"20220722"}; //定义结构体变量的同时给值，就是结构体初始化{}
//	//printf("%c\n", s.sb.c); //w  s找到它的成员sb sb是个结构体变量再找到它自己的成员c
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s; //ps是结构体指针  struct Stu说明ps指向的是结构体类型
//	printf("%c\n", (*ps).sb.c); //ps找到s解引用
//	printf("%c\n", ps->sb.c); //sb结构体变量用.
//
//	strcpy(s.name, "zhangsan");
//	printf("%s\n", ps->name);
//
//	s.age = 20;
//	printf("%d\n", (*ps).age);
//
//	return 0;
//}

//2.结构成员的类型 结构的成员可以是标量、数组、指针、其他结构体
//3.结构体变量的定义和初始化
	//s1,s2，s是定义结构体变量
/*struct point
{
	int x;
	int y;
}p1,p;*/ //类型声明的同时定义结构体变量p1
//struct point p2; //定义结构体变量p2
//struct point p3 = { 20,30 }; //定义变量的同时赋初值初始化

//struct Stu //类型声明
//{
//	char name[15];
//	int age;
//};
//struct Stu s = { "zhangsan",20 }; //初始化

//struct Node //节点
//{
//	int date;
//	struct point p; //p结构体类型的变量
//	struct Node* next; //结构体指针
//}n1={10,{4,5},NULL}; //结构体嵌套初始化
//struct Node n2 = { 20,{5,6},NULL }; //结构体嵌套初始化

//4.结构体成员的访问 结构体变量访问成员
//结构变量的成员是通过点操作符(.)访问的。点操作符接受两个操作数  箭头操作符(->)应用的结构体指针里

//类型声明
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)
//{
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age);
//	printf("name = %s  age = %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",20 };
//	struct Stu* ps = &s;
//	strcpy(ps->name, "lisi");
//	ps->age = 30;
//	print(ps);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct Stu* ps)
//{
//	//使用结构体指针访问指向对象的成员
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age);
//	printf("name = %s  age = %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct Stu s={"zhangsan",20};
//	print(&s);
//	return 0;
//}

//结构体传参 1.传值调用 - 传的是变量本身
//           2.传址调用 - 传的是变量的地址
struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//成员变量
	struct B sb;
	char name[20];
	int age;
	char id[20];
};

void print1(struct Stu t) //在这创建一个结构体对象t接收  t得到s所有值 打印t就是打印s
{
	printf("c = %c  s = %d  d = %lf  name = %s  age = %d  id = %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct Stu *ps)
{
	printf("c = %c  s = %d  d = %lf  name = %s  age = %d  id = %s\n", (*ps).sb.c, (*ps).sb.s, (*ps).sb.d, (*ps).name, (*ps).age, (*ps).id);
	printf("c = %c  s = %d  d = %lf  name = %s  age = %d  id = %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	         //s是局部变量 对象
	struct Stu s = { {'w',20,3.14},"王五",18,"20220719" };
	//写一个函数打印s内容
	print1(s); //把s结构体对象传过去  传的是变量本身   传值调用 
	print2(&s); //                    传的是变量的地址 传址调用 
	return 0;
}

//传值调用：s是对象开辟这么大一块空间，采用s方式传参时，是值传递，而实参传给形参时，形参t要接住s传过来的内容，形参t也得创建一块这么大的空间，来接收s传过来的所有数据；s有多大，t就有多大，s有什么数据，t就有什么数据。
//          要把数据传过去,首先传过去的数据形参t这要开辟好空间，得准备额外的临时空间来接收传过来的数据，从空间角度来讲，得浪费一大块空间。
//          要把所有的数据传递过去，放到临时开辟的空间里边，也需要时间，所以空间和时间上都有一定的浪费。

//传址调用：如果传的是&s s的地址传过去仅仅是个地址编号，指针变量struct Stu* ps接收，指针变量32位平台4个字节地址、64位平台8个字节地址，并没有额外太多开销；
//          地址传过去之后，回来还是指向s（因为把s的地址传过去了）。

//传值调用、传址调用区别：1.传址调用传参时效率会更高一些，只是传递了指针大小的空间，指针大小效率更高。
//                        2.而如果采用值传递的形式，参数传参过去之后，空间和时间上双重浪费，导致效率低下，而指针的效率要高一些。
//                        3.采用值传递形式，t是s的一份临时拷贝，改变t不会改变s，对t的改变不会影响s，试图通过t改变s改变不了。
//                        4.传址调用ps瞬间就能找回s，ps有能力改变s，说明ps实现的功能更强大，首先效率高，其次可以改变主函数里边s结构体的数据。


//函数传参时，参数是需要压栈开销的，
// 如果传递一个结构体对象过大，参数压栈的系统开销就比较大，会导致性能的下降。
//结论：如果结构体传参时，系统开销比较大，应该传结构体地址过去

int Add(int x, int y) 
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
//           <-b 传参通常是从右向左传的  参数传参也叫压栈操作  参数压栈
	c = Add(a, b); //每一个函数调用，都会在内存的栈区上，开辟一块空间
	return 0;
}