#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//1.�β������飬���԰��������ݴ�����
//void test(int arr[])
//{
//	arr[0] = 0;
//	arr[1] = 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2 };
//	test(arr);
//	return 0;
//}

//2.�β�������ָ�룬���԰��������ݴ�����
//void test(int *p1, int *p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//3.������ȫ�ֱ��������԰��������ݴ�����

//int a = 0;
//int b = 0;

//���� ���߱����������� ��������
//int a;
//int b;
//
//void test()
//{
//	a = 0;
//	b = 0;
//}
//
//int a = 1000;
//int b = 777;
//
//int main()
//{
//	test();
//	return 0;
//}
//
//int a = 45;
//int b = -9;

//exec((v1, v2), (v3, v4), v5, v6); //�ĸ�ʵ��

//ʵ�ֺ��� �ж�year�ǲ�������
//int leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	leap_year(year);
//	if (leap_year(year) == 1)
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//
//	return 0;
//}

//ʵ��һ������������������������
//void swap(int* p1, int* p2)
//{
//	*p1 = 25;
//	*p2 = 100;
//}
//
//int main()
//{
//	int a = 100;
//	int b = 25;
//	swap(&a, &b);
//	return 0;
//}

//���� �˷��ھ���
//void print_table(int n)
//{
//	for (int i = 1; i <= n; i++) //1��n��
//	{    //��i��Ҫ��ӡi�� 1��   
//		for (int j = 1; j <= i; j++) //ÿһ���ж�����? ��i����i��
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//			             //�ո���һ�� ÿһ���м�����ո�
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//�ݹ鷽ʽʵ�ַ���һ��������ÿһλ
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//�׳�
//int Fac(int n)
//{
//	int ret = 1;
//	/*while (n >= 1)
//	{
//		ret *= n;
//		n--;
//	}*/
//
//	/*for (; 1 <= n; n--)
//	{
//		ret *= n;
//	}*/
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d! = %d", n, Fac(n));
//	return 0;
//}

//�׳� �ݹ�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d! = %d", n, Fac(n));
//	return 0;
//}

//�ǵݹ�ʵ�� strlen 1.�⺯��
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", strlen(arr));
//	return 0;
//}

//�ǵݹ�ʵ�� strlen 2.������ʱ����
//int strlen(char* p) //������ �ַ�ָ�����char *p
//{
//	int count = 0;
//	while (*p != '\0') //ͨ��pָ���õ��ַ�'a' �ַ�ָ�����*p������ ������ �ַ�������־'\0'ʱ ����ѭ��
//	{
//		count++; //�ַ�����+1
//		p++; //ָ��p������һ��Ԫ�ص�ַ p��һ��ָ���ַ�'b'
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef"; //��Ϊ���ַ�����
//	printf("%d", strlen(arr));
//	return 0;
//}

//�ݹ鴴��strlen���� ����������ʱ���������ַ�������
//int my_strlen(char* str)
//{
//	/*if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;*/
//
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//�ǵݹ�ʵ��abcdef�ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right) //˵����ߺ��ұ߻����ַ��ȴ�����
//	{//���������ַ� str[] = *str 
//		//char tmp = str[left]; //һ��Ԫ�� 
//		//str[left] = str[right];
//		//str[right] = tmp; //���˽�����һ���ַ�
//
//		char tmp = *(str + left); //ָ��str������ָ����һ��leftԪ��
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++; //�ҵ���һ���ַ�
//		right--; //�ҵ���һ���ַ�
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//�ǵݹ�ʵ��abcdef�ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reserve_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while(left<right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//�ݹ�ʵ��abcdef�ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reserve_string(char* str)
//{
//	char tmp = *str;
//	int len = (my_strlen(str));
//	*str= *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if ( my_strlen(str+1)>=2)
//	{
//		reserve_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//�ݹ� �����ַ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reserve_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reserve_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}