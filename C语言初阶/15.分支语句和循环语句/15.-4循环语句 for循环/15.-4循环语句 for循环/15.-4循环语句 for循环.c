#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (;;) //ʡ���жϲ��֣��жϲ��ֺ�Ϊ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n"); //˫��ѭ����ӡ9��
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n"); //˫��ѭ����ӡ9��
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n"); //��ӡ3��
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //����ѭ���������Ƶ�
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int k = 0;
	                  //k=0�ж������Ǹ�ֵ 0��ֵ��k  0Ϊ��  ѭ��һ�ζ�û��ȥ
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}