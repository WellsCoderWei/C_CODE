#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	////printf("hehe\n");
	////printf("����\n");
	////printf("%d\n", 100);
	//printf("sizeof(char)=%d\n\n", sizeof(char));
	//printf("sizeof(short)=%d\n\n", sizeof(short));
	//printf("sizeof(int)=%d\n\n", sizeof(int));
	//printf("sizeof(long)=%d\n\n", sizeof(long));
	//printf("sizeof(long long)=%d\n\n", sizeof(long long));
	//printf("sizeof(float)=%d\n\n", sizeof(float));
	//printf("sizeof(double)=%d\n\n", sizeof(double));

//	int age = 20;//����һ������ ��ʾһ���˵�����  ��������ʱ��һ����ʼ����ֵ
//	double weight = 75.3;
//
//	age++; // age=age+1;
//	weight = weight - 10;
//	printf("age=%d\n", age);
//	printf("weight=%lf\n", weight);
//	return 0;
//}

//int a = 100; //�ڴ��������Ҳ����һ������a  ��ȫ�ֱ���
//int main()
//{     //a�Ǿֲ�����
//	int a = 10; //�������ڲ��ı��� ������Ϊ�ֲ�����
//	printf("%d\n", a);
//	return 0;
//}

//int global = 2021; //ȫ�ֱ���
//int main()
//{
//	int local = 2020; //�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2022; //�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}
//дһ�����������������ĺ�

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("��������������");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}