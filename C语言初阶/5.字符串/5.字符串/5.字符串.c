#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "hello";
	char arr1[] = "abc"; //arr1初始化时 拿字符串"abc";初始化
	char arr2[] = { 'a','b','c','\0' }; //arr2初始化时 拿字符{'a','b','c'};初始化
	//求字符串arr1 arr2长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len = strlen("abc");
	//printf("%d\n", len);
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	return 0;
}