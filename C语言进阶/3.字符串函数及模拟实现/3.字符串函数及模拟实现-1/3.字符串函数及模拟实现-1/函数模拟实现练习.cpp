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
//	int ret = 0;                                             //��*src ��*dst ������'\0'ʱ���ж�һ��*dstΪ'\0' ����ѭ��
//	while ((ret = *(unsigned char*)src - *(unsigned char*)dst) == 0 && *dst)
//	{
//		src++, dst++;
//	}
//	return ((-ret) < 0) - (ret < 0);
////��retΪ1��-1<0����Ϊ��1, 1<0Ϊ��0    1-0����1
////��retΪ-1��--1���� 1<0Ϊ��0��  -1<0Ϊ��1   0-1����-1
////��retΪ0,  0<0Ϊ��0     0<0Ϊ��0        0-0����0
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