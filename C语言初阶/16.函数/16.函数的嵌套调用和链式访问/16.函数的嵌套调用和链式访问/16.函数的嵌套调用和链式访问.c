#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//дһ��������ÿ����һ��������������Ὣnum��ֵ����1
//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//�����ͺ���֮���ǿ����л���ϵ�
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//������Ƕ�׵��ã����庯��ʱ����Ƕ�׶��壬ÿһ��������Ӧ����{}��߶�������
//int test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3(); //��test2���������test3����
//}
//int main()
//{
//	test2(); //��main���������test2����
//}

//��ʽ���ʣ���һ�������ķ���ֵ ��Ϊ����һ�������Ĳ���
//int main()
//{
//	//��һ���ַ����ĳ���
//	//printf("%d\n", strlen("abc")); //strlen�᷵��һ������
//
//	//char arr1[20] = {0};
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2)); //strcpy����ֵ����printf�����Ĳ���
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello";
//	printf("%s\n", strcat(arr, "bit"));
//	printf("%d\n", strlen(strcat(arr, "bit")));
//	return 0;
//}

//���߱�����������ʲô ������ʲô ����������ʲô
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int, int); //��������
//	printf("%d\n", Add(a, b)); //�ڵ��ú���֮ǰ������ ʹ�ú���Ҫ������������ʹ��
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include "Add.h"
//#include "Subtract.h"
#include "Multiply.h"
//#include "Divide.h"

int main()
{
	int a = 10;
	int b = 20;
	/*printf("Add = %d\n", Add(a, b));
	printf("Subtract = %d\n", Subtract(a, b));*/
	printf("Multiply = %d\n", Multiply(a, b));
	/*printf("Divide = %d\n", Divide(a, b));*/
	return 0;
}
