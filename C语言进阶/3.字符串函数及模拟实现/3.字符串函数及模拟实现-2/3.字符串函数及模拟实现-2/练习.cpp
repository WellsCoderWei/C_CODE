#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

//ģ��ʵ��strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2); //���Ե�ʱ���ܽ����ã���Ϊ���Ծ���Ҫ�ж��ǲ��ǿ�ָ�룬���ǿ�ָ����ܽ����ò�����
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = (char*)str1;  //������¼str1��ʷ��ַ
//
//	if (!*str1) //���str1Ϊ���ַ��� �����þ���\0
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && *s1 == *s2)  //��*s1==\0  *s2==\0  ͬʱ����\0ʱ���ٽ���ѭ����Խ����
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���: %s\n", ret);
//	}
//	return 0;
//}

//ʹ��strtok  �ַ����ָ�
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


//ʹ��strerror����
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