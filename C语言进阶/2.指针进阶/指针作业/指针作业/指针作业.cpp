#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//题目 字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//     ABCD左旋一个字符得到BCDA
//     ABCD左旋两个字符得到CDAB
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//第一步 拷贝要旋转的字符
//		char tmp = *str; 
//		//第二步 移动剩下的字符
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//第三步 把拷贝的字符放到最后
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;  //左旋两个字符
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//题目 字符串右旋
//实现一个函数，可以右旋字符串中的k个字符。
//例如：
//     ABCD右旋一个字符得到DABC
//     ABCD右旋两个字符得到CDAB
//void string_right_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *(str + n - 1);
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + n - 1 - j) = *(str + n - 1 - j - 1);
//		}
//		*str = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_right_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//3步翻转法 
//void reverse(char* left, char* right)
//{
//	assert(left || right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////左旋
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//	int n = strlen(str);
//	k = k % n;
//	reverse(str,str+k-1); //左边翻转
//	reverse(str+k,str+n-1); //右边翻转
//	reverse(str,str+n-1); //整体翻转
//}
//右旋
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	k = k % n;
//	reverse(str + n - 1 - k + 1, str + n - 1); //右边翻转
//	reverse(str, str + n - 1-k); //左边翻转
//	reverse(str, str + n - 1); //整体翻转
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//题目 字符串旋转结果
//写一个函数判断一个字符串是否为另一个字符串旋转之后的字符串
//例如：给定s1=AABCD 和s2=BCDAA 返回1
//      给定s2=abcd  和s2=ABCD  返回0

// AABCD左旋一个字符得到ABCDA
// AABCD左旋两个字符得到BCDAA
// AABCD右旋一个字符得到DAABC

//暴力穷举法
//int is_rotate(char* str1,char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	//char arr2[] = "BCDAA";
//	char arr2[] = "BCDEF";
//	int ret = is_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int is_string_rotate(char* str1, char* str2)
//{
//	if (strlen(str1) != strlen(str2)) return 0;
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	char* ret = strstr(str1, str2);  //判断str2是否为str1子串
//	return ret != NULL;
//}
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "DAABC";
//	int ret=is_string_rotate(arr1, arr2);  
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*) & aa;
//	int* ptr2 = *(aa + 1);  //二维数组第二行的地址解引用得到整个第二行   *(aa+1) --> aa[1] 相当于第二行的数组名 也相当于第二行第一个元素的地址  6的地址   *(aa+1)得到的是6的地址 本身就是整型的指针(地址)int*
//	return 0;
//}

//int(*p)[2][5]=&aa; 二维数组地址
//int(*p2)[5]=aa; 二维数组首元素第一行地址

//指针级别                        数组                        指针运算
//一级指针                        一维数组                    解引用
//二级指针                        二维数组                    指针+-整数 (与类型相关)
//                                                            指针-指针   两个指针必须是同类型或者指向同一块空间 得到的是指针和指针之间的元素个数
//指针指向元素类型                数组元素类型                指针的关系运算
//整型指针                        整型数组
//字符指针                        字符数组
//数组指针                        指针数组
//函数指针 功能-->实现回调函数    结构体数组
//结构体指针                      函数指针数组-->转移表


//C++             C实现简单的数据结构  指针+结构体+动态内存管理 
//CPP
//cplusplus

//题目 qsort模拟实现
//模仿qsort的功能实现一个通用冒泡排序
struct Stu
{
	char name[20];
	int age;
};
int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e1)->name);
}
int cmp_int(const void* el, const void* e2)
{
	return *(int*)e2 - *(int*)el;
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, //无类型指针 要排序数据的起始位置
	int sz, //元素个数
	int width, //类型的宽度
	int(*cmp)(const void* e1, const void* e2)) //函数指针  自己写一个能够比较e1和e2指向两个元素大小的函数   把函数地址传进来
{//传进来之后cmp指向那个函数
	//进行冒泡排序要确定 趟数  一趟冒泡排序解决一组数据里面的一个数字
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序 要比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//前面趟数 一对要排对数不变   比较交换方法不一样
			//两个元素怎么比较  因为不知道接下来要排序什么数据，所以不可能知道两个元素的比较方法是什么  是用>号来比 还是用某一种函数来比 例如：strcmp
			//在这调用cmp指向函数  这个地方让冒泡排序的使用者来定义这个函数
			
			//比较
			//如果是整型数组  arr[j]  arr[j+1] 两个元素比较一下就可以了
			//用cmp比，应该把arr[j]和arr[j+1]两个元素的地址传进来   因为传给e1和e2时，e1和e2是指向这两个元素的两个指针
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0) //升序 cmp返回值如果大于0，就交换
			{
				//交换 两个指针指向的元素
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void print(struct Stu s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d ", s[i].name, s[i].age);
	}
	printf("\n");
}
void test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz, sizeof(int), cmp_int);
	qsort(arr, sz, sizeof(int), cmp_int);
	print_arr(arr, sz);
}
void test2()
{
	struct Stu s[3] = {{"zhangsan",30},{"lisi",34},{"wangwu",20}};
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄排序
	//bubble_sort(s, sz, sizeof(struct Stu), sort_by_age);
	//qsort(s, sz, sizeof(struct Stu), sort_by_age);
	//按照名字排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
	qsort(s, sz, sizeof(s[0]), sort_by_name);
	print(s, sz);
}
int main()
{
	//test1(); //整型数组
	test2(); //结构体数组
	return 0;
}