#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//printf("hehe\n");
//	//3 + 5;
//	//; //�����
//
//	//int age = 10;
//	//if (age >= 18)
//	//{
//	//	printf("����\n");
//	//}
//	//else
//	//{
//	//	printf("δ����\n");
//	//	printf("����̸����\n");
//	//}
//
//	//int age = 170;
//	//if (age < 18)
//	//	printf("����\n");
//	//else if (age >= 18 && age < 40) //else if ������������  age>=18 && age<26 ����д�߼���˳һЩ
//	//	printf("����\n");
//	//else if (age >= 40 && age < 48)
//	//	printf("׳��\n");
//	//else if (age >= 48 && age < 65)
//	//	printf("����\n");
//	//else if (age >= 65 && age < 100)
//	//	printf("����\n");
//	//else //���Ǳ�����
//
//	int age = 39;
//	if (age < 18)
//		printf("����\n");
//	else if (age < 40) //else if ������������  age>=18 && age<26 ����д�߼���˳һЩ
//		printf("����\n");
//	else if (age < 48)
//		printf("׳��\n");
//	else if (age < 65)
//		printf("����\n");
//	else if (age < 100)
//		printf("����\n");
//	//else //���Ǳ�����
//
//
//	return 0; //C��������һ���ֺţ������ľ���һ�����  �����һ�����
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//	{
//		if (b == 0)
//		{
//			printf("hehe\n");
//		}
//	}
//	else //����else  else�������ifƥ��
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//if��д��ʽ�Ա�
//int test()
//{
//	if (0) //1Ϊ�� �������㷵��0  0Ϊ�� ���������㷵��1
//		return 0;
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (5 = num) //�����������Ϊ��ֵ ��ߵĲ�����ѹ�����ܱ��� �����ǲ����޸ĵ� ֻд�Ⱥ��޷�����
//	if (5 == num) //���������ͱ������бȽ�ʱ���ѳ���������� Ч������
//		printf("hehe\n");
//
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����  ���1-100֮�������
int main()
{
	/*int num = 1;

	while (num <= 100)
	{
		if (num % 2 == 1)
		{
			printf("%d ", num);
		}
		num++;
	}*/

	//for (int num = 1; num <= 100; num++)
	//{
	//	if (num % 2 == 1)
	//		printf("%d ", num);
	//}

	for (int num = 1; num <= 100; num += 2)
	{
		printf("%d ", num);
	}

	return 0;
}