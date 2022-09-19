#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//柔性 大小是可变的
//结构体 包含柔性数组的成员    结构中最后一个元素是允许大小未知的数组
//typedef struct st_type
//{
//	int i;
//	//int a[0]; //柔性数组成员
//	int a[]; //数组大小是未知的，想给多大，就给多大
//}type_a;







//struct S
//{
//	int n; //4
//	int arr[]; //大小未知
//};
//int main()
//{
//	//期望arr的大小是10个整型
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));  //后面的空间是动态开辟出来的 柔性可变
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//增容
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n; //4
//	int arr[];
//};
//int main()
//{
//	//期望arr的大小是10个整型       柔性数组前n的大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//		return 1;
//	ps->n = 10;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增容                                 
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (NULL != ptr)
//		ps = ptr;
//	//使用
//	
//	//释放
//	free(ps);
//	ps = NULL;
//	//printf("%d\n", sizeof(struct S)); //4
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 1;
	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
		return 1;
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	//增容
	int* ptr = (int*)realloc(ps->arr, 20 * sizeof(int));
	if (ptr != NULL)
		ps->arr = ptr;
	//使用

	//释放
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	
	return 0;
}