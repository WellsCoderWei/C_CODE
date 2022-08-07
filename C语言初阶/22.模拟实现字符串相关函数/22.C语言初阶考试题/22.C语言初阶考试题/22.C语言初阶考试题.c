#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int cnt = 0; //拆开就会调用fib函数 cnt++  >1  >=2拆
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//    /*int ret = */fib(8);
//	printf("%d\n", cnt);
//	//printf("%d", ret);
//	return 0;
//}

//8 ——1
//7                           6 ——2
//6                5          5           4 ——4
//5       4        4    3     4    3       3    2 ——8
//4   3   3   2    3 2  2 1   3 2  2 1     2 1  1 0 ——16
//3   2     2 1 2 1 1 0  2 1  1 0  1 0   2 1 1 0  1 0     1 0 ——22
//2 1 1 0   1 0 1 0      1 0             1 0 ——12
//1 0 ——2
//
//15
//16 ——31
//       36
//	   67

//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++); //1
//	} while (x--); //x是2 拿2来判断 x--之后又变成1了
//	//判断的时候总是拿2来判断，打印的时候打印1
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//	//1.局部、全局名字冲突局部优先
//	//2.局部变量只能在局部范围使用
//int a = 1;
//void test()
//{
//	int a = 2; int b = 20; int c = 50; ;;;;;;;;
//	a += 1; //加的是局部的a
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//C语言本身没有输入输出语句 - C语言只规定了各种语法规则
//库函数是独立于C语言语法之外的，库函数是利用C语言的语法写出的 - 库函数是为了让C语言使用起来更方便，库函数是作为额外的补充，让我们开发效率提高，常用的功能不用重复造轮子去写，库里提供
//库函数不属于C语言  的一部分，C语言是独立的，库函数是独立于C语言存在的，库函数不是C语言的语法规则。利用C语言实现的一部分库函数，这些库函数作为C语言使用的补充，让程序员更方便
//库函数是程序员写的，每个厂商实现库函数的方式都不一样。
//标准只是规定了 函数参数是怎样的? 返回值类型是怎样的? 功能是怎样的? 关于函数如何实现不重要，每个厂商自己实现
//只要把函数参数、返回值类型、功能规定好以后，只要完成实现 体验一模一样
//语言 语法是独立的 - C语言非常干净独立 只是规定好了语法规则 根据语法规则写就可以了

//test.c                                                                      test.exe
//预处理 -                          编译 -                     汇编 - 链接 - 可执行程序
//预编译阶段就已经把注释删除了      编译才会去检查语法错误
//删除注释

//int main()
//{
//	//double x = 2;
//	//double y = x + 3 / 2; //整除是1.000000
//	//printf("%lf", y);
//
//	/*int x;
//	int y;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;*/
//
//	int a, *b; //*说明b是指针变量 b指向整型
//	int year = 1009, * p = &year; //指针变量体:  *说明p是指针变量 p指向整型
// *p++  *p如果没有括起来  ++优先级高于*p解引用  p首先和++结合了  ++相当于给p++了  p++是后置++  *拿到p解引用还是原来的值 但不会给*p ++了  ++是作用于p的而不是作用于*p
//	return 0;
//}

//题目：正整数A和正整数B的最小公倍数是指 能被A和B整除 的最小的正整数值，设计一个算法，求输入A和B的最小公倍数
// min是被除数    
//1.假定最小公倍数不能被a整除（有余数）时，假定最小公倍数往上加
//2.假定最小公倍数能被a整除时（余数为0时），就判断该数能否被b整除（余数为0），能被a整除但不能被b整除（有余数时），假定最小公倍数继续往上加；
//2.->假定最小公倍数也能被b整除（余数为0时），不能被a和b整除（有余数）同时为假，退出循环，往上加到此时的假定最小公倍数就是a和b的最小公倍数

//5和7的最小公倍数不可能比7小，比7小是不可能 被7整除的
//输入 5 7
//输出 35
 
//a和b的最小公倍数，最小也是a和b的最大值。  2和4的最小公倍数不可能比4小，比4小不能 被4整除
//输入 2 4        8    24
//输出 4          24能 被8整除，也能 被24整除
  
//不等于0为真 就是有余数
//if(min%a!=0)

//方法1-1：加的方法
//int main()
//{
//    unsigned int  a; 
//    unsigned int b;
//    scanf("%u%u", &a, &b);
//    //a和b的最小公倍数，最小也是a和b的最大值。
//    //假定min是最小公倍数，假定最小公倍数的起始值，就是a和b的较大值
//    int min = a > b ? a : b; //a大于b?问号     :冒号a或者b   先把a或者b的较大值放到min里
//    while ((min % a != 0) || (min % b != 0)) //              然后再看min是否能同时被a和b整除   !=0同时为假，min才是a和b的最小公倍数
//    {
//        min++; //只要发现min不能 被a和b整除
//    }
//    printf("%d\n", min);
//    return 0;
//}

