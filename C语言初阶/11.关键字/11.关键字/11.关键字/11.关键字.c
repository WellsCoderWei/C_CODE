#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	register int num = 100; //num��register������ ����num��ֵ����ڼĴ�����
//	return 0;
//}

//typedef unsigned int u_int; //typedef�����ض��� ����������  ���������͸��Ӽ�ȥʹ������
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//��unsigned int ������Ϊ uint_32,����uint_32Ҳ��һ��������
//typedef unsigned int uint_32;
//int main()
//{
//	//num1��num2,������������������һ���� �����޷�������
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}

//�ؼ���static - ��̬��
//void test()
//{
//	static int a = 1; //a�Ǿֲ����� ��static����һ��
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	//i��0��ʼ��i<10,ÿ��i+1 ѭ��10��
//	int i = 0;
//	while (i < 10)
//	{
//		test(); //ÿ��ѭ����һ��test����
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

extern int Add(int, int); //ֻ��Ҫ���� ������ �������� ���ز������ͼ���
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //Add������a��b��һ�� 
//�ӳ����ĺͷŵ�sum��ͷȥ
	printf("sum=%d\n", sum);

	return 0;
}