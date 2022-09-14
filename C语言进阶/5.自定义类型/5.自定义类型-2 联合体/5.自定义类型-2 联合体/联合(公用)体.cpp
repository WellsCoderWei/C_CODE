#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//联合类型声明
//union Un
//{
//	char c;
//	int i;
//};

//联合类型定义


//int main()
//{
//	union Un un = { 10 };
//	un.i = 1000;
//	un.c = 100;
	//联合变量大小
	//只要变量开辟了空间，就可以打印它的地址
	//printf("%p\n", &un);
	//printf("%p\n", &(un.c));  //un.c是一个变量，拿出他的地址取地址
	//printf("%p\n", &(un.i));
	//联合体的特点：并不是给它的每个成员都独立开辟空间，而是，成员完全有可能是共用了一块空间
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
//	return (*(char*)&a);  //拿出a的地址类型是int*
//}          //拿了一个字节内容出来
//int main()
//{
//	int ret = check_sys();
//	//int a = 1;
//
//	if ((*(char*) & a) == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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