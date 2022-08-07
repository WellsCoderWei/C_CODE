#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a); //%p打印地址  a所占空间的起始地址
//	//int* pa = &a; //pa是用来存放地址的，pa就是一个指针变量
//	///*printf("%p\n", pa);*/
//	//*pa = 20; //*pa通过它所存放的地址，找到它所指向的对象a，*pa就是a
//	//printf("%d\n", a);
//
//	//int a = (int)3.14; //把3.14强制类型转换为int
//	//printf("%d\n", a);
//
//	/*int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;*/
//
//	/*int a = 10;
//	int x = ++a;
//	int y = --a;
//	printf("x=%d y=%d", x, y);*/
//
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//	b = 1;
//	//else
//	//	b = -1;
//	b = (a > 5 ? 1 : -1);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);*/
//	/*int arr[10];
//	arr[9] = 10;
//	printf("%d\n", arr[9]);*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	      //[]指定数组大小的格式
//	printf("%d\n", arr[4]); //[]下标引用操作符 访问数组具体的某个元素
//	return 0;
//}

//int Add(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//void test1()
//{
//	printf("hehe\n");
//}
//void test2(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();
//	test2("hello bit");
//	return 0;
//}


//创建了一个自定义类型   用struct可以定义一种新的结构体类型 
//struct Book //定义一种书的类型 自己创造的类型：自定义类型
//{
//	char name[20]; //一个成员 书名字符串 字符数组  name是b对象的成员
//	char id[20]; //书号
//	int price; //定价整数
//}; //大括号描述书的相关属性括起来
//
//int main()
//{
//	//用类型创建了一本书
//	//struct Book类型 b创建的一本书 {}初始化
//	struct Book b = { "C语言","C20220716",55 }; //书名 书号 定价 3个有效信息初始化给b
//
//	/*printf("书名：%s\n",b.name); *///字符数组 %s可以直接打印
//		       //.表示b里边的 b自己name
//	/*printf("书号：%s\n", b.id);
//	printf("定价：%d\n", b.price);*/
//
//	struct Book* pb = &b;
//	/*printf("书名：%s\n", (*pb).name);
//	printf("书号：%s\n", (*pb).id);
//	printf("定价：%d\n", (*pb).price);*/
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//	return 0;
//}

//struct Stu //定义一种学生的类型
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//int main()
//{
//	struct Stu 张三 = { "张三",23,"男",99.5 };
//	struct Stu* p = &张三;
//	//printf("%s\n", p->name);
//	//printf("%d\n", p->age);
//	//printf("%s\n", p->sex);
//	//printf("%lf\n", p->score);
//
//	//printf("%s\n", (*p).name);
//	//printf("%d\n", (*p).age);
//	//printf("%s\n", (*p).sex);
//	//printf("%lf\n", (*p).score);
//
//	/*printf("%s\n", 张三.name);
//	printf("%d\n", 张三.age);
//	printf("%s\n", 张三.sex);
//	printf("%lf\n", 张三.score);*/
//	return 0;
//}

//struct Stu //定义一种学生的类型
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void Set_age1(struct Stu Stu)
//{
//	Stu.age = 18;
//	printf("年龄：%d\n", Stu.age);
//}
//
//void Set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;
//	printf("年龄：%d\n", pStu->age);
//}
//
//int main()
//{
//	struct Stu Stu;
//	struct Stu* pStu = &Stu;
//
//	Stu.age = 20;
//	Set_age1(Stu);
//
//	pStu->age = 20;
//	Set_age2(pStu);
//
//	return 0;
//}

//int main()
//{
//	/*char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);*/
//	printf("%d\n", sizeof(long long));
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(-c));
//	//printf("%d\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i); //12 10
//	printf("%d\n", ret);
//	return 0;
//}