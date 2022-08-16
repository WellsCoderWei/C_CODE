#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一级指针传参
//传过去指针，拿指针接收 拿整形接收  传一级指针变量 参拿一级指针变量接收
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	//p里放的是数组名，数组名是数组首元素1的地址 1是个整形的地址，p可以写成int* p
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是个指针，一级指针的传参   sz是个整形
//	print(p, sz);
//	return 0;
//}


//当一个函数的参数部分为一级指针时，函数能接收什么参数？ 一级指针、取字符变量地址
//void test(char* p)
//{
//
//}
//
//int main()
//{
//	char ch = 'w';
//	char* p1 = &ch;
//
//	test(&ch);
//	test(p1);
//	return 0;
//}


//二级指针传参
//当函数的参数为二级指针时，可以接收什么参数？  传二级指针变量、传取一级指针变量地址、传存放一级指针的数组名
//void test(int** p2)
//{
//	**p2 = 20;
//	//printf("num = %d\n", **p2);  //*p2 对p2进行解引用 得到pa地址，再解引用pa 得到a的值
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;  //二级指针用来存放一级指针变量地址
//	
//	test(ppa);
//	printf("a = %d\n", a);
//	
//	test(&pa);  //取一级指针的地址出来，一级指针的地址就是二级指针
//
//	int* arr[10] = { 0 };  //存放整型指针的数组，每个元素是int* - 指针数组
//	test(arr);
//	return 0;
//}

//指针类别

//一级指针                    
// int* p;      整型指针                                   
// char* pc;    字符指针                                  
// void* pv;    无类型指针    

//二级指针 把一级指针变量取出来
// int** p
// char** pc
// void** pv

//数组指针 指向数组的指针
// int(*p)[4];   p是个指向数组的指针，p指向一个数组，数组有4个元素，每个元素的类型是int
// char(*ch)[10];

//函数指针 指向函数的指针  存放函数地址的指针
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p\n", test);
//	//取地址函数名，拿到的是函数的地址
//	printf("%p\n", &test);
//	//pf是函数的指针变量
//	void(*pf)() = &test;
//	printf("%p\n", pf);
//}

int Add(int x, int y)
{
	return x + y;
}
int main()
{//返回类型  参数类型

	//1.如何创建一个函数指针变量？
	//int(*pf)(int, int) = &Add;   //&函数名 = 函数名   都是函数的地址
	int(*pf)(int, int) = Add;    //&数组名 != 数组名  &数组名是整个数组的地址，数组名是数组首元素的地址
	//pf 函数指针变量
	//Add函数名 能放到pf里 说明 pf == Add

	//pf里存的是函数Add的地址
	//*pf pf解引用相当于找到Add函数
	//对pf进行解引用操作，找到pf指向的函数Add，再调用函数Add,传参

	//如何通过函数指针调用？
	printf("%d\n", (*pf)(3, 5));  //用函数指针，调用 函数指针 指向的函数
	//int ret = Add(3, 5);
	int ret = pf(3, 5);
	//int ret = * pf(3, 5); //err  因为pf(3,5)已经调用，返回的是8，再对8进行解引用，逻辑上讲不通
	printf("%d\n", ret);
	return 0;
}

//void test(char* str)
//{
//
//}
//
//int main()
//{//pt就是函数指针
//	void(*pt)(char*) = &test;
//	return 0;
//}

//函数名 本身就是地址