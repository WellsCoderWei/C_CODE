#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ָ������ Ӧ��
// 1.��һ���±꣬ͨ���±��ҵ��������һ��Ԫ�أ�Ԫ����ĳ�������ĵ�ַ��
// 2.ͨ��Ԫ��ֱ��ȥ���õ�ַ��Ӧ�ĺ���
// ת�Ʊ����塢��ת������
//������ - �������ͱ����ļӡ������ˡ���
// a&b a^b a|b a<<b a>>b a>b
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mult(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************************************\n");
//	printf("**************  1.Add  2.Sub  ****************\n");
//	printf("**************  3.Mul  4.Div  ****************\n");
//	printf("**************     0.exit     ****************\n");
//	printf("**********************************************\n");
//}
//int main()
//{                             
//	int input;
//	do
//	{
//		menu();                  //  ����ÿ��Ԫ���Ǻ����ĵ�ַ��0NULL��ָ�� ��һԪ��û�� �޵�ַ
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mult,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;            
//		printf("��ѡ��:>"); //2
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			    // pfArr���Ǻ���ָ������
//			ret = (pfArr[input])(x, y);  //���ú�������
//			//(pfArr[input])������ַ�õ���inputΪ�±������Ԫ��
//			//pfArr�����±�2��Ԫ��Sub
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//			continue;
//		}
//
//	} while (input);
//	return 0;
//}

//ָ�� ����ָ������ ��ָ��
//ָ����ָ�������ָ����һ��ָ��
//ָ��ָ��һ������
//�����Ԫ�ض��Ǻ���ָ��

//��������
//int arr[5]; 
////��������ָ�� �����������
//int (*p1)[5] = &arr; 
//
////����ָ������
//int* arr[5]; 
////p2��ָ�� ����ָ������ ��ָ��
//int* (*p2)[5] = &arr;
//
////����ָ��
//int(*p)(int, int);
////����ָ������ &pfunarr
//int(* pfunarr[4] )(int, int);
//int(* (*p3)[4] )(int, int) = &pfunarr; //ȡ������ָ�������ַ  
//
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��pfun
//	void(*pfun)(const char*) = test;
//	//����ָ������pfunArr
//	void(*pfunArr[1])(const char*) = { test };
//	//&pfunArr 
//	void(* (*p4)[1] )(const char*) = &pfunArr;
//	return 0;
//}
//
//int arr[10];
//arr����Ԫ������ int
//arr�������� int[10]


//�ص�����
//ͨ������ָ����õĺ���
//�Ѻ�����ָ��(��ַ)��Ϊ����,���ݸ�����һ�������������ָ�뱻�������ã�����ָ��ĺ���ʱ�����ǻص�����
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Mod(int x, int y)
{
	return x % y;
}
int AND(int x, int y)
{
	return x & y;
}
int OR(int x, int y)
{
	return x | y;
}
int ExclusiveOR(int x, int y)
{
	return x ^ y;
}
int LeftShift(int x, int y)
{
	return x << y;
}
int RightShift(int x, int y)
{
	return x >> y;
}
int Compare(int x, int y)
{
	return (x > y ? x : y);
}
void menu()
{
	printf("**********************************************\n");
	printf("**********  1.Add  2.Sub          ************\n");
	printf("**********  3.Mul  4.Div          ************\n");
	printf("**********  5.Mod  6.AND          ************\n");
	printf("**********  7.OR   8.ExclusiveOR  ************\n");
	printf("**********  9.LeftShift           ************\n");
	printf("**********  10.RightShift         ************\n");
	printf("**********  11.Compare            ************\n");
	printf("**********  0.Exit                ************\n");
	printf("**********************************************\n");
}
int Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��������������:>");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main()
{
	int input = 0;
	do
	{
		int ret = 0;
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret=%d\n", ret);
			break;
		case 5:
			ret = Calc(Mod);
			printf("ret=%d\n", ret);
			break;
		case 6:
			ret = Calc(AND);
			printf("ret=%d\n", ret);
			break;
		case 7:
			ret = Calc(OR);
			printf("ret=%d\n", ret);
			break;
		case 8:
			ret = Calc(ExclusiveOR);
			printf("ret=%d\n", ret);
			break;
		case 9:
			ret = Calc(LeftShift);
			printf("ret=%d\n", ret);
			break;
		case 10:
			ret = Calc(RightShift);
			printf("ret=%d\n", ret);
			break;
		case 11:
			ret = Calc(Compare);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}