#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main(); //�ݹ麯���Լ������Լ�  ÿһ�ε���һ���Լ��ͻ��ӡһ��hehe ���ݹ�
//	return 0; //�����Լ������Լ������׷���Stack overflow error
//}
// 

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num!= 0)
//	{
//		count = count * 10 + num % 10;
//		num /= 10;
//	}
//
//	if (count > 9)
//	{
//		while (count != 0)
//		{
//			printf("%d ", count % 10);
//			count /= 10;
//		}
//	}
//	else
//	{
//		printf("%d ", count % 10);
//	}
//	
//	return 0;
//
//}

//����һ������ֵ(�޷���)����˳���ӡ����ÿһλ��
//���磺���룺1234 �����1 2 3 4
//void print(unsigned int n) 
////��Ҫ��num��ӡ����Ļ�ϾͿ����� ����Ҫ����ʲôֵ
//{
//	//print(1234)
//	//print(123) 4
//	// print(12) 3 4
//	//print(1) 2 3 4
//	if (n > 9)//�ж���������Ǵ���һλ�����ϵ����� ����9������λ�����ϵ����� 
//	//û����һ�� �����ݹ������Զ�Լ������Լ� ���ݹ顣���Ƶݹ�ʲôʱ���ȥ ʲôʱ��ֹͣ
//	{//���������Ǵ���9�ģ���Ҫ�Ѵ�����⻯ΪС������
//		print(n / 10); //Ҫ��һλ����  ����print�����Լ������Լ� ����ӡn/10��ÿһλ
//		//��һ��û�л��ᡣ�õݹ�Խ��Խ�ƽ���������
//	}
//	printf("%d ", n % 10);
//   
//}
//
//int main()
//{
//	unsigned int num = 0;
//	int count = 0;
//	scanf("%u", &num); //1234
//	print(num); //print�������Դ�ӡ�������� ���ֵ�ÿһλ  ��print��ӡ��num����ȥ ��ֵ����
//	//��num����ȥ print�ͻ��num����˳�������Ļ��
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10); //�õݹ�Խ��Խ�ƽ���������
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}

//void test(int n) //������1�ý���һ��
//{
//	if (n < 10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1); //����һ������
//	return 0;
//}