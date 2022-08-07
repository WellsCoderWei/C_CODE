#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//1.形参用数组，可以把两个数据带回来
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

//2.形参用两个指针，可以把两个数据带回来
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

//3.用两个全局变量，可以把两个数据带回来

//int a = 0;
//int b = 0;

//声明 告诉编译器变量名 变量类型
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

//exec((v1, v2), (v3, v4), v5, v6); //四个实参

//实现函数 判断year是不是闰年
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
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//
//	return 0;
//}

//实现一个函数来交换两个整数内容
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

//函数 乘法口诀表
//void print_table(int n)
//{
//	for (int i = 1; i <= n; i++) //1到n行
//	{    //第i行要打印i项 1项   
//		for (int j = 1; j <= i; j++) //每一行有多少项? 第i行有i项
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//			             //空格是一项 每一项中间给个空格
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

//递归方式实现返回一个整数的每一位
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

//阶乘
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

//阶乘 递归
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

//非递归实现 strlen 1.库函数
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", strlen(arr));
//	return 0;
//}

//非递归实现 strlen 2.创建临时变量
//int strlen(char* p) //所以用 字符指针变量char *p
//{
//	int count = 0;
//	while (*p != '\0') //通过p指针拿到字符'a' 字符指针变量*p解引用 不等于 字符结束标志'\0'时 进入循环
//	{
//		count++; //字符个数+1
//		p++; //指针p移向下一个元素地址 p走一步指向字符'b'
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef"; //因为是字符数组
//	printf("%d", strlen(arr));
//	return 0;
//}

//递归创建strlen函数 不允许创建临时变量，求字符串长度
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

//非递归实现abcdef字符串逆序
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
//	while (left < right) //说明左边和右边还有字符等待交换
//	{//交换的是字符 str[] = *str 
//		//char tmp = str[left]; //一个元素 
//		//str[left] = str[right];
//		//str[right] = tmp; //至此交换了一个字符
//
//		char tmp = *(str + left); //指针str解引用指向下一个left元素
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++; //找到下一个字符
//		right--; //找到上一个字符
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

//非递归实现abcdef字符串逆序
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

//递归实现abcdef字符串逆序
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

//递归 逆序字符串
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