#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int count = 0;
//	for (int i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;//flag==1 ���i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//    flag:
//	printf("haha\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծͻ���1�����ڹػ���������룺���÷�������ȡ���ػ�
//int main()
//{
//	//c���� �ػ� Ҫдһ������
//	//system()���� - ִ��ϵͳ���� 
//	char input[20] = { 0 }; //�ַ�������Է�20���ַ� ����������Ϣ
//	system("shutdown -s -t 60"); // ִ������ػ�
//	//�Ѿ���ʼ�ػ��ˣ����Ծ�û��Ҫ�ٹػ��� system("shutdown -s -t 60"); ��������ȥ
//
//again:
//	printf("��ע��,��ĵ�����1�����ڹػ���������룺���÷�������ȡ���ػ�\n"); //��ʾ
//	scanf("%s", input);  //�������������ǵ�ַ�������ⲻ����ȡ��ַ�����scanf()���Ǳ�����Ҫȡ��ַ
//	if (strcmp(input, "���÷���") == 0)
//	{
//		system("shutdown -a"); //ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}

	//while (1)
	//{
	//	printf("��ע��,��ĵ�����1�����ڹػ���������룺���÷�������ȡ���ػ�\n"); //��ʾ
	//	scanf("%s", input);  //�������������ǵ�ַ�������ⲻ����ȡ��ַ�����scanf()���Ǳ�����Ҫȡ��ַ
	//	if (strcmp(input, "���÷���") == 0)
	//	{
	//		system("shutdown -a"); //ȡ���ػ�
	//		break;
	//	}
	//}

	//do
	//{
	//	printf("��ע��,��ĵ�����1�����ڹػ���������룺���÷�������ȡ���ػ�\n"); //��ʾ
	//	scanf("%s", input);  //�������������ǵ�ַ�������ⲻ����ȡ��ַ�����scanf()���Ǳ�����Ҫȡ��ַ
	//	if (strcmp(input, "���÷���") == 0)
	//	{
	//		system("shutdown -a"); //ȡ���ػ�
	//		break;
	//	}

	//} while (1);

	//for (;;) 
	//{
	//	printf("��ע��,��ĵ�����1�����ڹػ���������룺���÷�������ȡ���ػ�\n"); //��ʾ
	//	scanf("%s", input);  //�������������ǵ�ַ�������ⲻ����ȡ��ַ�����scanf()���Ǳ�����Ҫȡ��ַ
	//	if (strcmp(input, "���÷���") == 0)
	//	{
	//		system("shutdown -a"); //ȡ���ػ�
	//		break;
	//	}
	//}
		
//	return 0;
//}

//goto���ֻ����һ��������Χ����ת�����ܿ纯��
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}