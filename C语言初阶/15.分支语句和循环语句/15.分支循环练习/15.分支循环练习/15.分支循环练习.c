#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	printf("%d", func(1));
//	return 0;
//}

//�����������Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, & c);
//	if (b < a)
//	{
//		int tmp = b;
//		b = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d %d %d", b, a, c);
//	return 0;
//}

//������������С��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//��ӡ1-100֮������3�ı���������
//int main()
//{
	//3�ı��� һ�����ܱ�3������
	//for (int i = 1; i <= 100; i++) //forѭ��1-100֮�������
	//{
	//	if (i % 3 == 0) //�ж�i�ܷ�3���� �ж�i�Ƿ���3�ı���
	//		printf("%d ", i);
	//}

	//���жϣ��������������3�ı���
//	for (int i = 3; i <= 100; i+=3) 
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}

//�����������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); //24 18
//
//	//�������Լ������m��n�Ľ�Сֵ
//	/*if (m > n)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}*/
//	int max = m > n ? m : n;
//	
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? m : n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ����%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//�������������Լ��  շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	while (t = m % n;)
//	{
//			m = n;
//			n = t;
//	}
//	printf("���Լ����%d", n);
//
//	return 0;
//}

//�������������Լ�� շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d", n);
//	return 0;
//}

//������������С������/������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	int a, b;
//	scanf("%d%d", &m, &n);
//	a = m;
//	b = n;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	int d1 = a / n;
//	int d2 = b / n;
//	printf("��С��������%d", n * d1 * d2);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? m : n;
//	while (1)
//	{
//		if (max % m == 0 && max % n == 0)
//		{
//			printf("��С��������%d", max);
//			break;
//		}
//		max++;
//	}
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int count = 0; //��һ���ж��ٸ�����
//    //���ȵ���1000��2000֮������ ������ݲź��ж�
//	for (int y = 1000; y <= 2000; y++)
//	{
//		//forѭ���ж�y�ǲ�������
//		//�����жϹ��� ����һ�򣬰��겻���İ�������
//		//1.��4���������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int count = 0; //��һ���ж��ٸ�����
//	for (int y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//��ӡ100-200֮������� 
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{       //�ж�i�Ƿ�Ϊ���� ��2->i-1֮�����ȥ�Գ�i�������ܲ��ܱ�����
//		int j = 0;
//		for (j = 2; j < i; j++) //j������ֵ ��Χ��2->i-1֮�䡣 i��100ʱ j�ķ�Χ��2->99,i��101ʱ j�ķ�Χ��2->100
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//���������1. break������ j������i˵����������
//		//          2.û��break j++ ֱ��j==iʱ ������ ��2->i-1�����ֶ��Գ���һ�� ����j��������i i��������
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ100-200֮������� 
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ӡ100-200֮������� 
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1; //������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; //��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nconut = %d\n", count);
//	return 0;
//}

//m��������� ����д������������� m=a*b
//a��b��һ��������һ��������<=m�Ŀ�ƽ��
//16 = 2 * 8 = 4 * 4
//     a   b   ����ܹ��ҵ�2����16�Ŀ�ƽ��4�Ļ����Ͳ�����ȥ��8�����ܲ�������16�ˣ�������ҵ�4������16�Ŀ�ƽ��4�Ļ����Ͳ���������һ��4�� 
//�ڿ�ƽ��m֮ǰ���ҵ�������������ƽ��m�Ļ����Ͳ���������һ��������
int main()
{
	int count = 0; //ͳ���м�������
	for (int i = 101; i <= 200; i+=2) //ż���ܱ�2���� ������������ ��Դͷ��ż������ȥ ��������һ��  ���������������� 101 103 107
	{
		int j = 0;
		int flag = 1; //����i��������
		for (j = 2; j <= sqrt(i); j++) //forѭ������2->sqrt(i) i��ƽ��������
		{
			if (i % j == 0) //�ж�2->sqrt(i)��j�ܷ�˳�i
			{
				flag = 0; //�������������flag=0��˵����������
				break;
			}
		}
		//1.��break������ʱ
		//2.���������������ʱ
		if (flag == 1)//��flagû�б�ָ��0������£�flag���ܱ���1 ˵��jû������i�����������flag=0 ˵��һ���������� ����ӡ
		{
			count++; //ÿһ����������ӡʱ count++
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}