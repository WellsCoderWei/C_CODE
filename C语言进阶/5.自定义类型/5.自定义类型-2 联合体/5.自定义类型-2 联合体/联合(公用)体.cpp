#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������������
//union Un
//{
//	char c;
//	int i;
//};

//�������Ͷ���


//int main()
//{
//	union Un un = { 10 };
//	un.i = 1000;
//	un.c = 100;
	//���ϱ�����С
	//ֻҪ���������˿ռ䣬�Ϳ��Դ�ӡ���ĵ�ַ
	//printf("%p\n", &un);
	//printf("%p\n", &(un.c));  //un.c��һ���������ó����ĵ�ַȡ��ַ
	//printf("%p\n", &(un.i));
	//��������ص㣺�����Ǹ�����ÿ����Ա���������ٿռ䣬���ǣ���Ա��ȫ�п����ǹ�����һ��ռ�
	//printf("%d\n", sizeof(un));  //4
	//printf("%d\n", sizeof(un.i));

	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);  //11223355
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);  //�ó�a�ĵ�ַ������int*
//}          //����һ���ֽ����ݳ���
//int main()
//{
//	int ret = check_sys();
//	//int a = 1;
//
//	if ((*(char*) & a) == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(Un1));  //8
	printf("%d\n", sizeof(Un2));  //16
	return 0;
}