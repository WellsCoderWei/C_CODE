#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strcmp(const char* s1, const char* s2)
//{
// assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int __cdecl my_strcmp(const char* src,
//	const char* dst)
//{
//	int ret = 0;                                             //当*src 和*dst 都等于'\0'时，判断一个*dst为'\0' 跳出循环
//	while ((ret = *(unsigned char*)src - *(unsigned char*)dst) == 0 && *dst)
//	{
//		src++, dst++;
//	}
//	return ((-ret) < 0) - (ret < 0);
////当ret为1，-1<0成立为真1, 1<0为假0    1-0返回1
////当ret为-1，--1得正 1<0为假0，  -1<0为真1   0-1返回-1
////当ret为0,  0<0为假0     0<0为假0        0-0返回0
//}
//int main()
//{
//	char p[] = "aaddef";
//	char q[] = "abcdef";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p=q\n");
//	}
//}