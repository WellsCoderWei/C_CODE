#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1 
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//����1 static���ξֲ�����
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()0
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//����2 ����
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//
//	return 0;
//}

//����2 static����ȫ�ֱ���  �ڱ���ʱ����������Դ���
//extern int g_val;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//
//	return 0;
//}

//����3 ����
//extern int Add(int, int);
//int main()
//{
//	printf("%d\n", Add(2, 3));
//
//	return 0;
//}

//����3 static���κ��� �ڱ���ʱ����������Դ���
extern int Add(int, int);
int main()
{
	printf("%d\n", Add(2, 3));

	return 0;
}