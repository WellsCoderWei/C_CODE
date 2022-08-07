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

//将三个整数从大到小排序
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

//将三个整数从小到大排序
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

//打印1-100之间所有3的倍数的数字
//int main()
//{
	//3的倍数 一定是能被3整除的
	//for (int i = 1; i <= 100; i++) //for循环1-100之间的数字
	//{
	//	if (i % 3 == 0) //判断i能否被3整除 判断i是否是3的倍数
	//		printf("%d ", i);
	//}

	//不判断，造出来的数都是3的倍数
//	for (int i = 3; i <= 100; i+=3) 
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}

//求两数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); //24 18
//
//	//假设最大公约数就是m和n的较小值
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
//			printf("最大公约数是：%d", max);
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
//			printf("最大公约数是%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//求两个数的最大公约数  辗转相除法
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
//	printf("最大公约数是%d", n);
//
//	return 0;
//}

//求两个数的最大公约数 辗转相除法
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
//	printf("最大公约数是%d", n);
//	return 0;
//}

//求两个数的最小公倍数/公因数
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
//	printf("最小公倍数是%d", n * d1 * d2);
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
//			printf("最小公倍数是%d", max);
//			break;
//		}
//		max++;
//	}
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	int count = 0; //数一下有多少个闰年
//    //首先得有1000至2000之间的年份 产生年份才好判断
//	for (int y = 1000; y <= 2000; y++)
//	{
//		//for循环判断y是不是闰年
//		//闰年判断规则： 四年一闰，百年不闰，四百年再闰
//		//1.被4整除，并且不能被100整除是闰年
//		//2.能被400整除是闰年
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
//	int count = 0; //数一下有多少个闰年
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

//打印100-200之间的素数 
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{       //判断i是否为素数 拿2->i-1之间的数去试除i，看看能不能被整除
//		int j = 0;
//		for (j = 2; j < i; j++) //j产生的值 范围在2->i-1之间。 i是100时 j的范围是2->99,i是101时 j的范围是2->100
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//两种情况：1. break跳出来 j能整除i说明不是素数
//		//          2.没有break j++ 直到j==i时 跳出来 把2->i-1的数字都试除了一遍 发现j不能整除i i就是素数
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印100-200之间的素数 
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

//打印100-200之间的素数 
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1; //是素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; //不是素数
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

//m如果有因子 可以写成两个因子相乘 m=a*b
//a和b中一定至少有一个数字是<=m的开平方
//16 = 2 * 8 = 4 * 4
//     a   b   如果能够找到2整除16的开平方4的话，就不用再去找8看看能不能整除16了；如果能找到4能整除16的开平方4的话，就不用再找另一个4了 
//在开平方m之前，找到因子能整除开平方m的话，就不用再找下一个因子了
int main()
{
	int count = 0; //统计有几个素数
	for (int i = 101; i <= 200; i+=2) //偶数能被2整除 不可能是素数 从源头把偶数跳过去 数据少了一半  产生的数都是奇数 101 103 107
	{
		int j = 0;
		int flag = 1; //假设i就是素数
		for (j = 2; j <= sqrt(i); j++) //for循环产生2->sqrt(i) i开平方的数字
		{
			if (i % j == 0) //判断2->sqrt(i)的j能否乘除i
			{
				flag = 0; //当有整除情况下flag=0，说明不是素数
				break;
			}
		}
		//1.当break跳出来时
		//2.当条件不满足出来时
		if (flag == 1)//当flag没有被指成0的情况下，flag还能保持1 说明j没有整除i是素数，如果flag=0 说明一定不是素数 不打印
		{
			count++; //每一次是素数打印时 count++
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}