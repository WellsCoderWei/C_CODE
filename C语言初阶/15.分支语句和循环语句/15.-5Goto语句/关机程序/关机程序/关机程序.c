#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//c���� �ػ� Ҫдһ������
	//system()���� - ִ��ϵͳ���� 
	char input[20] = { 0 }; //�ַ�������Է�20���ַ� ����������Ϣ
	system("shutdown -s -t 60"); // ִ������ػ�
	//�Ѿ���ʼ�ػ��ˣ����Ծ�û��Ҫ�ٹػ��� system("shutdown -s -t 60"); ��������ȥ

again:
	printf("��ע��,��ĵ�����1�����ڹػ���������룺���÷�������ȡ���ػ�\n"); //��ʾ
	scanf("%s", input);  //�������������ǵ�ַ�������ⲻ����ȡ��ַ�����scanf()���Ǳ�����Ҫȡ��ַ
	if (strcmp(input, "���÷���") == 0)
	{
		system("shutdown -a"); //ȡ���ػ�
	}
	else
	{
		goto again;
	}

	return 0;
}