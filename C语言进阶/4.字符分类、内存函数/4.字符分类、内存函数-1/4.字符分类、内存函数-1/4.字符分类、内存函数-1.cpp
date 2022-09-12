#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy���� �������ص����ڴ�
//memmove���� ���Դ����ڴ��ص������

//dst����src��ߣ����ܴӺ���ǰ����srcֻ�ܴ�ǰ��ǰ��
//dst����src�ұߣ����ܴ�ǰ���󿽣�srcֻ�ܴӺ�����
//void* my_memmove(void* dst, const void* src, size_t num)
//{
//	void* start = dst;
//	assert(dst && src);
//	if (dst < src)
//	{
//		//��ǰ �� �󿽱�
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst +1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ� �� ǰ����
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


//memcpy �ڴ�Ƚ� - �Ƚ��ڴ��е����������Ƿ�һ��
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
//	//int ret = memcmp(arr1, arr2, 6);  ��һ���ַ�һ���ַ��Ƚ�  6���ַ�û�дﵽ�����������ͣ����һ������
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - �ڴ����ú���  ���ֽ�Ϊ��λ�����ڴ�
//int main()
//{
//	//������п������ڴ�
//	int arr[10] = { 0 };  //����������ǰ20���ֽ�ȫ�����ó�1
//	//��memset��ʼ�����ռ�
//	//void* memset(void* ptr,int value,size_t num)
//	//Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).
//	//��ptr��ָ���ǿ�ռ��ǰnum���ֽڵ����ݣ�����Ϊָ����valueֵ
//	memset(arr, 1, 20);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ʮ������0x01010101   һ������4���ֽڣ�һ���ֽ�һ���ֽڳ�ʼ��һ��1��ȥ

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

//ģ��ʵ��strlen 3�з�ʽ
//1.������
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

//2.�ݹ�   ����������ʱ����
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

//3.ָ��-ָ��
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

