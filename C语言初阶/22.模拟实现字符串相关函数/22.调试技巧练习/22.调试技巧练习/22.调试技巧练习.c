#define _CRT_SECURE_NO_WARNINGS 1

//����
//��һ���ַ���str�����ݵߵ��������������
//
//���ݷ�Χ��1 \le len(str) \le 10000\1��len(str)��10000
//����������
//����һ���ַ����������пո�
//
//���������
//���������ַ���
//
//ʾ��1
//���룺
//I am a student
//����
//�����
//tneduts a ma I
//����
//ʾ��2
//���룺
//nowcoder
//����
//�����
//redocwon

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//void reverse_string(char* str)
//{
//    assert(str);
//    char tmp = *str;
//    int len = strlen(str);
//    *str = *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if (strlen(str + 1) >= 2)
//    {
//        reverse_string(str + 1);
//    }
//    *(str + len - 1) = tmp;
//}
//
//int main()
//{
//    char arr[10000];
//    gets(arr);
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//��ӡ���� *13 line7
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��Ŀ������ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��
//                                                         ���Ժ� 2*money-1 ƿ��ˮ
//����  ��ƿ
//20    20

//10    10
//5     5
//2     2 1
//1     1 1
//1     
//total ����39ƿ

//���Ž�
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = 2 * money - 1;
//	}
//	printf("%d", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	//���
//	int total = money; //�ܹ���ˮ�˶���ƿ
//	int empty = money;
//
//	//�û���
//	while (empty >= 2)
//	{
//		total += empty / 2; 
//		empty = empty / 2 + empty % 2;
////������ʣ�¿�ƿ �������Ŀ�ƿ  ʣ�µĿ�ƿ
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	while (money)
//	{
//		total++;
//		money--; //��money�ƽ�0 ����ѭ��
//		if (total % 2 == 0)
//		{
//			money++;
//		}
//	}
//	printf("%d\n", total);
////s	     20 19 18 17 16 15 14 13 12 11     10 9  8  7  6  5  4  3  2  1
////b	     1  2  3  4  5  6  7  8  9  10     11 12 13 14 15 16 17 18 19 20
////change      2     4     6     8     10        12    14    16    18    20
//	return 0;
//}


//��Ŀ��������ѭ������
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//��Ŀ��������ż��˳��  ��������ʹ����ȫ����λ��ż��ǰ�档
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�������е���������λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//˼·��ǰ���ҵ�һ���������������������ң��ҵ�һ��ż����
//      �����ҵ�һ��ż���������ټ�����ǰ�ң��ҵ�һ��������
//      ǰ���ҵ�һ��ż���������ҵ�һ�����������н�����
//      ��ǰ���м�û��Ԫ��ʱ����ż�Ͳ���Ҫ�����ˣ�����ֻ�ñ���һ������͵�������ż˳����
// 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	//left right �����±�
//	int left = 0;
//	int right = sz - 1;
//	     //˵���м仹��Ԫ��Ҫ����
//	while (left < right) 
//	{
//		//��ǰ����һ��ż��
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		//��������һ������
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[] = { 1,3,5,7,9 };
//	//int arr[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ȥmove�������arrʱ��ѹ����֪����������м���Ԫ�أ������������������Ԫ�صĸ���
//	move(arr, sz); //��ʾarr��������sz��Ԫ��
//	print(arr, sz); //print�����ܹ���ӡarr�����sz��Ԫ��
//	return 0;
//}

//void print(int* p,int sz)
//{
//	int* end = p + sz - 1;
//	/*while (p<=end)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (; p <=end; p++)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n");
//}
//void move(int* p, int sz)
//{
//	int* left = p;
//	int* right = p + sz - 1;
//	while (left < right)
//	{
//		//������ż��
//		while (left < right && *left % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		while (left < right && *left % 2 == 0 && *right % 2 != 0)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}		
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr,sz);
//	return 0;
//}

//ģ��ʵ��strlen����
//hello wolrd!
//     ��������Լ�� - ��������ʱ�����ȴ���߻����ұ��ɺ�������Լ������
//     cdecl (C declaration,��C����)
//size_t __cdecl my_strlen(const char* str)
//{
//    assert(str);
//    //          eos �û�����ĺ�
//    const char* eos = str;
//    while (*eos++);
//    return eos - str - 1;
//}
//int main()
//{
//    char str[100] = {0};
//    gets(str);
//    printf("%d\n", my_strlen(str));
//    return 0;
//}

//ģ��ʵ��strcpy���� �����ַ���
//char* __cdecl my_strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	assert(src && dst);
//	while (*cp++ = *src++);
//	return dst;
//}
//int main()
//{
//	char str[20] = "xxxxxxxxxxxxxxxxx";
//	char* str2 = "hello world!";
//	printf("%s\n", my_strcpy(str, str2));
//	return 0;
//}

