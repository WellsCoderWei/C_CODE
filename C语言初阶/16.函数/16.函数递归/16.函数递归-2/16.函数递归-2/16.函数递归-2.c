#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
#include <stdio.h>

//ģ�ⴴ��strlen���� ����������ʱ���������ַ�������
//int my_strlen(char* str) //�����ַ�ָ�����char *str
//{
//	//int count = 0; //ͳ���ж��ٸ��ַ�
//	//while (*str != 0)//�ַ�ָ����������� ������ �ַ�������־\0 ʱ��ͨ��strָ���õ��ַ�'b'
//	//{
//	//	count++; //�ַ�����+1
//	//	str++; //ָ��������һ��Ԫ�ص�ַ��str++��һ��ָ��i
//
//	//}
//	//return count;
//	// 
//	//my_strlen("bit")    ��my_strlen��һ���ַ���"bit"�ĳ��� strָ�����bit
//	                      //*str �����õ���һ���ַ�'b' *str�����ж�һ���ַ�'b'�ǲ���\0 ������ֵ�һ���ַ�����\0,my_strlen�����ַ�������ʱ�Ϳ��Ա��
//	//1+my_strlen("it")   �ĳ��ȣ���һ���ַ�����\0 �ǵ�һ���ַ�����������һ��1  1����������� 1+my_strlen("it")�ĳ���
//	//1+1+my_strlen("t")  my_strlen����"it"���ȵ����Ҳ���õ���һ���ַ�'i'����\0������\0��һ���ַ�'i'�ĳ���������1����ʱ�ٰ�������1+��my_strlen("t")�ĳ���
//	//1+1+1+my_strlen("") my_strlenȥ��ʱ ���ֵ�һ����t t˵����һ���ַ�����\0 ���������Ǹ�1�����Գ�����1+my_strlen("")���ַ��� ��Ϊ't'�������ʲôҲû���� ��ʣ��'\0'�� ���Ծͱ�ɿ��ַ�����
//	//1+1+1+0=3           my_strlenȥ�����Լ����ַ���ʱ ������һ������'\0 '  ��'\0 'ʱ˵���ַ�����û�ж����� ���Ⱦ���0 ����+������3
//	
//	//if (*str != '\0')
//	//{
//	//	return 1 + my_strlen(str + 1); //b + my_strlen("it")
//	//}
//	//else
//	//	return 0; //*str == 0 ˵���Ǹ����ַ�
//
//	if (* str == 0) //�Ǹ�ָ��Ļ���ֻ�н������˲����õ�ָ����ַ�
//		return 0;
//	else
//		return 1 + my_strlen(str + 1); //str+1ָ����һ���ַ��ĵ�ַ  str+1���ϱƽ���������\0
//
//}
//int main()
//{
//	char arr[] = "hello bit"; //arr�ַ����� ��������ַ���
//	//['b']['i']['t']['\0']��4��Ԫ��
//	printf("%d", my_strlen(arr)); //�������൱����Ԫ��'b'�ĵ�ַ  �������ڴ��ε�ʱ ����ȥ����ʵ����Ԫ�صĵ�ַ 'b'���ַ����Դ���ȥ�����ַ��ĵ�ַ
//	return 0;
//}

//������ݹ� ��n�Ľ׳ˣ������������
//int main()
//{
//	int n = 5;
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d! = %d", n, ret);
//}

int Fac(int n)
{
	if (n<=1)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = Fac(n);
	printf("%d! = %d", n, ret);
}

//���n��쳲��������� �������������
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//ͳ�Ƶ�3��쳲��������ļ������
//		count++;
//	if (n <= 2)
//		return  1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("��%d��쳲�����������%d\n", n, ret);
//	printf("count=%d", count);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//		for (; n > 2; n--)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("��%d��쳲�����������%d\n", n, ret);
//	return 0;
//}

//��n! �ݹ� ������ջ���
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
	/*if (n > 1)
		return n * Fac(n - 1);
	else
//		return 1;*/
//}

//int Factorial(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n--;
//	}
//	return result;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d! = %d", n, Factorial(n));
//	return 0;
//}


//C���� ������̨�� �ݹ� ������1�� 2�� n�׼��������� 쳲�������������
//int F(int n)
//{
//	if (n == 0) //0��
//		return 0;
//	else if (n == 1) //1�� 1������
//		return 1;
//	else if (n == 2) //2�� 2������
//		return 2;
//	else //n>=3��
//		return F(n - 1) + F(n - 2);
//}
//
//int main()
//{
//	int n = 0; //n��
//	scanf("%d", &n);
//	printf("%d�ף���%d������", n, F(n));
//	return 0;
//}

//��ŵ�� 3������
//void move(char c1, char c2);
//
//void hanoi(int n, char x ,char y, char z)
//{
//	if (n == 1)
//		move(x, z);
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		move(x, z);
//		hanoi(n - 1, y, x, z);
//	}
//}
//
//void move(char c1, char c2)
//{
//	printf("%c -> %c\n", c1, c2);
//}
//
//int main()
//{
//	int n = 0; //n������
//	printf("please input n:");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');//���ú�ŵ������ �������� ���Ӳ�������ȥ
////��3������  ϣ����a���� ����b���� �ƶ���c����
//	return 0;
//}