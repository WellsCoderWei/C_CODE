#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void menu()
//{
//	printf("*************************************************\n");
//	printf("***************** 1.Add  2.Sub  *****************\n");
//	printf("***************** 3.Mul  4.Div  *****************\n");
//	printf("*****************    0.exit     *****************\n");
//	printf("*************************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//		}
//	}while(input);
//	return 0;
//}