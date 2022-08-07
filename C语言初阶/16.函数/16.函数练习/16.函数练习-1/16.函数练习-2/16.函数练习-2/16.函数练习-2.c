#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n) 
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10)+ n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 1729;
//
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//int DigitSum(n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 1729;
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//n的k次方
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);	
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//递归斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", Fib(num));
//}

//非递归斐波那契
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}