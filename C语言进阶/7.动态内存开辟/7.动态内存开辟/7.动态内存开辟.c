#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//malloc - allocate memory block  开辟申请内存块
//void* malloc(size_t size)  bytes to allocate  开辟的字节数
//int main()
//{
//	//假设开辟10个整型的空间  10*sizeof(int)
//	int arr[10];  //原始方法在栈区上开辟
//	int* p = (int*)malloc(10 * sizeof(int));  //希望开辟的40个字节，能放10个整型  以整型的方式来看这块空间
//	//  *p   void*的指针不能直接解引用操作   通常情况下，要把malloc的返回值转换成我们想要的类型   整型指针+1跳过一个整型，整型指针解引用访问一个整型
//	//使用这些空间时
//	if (p == NULL)
//	{
//		//等于空指针报错  malloc开辟空间失败
//		//printf("malloc err\n");
//		perror("main");  //在main函数里报错   perror会把"main"打印出来，真正打印的是  main: xxxxxxxxx
//		return;
//	}
//	//开辟成功可以使用  p是一个整型指针 指向malloc开辟的10个整型空间   
//	
//	//完全可以把这块空间当做10个整型来访问
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//p是起始位置地址 一个整型指针  
//		*(p + i) = i; //p+i 跳过i个元素，下标为i个元素的地址 解引用找到元素  把i放进去赋值
//		//当i是0时，相当于*p第一个元素里放0
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);  //*(p+i) p相当于数组名 指向第一个元素 首元素的地址
//	}
//	free(p); //把指针放进去  p是值变量
//	p = NULL;  //自动手动把p置为NULL
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//      return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//int* p = (int*)malloc(40);
	int* p = calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	int* ptr = (int*)realloc(p, 20000000 * sizeof(int));
	if (NULL != ptr)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}