//方法1-2：加的方法
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	int min = a > b ? a : b; //假定a和b的最小公倍数是a或者b的较大值
//	while (1)
//	{
//		if (min % a == 0 && min % b == 0) //如果min能同时被a和b整除
//		{
//			printf("%d\n", min); //那么min就是a和b的最小公倍数
//			break; //退出循环
//		}
//		min++; //否则min++ 直到min能同时被a和b整除时，退出循环
//	}
//	return 0;
//}

//最优解 方法2: 乘的方法
//最小公倍数：能够整除a、能够整除b
//int main()
//{	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	//两个数的最小公倍数，最大不超过两个数的乘积
//	int i = 1;
//	//(a * i) % b == 0   判断(a*i)%b是否等于0  a*i是否能整除b？ 1.能整除说明已经找到最小公约数了
//
//	while ((a * i) % b)  
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//
//	/*for (i = 1;; i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//	}*/
//	return 0;
//}

//方法3：辗转相除法： 先求最大公约数 (a*b)/最大公约数=最小公倍数
//a   b   u
//2   4   2
//4   2   0
//2   0        当其中一个数为0，另一个数就是两数的最大公约数

//递归函数
//  Greatest Common Divisor  [ˈgreɪtɪst ˈkɒmən dɪˈvaɪzə(r)] 
//int gcd(int a, int b) {
//	if (b == 0) return a;//返回a，即返回上一步的b 
//	return gcd(b, a % b); //传参a是b  b是u=a%b余数
//  //第一次递归1. a=2 b=4                                                   5   7
//		//	   b!=0                           
//  //             调用gcd函数(a=b=4, b=2%4=2)                               7  5
//  //第二次递归2. a=4 b=2                                                   7  5
//	 //          b!=0
//	 //          调用gcd函数(a=b=2, b=4%2=0)                               5  2
//  //第三次递归3. a=2 b=0                                                   5  2
//	 //          b=0
//	 //          返回 a->2 即返回上一步的b  最大公约数就是2                2  1
//	 //                                                                    1  0
//}
//int main(int argc, char* argv[])
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", gcd(a, b));
//	return 0;
//}

//数据范围 1<=a, b<=100000
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int m = a;
//    int n = b;
//    while (n != 0) //当其中一个数等于0时，另一个数就是两数的最大公约数
//    {
//        int tmp = m % n;
//        m = n;
//        n = tmp;
//    }
//    //最小公倍数=两数之积/最大公约数
//    //两数最小公倍数就是：将两数都分解成连续质数积时，两数所拥有的连续不重复乘积就是他们的最小公倍数。
//    //           两整数之积时，最大公约数已重复乘了一遍，因此要除去
//    int ret = (a * b) / m;
//    printf("%d\n", ret);
//    return 0;
//}

//int gcd(int a, int b)
//{
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int ret = gcd(a, b);
//    printf("%d\n", (a * b) / ret);
//    return 0;
//}

//题目：将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//三步翻转法
//1.字符串整体翻转 .gnijieb ekil I  
//2.每个单词逆序
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
	
}
int main()
{
	char arr[100] = {0};
	//scanf("%s", arr); //err  scanf读取字符串遇到空格 默认字符串结束
	gets(arr); //读取一行
	//char* gets(char* str) 参数是 要存放字符串空间的首地址
	//Parameters - pointer to a block of memory(array of char)where the string read is copied as a C string.
	int len = strlen(arr);
	reverse(arr, arr+len - 1);
 //字符串：首字符地址，末字符地址 
		   //字符数组元素下标从0到len-1
	char* start = arr; //start找起始位置  把起始地址赋给start
	while (*start)   // *start != '\0'说明还可以找单词    *start == '\0'说明整个字符串都被找完了
	{
		char* end = start;
		while (*end != ' ' && *end != '\0') //  .gnijieb ekil I\0     一个单词的结束要么是' '要么是'\0'  因此*end不等于空格的同时，还不等于\0 才能end++
											  //I 结束时不是空格 是\0
			                               //单词结束有两种可能：1.等于空格，但不等于\0 不再进入循环++
			                                           //        2.不等于空格，但是等于\0  也不再进入循环++
		{
			end++;
		}
		//逆序一个单词
		reverse(start, end-1); //此时end指向' '或'\0'
		if (*end == ' ')
		{
			start = end + 1;
		}
		else //*end=='\0'
		{
			start = end;
		}
	}
	printf("%s\n", arr);
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
