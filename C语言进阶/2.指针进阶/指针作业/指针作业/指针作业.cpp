#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//��Ŀ �ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//     ABCD����һ���ַ��õ�BCDA
//     ABCD���������ַ��õ�CDAB
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//��һ�� ����Ҫ��ת���ַ�
//		char tmp = *str; 
//		//�ڶ��� �ƶ�ʣ�µ��ַ�
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//������ �ѿ������ַ��ŵ����
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;  //���������ַ�
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//��Ŀ �ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//     ABCD����һ���ַ��õ�DABC
//     ABCD���������ַ��õ�CDAB
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

//3����ת�� 
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
////����
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//	int n = strlen(str);
//	k = k % n;
//	reverse(str,str+k-1); //��߷�ת
//	reverse(str+k,str+n-1); //�ұ߷�ת
//	reverse(str,str+n-1); //���巭ת
//}
//����
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	k = k % n;
//	reverse(str + n - 1 - k + 1, str + n - 1); //�ұ߷�ת
//	reverse(str, str + n - 1-k); //��߷�ת
//	reverse(str, str + n - 1); //���巭ת
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//��Ŀ �ַ�����ת���
//дһ�������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//���磺����s1=AABCD ��s2=BCDAA ����1
//      ����s2=abcd  ��s2=ABCD  ����0

// AABCD����һ���ַ��õ�ABCDA
// AABCD���������ַ��õ�BCDAA
// AABCD����һ���ַ��õ�DAABC

//������ٷ�
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
//	char* ret = strstr(str1, str2);  //�ж�str2�Ƿ�Ϊstr1�Ӵ�
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
//	int* ptr2 = *(aa + 1);  //��ά����ڶ��еĵ�ַ�����õõ������ڶ���   *(aa+1) --> aa[1] �൱�ڵڶ��е������� Ҳ�൱�ڵڶ��е�һ��Ԫ�صĵ�ַ  6�ĵ�ַ   *(aa+1)�õ�����6�ĵ�ַ ����������͵�ָ��(��ַ)int*
//	return 0;
//}

//int(*p)[2][5]=&aa; ��ά�����ַ
//int(*p2)[5]=aa; ��ά������Ԫ�ص�һ�е�ַ

//ָ�뼶��                        ����                        ָ������
//һ��ָ��                        һά����                    ������
//����ָ��                        ��ά����                    ָ��+-���� (���������)
//                                                            ָ��-ָ��   ����ָ�������ͬ���ͻ���ָ��ͬһ��ռ� �õ�����ָ���ָ��֮���Ԫ�ظ���
//ָ��ָ��Ԫ������                ����Ԫ������                ָ��Ĺ�ϵ����
//����ָ��                        ��������
//�ַ�ָ��                        �ַ�����
//����ָ��                        ָ������
//����ָ�� ����-->ʵ�ֻص�����    �ṹ������
//�ṹ��ָ��                      ����ָ������-->ת�Ʊ�


//C++             Cʵ�ּ򵥵����ݽṹ  ָ��+�ṹ��+��̬�ڴ���� 
//CPP
//cplusplus

//��Ŀ qsortģ��ʵ��
//ģ��qsort�Ĺ���ʵ��һ��ͨ��ð������
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
void bubble_sort(void* base, //������ָ�� Ҫ�������ݵ���ʼλ��
	int sz, //Ԫ�ظ���
	int width, //���͵Ŀ��
	int(*cmp)(const void* e1, const void* e2)) //����ָ��  �Լ�дһ���ܹ��Ƚ�e1��e2ָ������Ԫ�ش�С�ĺ���   �Ѻ�����ַ������
{//������֮��cmpָ���Ǹ�����
	//����ð������Ҫȷ�� ����  һ��ð��������һ�����������һ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵����� Ҫ�ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//ǰ������ һ��Ҫ�Ŷ�������   �ȽϽ���������һ��
			//����Ԫ����ô�Ƚ�  ��Ϊ��֪��������Ҫ����ʲô���ݣ����Բ�����֪������Ԫ�صıȽϷ�����ʲô  ����>������ ������ĳһ�ֺ������� ���磺strcmp
			//�������cmpָ����  ����ط���ð�������ʹ�����������������
			
			//�Ƚ�
			//�������������  arr[j]  arr[j+1] ����Ԫ�رȽ�һ�¾Ϳ�����
			//��cmp�ȣ�Ӧ�ð�arr[j]��arr[j+1]����Ԫ�صĵ�ַ������   ��Ϊ����e1��e2ʱ��e1��e2��ָ��������Ԫ�ص�����ָ��
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0) //���� cmp����ֵ�������0���ͽ���
			{
				//���� ����ָ��ָ���Ԫ��
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
	//������������
	//bubble_sort(s, sz, sizeof(struct Stu), sort_by_age);
	//qsort(s, sz, sizeof(struct Stu), sort_by_age);
	//������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
	qsort(s, sz, sizeof(s[0]), sort_by_name);
	print(s, sz);
}
int main()
{
	//test1(); //��������
	test2(); //�ṹ������
	return 0;
}