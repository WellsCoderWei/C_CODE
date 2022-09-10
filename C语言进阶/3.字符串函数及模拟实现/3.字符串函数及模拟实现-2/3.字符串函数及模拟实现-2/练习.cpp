#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2); //断言的时候不能解引用，因为断言就是要判断是不是空指针，不是空指针才能解引用操作的
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = (char*)str1;  //用来记录str1历史地址
//
//	if (!*str1) //如果str1为空字符串 解引用就是\0
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && *s1 == *s2)  //当*s1==\0  *s2==\0  同时等于\0时，再进入循环就越界了
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)  return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了: %s\n", ret);
//	}
//	return 0;
//}

//使用strtok  字符串分割
//int main()
//{
//	//char arr[] = "aptx@aoba.4869 hehe";
//	//const char* p = "@. ";
//
//	char arr[] = "ab@ ss";
//	const char* p = " ";
//	char tmp[30] = { 0 };
//	char* ret = NULL;
//
//	strcpy(tmp, arr);
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//使用strerror函数
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}