#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "hello";
	char arr1[] = "abc"; //arr1��ʼ��ʱ ���ַ���"abc";��ʼ��
	char arr2[] = { 'a','b','c','\0' }; //arr2��ʼ��ʱ ���ַ�{'a','b','c'};��ʼ��
	//���ַ���arr1 arr2����
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len = strlen("abc");
	//printf("%d\n", len);
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	return 0;
}