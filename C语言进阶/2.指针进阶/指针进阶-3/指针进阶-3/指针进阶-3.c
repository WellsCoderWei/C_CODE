#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{//����0��ַ���ĺ������ú����޲Σ�����������void
//	//(*(void(*)())0)();
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	return 0;
//}
//
//     //signal��һ�� ��������
////1)
//void(* signal(int, void(*)(int)))(int);  
////        signal(int, void(*)(int))
//// void(*                           )(int);
////          void(*)(int) ����ָ������
////1. signal��()�Ƚ�ϣ�˵��signal�Ǹ�������
////2. signal������ ��һ������������int���ڶ�������������void(*)(int)����ָ��
////   �ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
////3. signal�����ķ�������Ҳ��һ��void(*)(int)����ָ��
////   �ú���ָ�룬Ҳָ��һ������Ϊint����������Ϊvoid�ĺ���
//
////void(*)(int) signal(int, void(*)(int)); //err �﷨��֧��
////2)
//typedef void(*pfun_t)(int);  //�� void(*)int ����ָ������ ������Ϊpfun_t
//pfun_t signal(int, pfun_t);  //pfun_t�����������ָ������� �ȼ�


//����ָ������ - ��ź���ָ�������
//int* p;  //����ָ��                                    char* pc;   �ַ�ָ��
//int* arr[5];  //����ָ������                           char* ch[10];  �ַ�ָ������
//int(*parr[2])(int, int);  //����ָ������               char(*pch[3])(char); ����ָ������

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int,int) = Add;  //f1 ����ָ��
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { pf1,pf2 };  //����ָ�� ��ź�����ַ
//	int(*pfArr[2])(int, int) = { Add,Sub }; //������ �Ǻ�����ַ
////	int(*        )(int, int)
////		 pfArr[2]  ������������[]���⣬ʣ�µĶ��Ǻ���ָ��
////       pfArr  -  ����ָ������ - ���Դ��ͬ���͵ĺ���ָ��
//	return 0;
//}


//����ָ��������;
//���ͼ����� - �������ͱ����ļӡ������ˡ���
void menu()
{
	printf("******************************************\n");
	printf("**********  1.Add    2.Sub   *************\n");
	printf("**********  3.Mult   4.Div   *************\n");
	printf("**********      0.exit       *************\n");
	printf("******************************************\n");
}
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mult(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{// a&b  a^b  a|b  a>>b  a<<b  a>b
	int input;
	do
	{
		menu();
		//int input;  //int input; ����do whileѭ���ⲻ�У���Ϊdo-whileѭ������while��Ҫ�ã�������ѭ�����ǲ��еģ�Ҫ��������ͷ
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1: 
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			 ret = Add(x,y);
			 printf("ret = %d\n", ret);
			break;
		case 2:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x,y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Mult(x,y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = Div(x,y);
			printf("ret = %d\n", ret);
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
