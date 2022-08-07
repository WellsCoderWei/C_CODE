#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num = 10;
//	//%p 以地址的形式打印
//	printf("%p\n", &num); //&num 取出num的地址 打印num的地址
//	return 0;
//}

//int main()
//{
//	int a = 10; //10存起来 得有空间 a在内存中要分配空间 - 分配空间4个字节 
//	printf("%p\n", &a);
//	int* pa = &a; //pa是用来存放地址的，在C语言中pa是指针变量
//		//*说明pa是指针变量
////
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	//int* pa = &pa;
//
//	return 0;
//}

//储存地址需要定义指针变量
//int num = 10;
//int* p; //p为一个指针变量
//p = &num;

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
////int a占4个字节 这四个字节每个字节都有一个地址
//	int a = 10; //相当于在内存里开辟4个字节，里面存了一个10
//	int* pa = &a; //拿到a的地址 存到pa里头去  pa的类型是int*   当取出a的地址时，其实取的是a4个字节中的 第一个字节 即首地址（44）  a的地址（44）要存到p里头去   p是指针变量 占用空间 
//	    //想通过pa里头存的a的地址 找到a
//	*pa = 20;
//	//因为pa里边存的是a的地址，所以*pa就是通过pa里边 a的地址找到a  这颗*称为解引用操作
////	//因为*pa等于20 就把a里边的10改掉了 改a可以不通过a改变，只需要把a的地址交给pa， *pa解引用就可以找到a，间接的改变 借助pa去改变a 
////	return 0;
//}

int main()
{
	printf("char=%d\n", sizeof(char*));
	printf("short=%d\n", sizeof(short*));
	printf("int=%d\n", sizeof(int*));
	printf("long=%d\n", sizeof(long*));
	printf("long long=%d\n", sizeof(long long*));
	printf("float=%d\n", sizeof(float*));
	printf("double=%d\n", sizeof(double*));
	return 0;
}