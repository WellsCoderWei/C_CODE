#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{/*
//	float a = 9 / 2.0;
//	printf("%f\n", a);*/
//	int a = 9 % 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//int a = 2;
//	//int b = a << 1; //a�����ƶ�һλ �ŵ�b��ȥ
//	//printf("%d\n", b);
//
//	//λ��������&��λ��  |��λ��    ^��λ���
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	//a = a + 5;
//	////a += 5;
//	////a = a - 3;
//	//a -= 3;
//	//a = a % 3;
//	a %= 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//printf("%d\n", !a);
//	a = -5;
//	a = -a;
//	a = +a;
//	return 0;
//}

int main()
{
	//printf("%d\n", sizeof(int)); //�������ʹ�С

	//int a = 10;
	//printf("%d\n", sizeof a); //���������С a�����;���int  intҲ������a   �������a �� �������a������int ��ʵ��һ����� ��Сһ����4  ����a��a������sizeof��������

	int arr[10];
	printf("%d\n", sizeof(arr)); // 10��Ԫ�� ÿ��Ԫ����1��int   1��int��4���ֽ�  10*4=40���ֽ�   ����������Ԫ�ش�С40����λ �ֽڣ�
	printf("%d\n", sizeof(arr[0])); //�����1��Ԫ�ش�С4  ÿ1��Ԫ�ض������ͣ���1��Ԫ�ص�ȻҲ������ ��С��4
	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //��������Ԫ�ظ���  10��Ԫ��
	return 0;
}