#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//冒泡排序整型
void bubble_sort_int(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序多少对
		for (j = 0; j < sz - 1 - i; j++)
		{
			//如果第一元素>第二个元素 升序交换 
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_int(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort_int(arr, sz);
	qsort(arr, sz, sizeof(int), cmp_int);
	print_int(arr,sz);
}
struct Stu
{
	char name[20];
	int age;
};
int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void print_s(struct Stu s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d ", s[i].name, s[i].age);
	}
	printf("\n");
}
void test2()
{
	struct Stu s[] = { {"zhangsan",30},{"lisi",20},{"wangwu",34} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(struct Stu), sort_by_age);
	qsort(s, sz, sizeof(struct Stu), sort_by_name);
	print_s(s, sz);
}
void swap(void* buf1, void* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)buf1 + i);
		*((char*)buf1 + i) = *((char*)buf2 + i);
		*((char*)buf2 + i) = tmp;
	}
}
void bubble_sort(void* base,
	int sz,
	int width,
	int(*cmp)(const void*, const void*)
)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void test3()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(int), cmp_int);
	print_int(arr, sz);
}
void test4()
{
	struct Stu s[] = { {"zhangsan",30},{"lisi",20},{"wangwu",34} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(struct Stu), sort_by_age);
	bubble_sort(s, sz, sizeof(struct Stu), sort_by_name);
	print_s(s, sz);
}
int main()
{
	//test1();  //整型数组
	//test2();   //结构体数组
	// test3();
	test4();
	return 0;
}



//struct Stu
//{
//	char name[20];
//	int age;
//};
////使用qsort函数排序结构体数据
//int sort_by_age(const void* e1, const void* e2)
//{           //升序
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;   //如果第一个年龄大于第二个年龄，返回>0的数字
////           struct Stu* 结构体指针
////         ((struct Stu*)e1)整体转换为结构体指针的结果
//}
//void print(struct Stu s[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d ", s[i].name,s[i].age);
//	}
//	printf("\n");
//}
//void test2()
//{
//	//结构体数组
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}}; //初始化3个元素
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄排序
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//打印结构体数组
//	print(s, sz);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	//test3(); //整型数据排序
//	//test4(); //结构体数据排序
//	return 0;
//}

