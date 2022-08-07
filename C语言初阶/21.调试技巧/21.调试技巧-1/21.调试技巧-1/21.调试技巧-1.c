#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//模拟实现strcpy - 字符串拷贝过去就覆盖了
//void my_strcpy(char* dest, char* src) //首元素地址char* 写成两个指针
//{
//	while (*src != '\0') //循环结束时*src == '\0'
//	{
//		//前面内容拷贝
//		*dest = *src; //dest是地址 解引用才能找到空间
//		dest++;
//		src++;
//	}
//	// + \0拷贝
//	*dest = *src;
//	
//}

//void my_strcpy(char* dest, char* src) //首元素地址char* 写成两个指针
//{
//	while (*src != '\0') //循环结束时*src == '\0'
//	{
//		//前面内容拷贝
//		*dest++ = *src++; //dest是地址 解引用才能找到空间
//	}
//	// + \0拷贝
//	*dest = *src; //这样写\0还是来自于原字符串
//	
//}

void my_strcpy(char* dest, char* src) //首元素地址char* 写成两个指针
{
	      //'\0'前的字符拷贝过去后，ASCII码值非0  *dest++ = *src++整体表达式为真
	     //*src == '\0'拷贝过去后  表达式ASCII码值变成0 跳出循环  
	while (*dest++ = *src++) //既copy了\0  又使得循环停止！
	{
		; 
	}
}
int main()
{
	                 //这里前6个字符就会被覆盖
	char arr1[20] = "xxxxxxxxx"; //因为把hello包含\0放这了 打印字符串时遇到\0就停止了，因为\0是字符串的结束标志 所以这个地方只打印前面的hello
	char arr2[] = "hello"; //把hello拷贝过去之后，还会把\0拷贝过去 

	my_strcpy(arr1, arr2); //arr2首元素地址 首元素char型 
	//arr2数组名传给了src，arr1数组名传给了dest   
	//strcpy(arr1, arr2); //1.目标空间的起始地址 2.源空间的起始地址
	printf("%s\n", arr1); //字符串的打印用%s，只要给字符串的起始地址即可
	                      //遇到\0 作为字符串打印时，字符串结束标志是\0也就停下来了，不会再往后打印
	return 0;
}