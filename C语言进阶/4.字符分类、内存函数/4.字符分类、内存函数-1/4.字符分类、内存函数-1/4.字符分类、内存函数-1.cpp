#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy函数 拷贝不重叠的内存
//memmove函数 可以处理内存重叠的情况

//dst落在src左边，不能从后向前拷，src只能从前向前拷
//dst落在src右边，不能从前往后拷，src只能从后往后拷
//void* my_memmove(void* dst, const void* src, size_t num)
//{
//	void* start = dst;
//	assert(dst && src);
//	if (dst < src)
//	{
//		//从前 往 后拷贝
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst +1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后 往 前拷贝
//		while (num--)
//		{
//			*((char*)dst + num) = *((char*)src + num);
//		}
//	}
//	return start;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr+2, arr, 12);
//	memcpy(arr+2, arr, 20);
//	return 0;
//}


//memcpy 内存比较 - 比较内存中的两块数据是否一样
//int my_memcmp(const void* ptr1, const void* ptr2, size_t num)
//{
//	assert(ptr1 && ptr2);
//	while (num--)
//	{
//		if (*((char*)ptr1) == *((char*)ptr2))
//		{
//			ptr1 = (char*)ptr1 + 1;
//			ptr2 = (char*)ptr2 + 1;
//		}
//		else if (*((char*)ptr1) > *((char*)ptr2))
//		{
//			return 1;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0};
//	float arr2[] = { 1.0,3.0};
//	//int memcmp(const void* ptr1,const void* ptr2,size_t num)
//	//int ret = my_memcmp(arr1, arr2, 6);
//	//int ret = memcmp(arr1, arr2, 6);  按一个字符一个字符比较  6个字符没有达到接下来的整型，侥幸还是相等
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - 内存设置函数  以字节为单位设置内存
//int main()
//{
//	//如果这有块整型内存
//	int arr[10] = { 0 };  //把整型数组前20个字节全部设置成1
//	//用memset初始化这块空间
//	//void* memset(void* ptr,int value,size_t num)
//	//Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
//	//把ptr所指向那块空间的前num个字节的内容，设置为指定的value值
//	memset(arr, 1, 20);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//十六进制0x01010101   一个整型4个字节，一个字节一个字节初始化一个1进去

//struct
//{
//	char name[40];
//	int age;
//}person,person_copy;
//
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	return 0;
//}

//模拟实现strlen 3中方式
//1.计数器
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2.递归   不能生成临时变量
//int my_strlen(const char* str)
//{
// assert(str);
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//3.指针-指针
int my_strlen(const char* str)
{
	assert(str);
	const char* eos=str;
	while (*eos) eos++;
	return eos - str;

}
int main()
{
	char arr[] = "hello world!";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
}

