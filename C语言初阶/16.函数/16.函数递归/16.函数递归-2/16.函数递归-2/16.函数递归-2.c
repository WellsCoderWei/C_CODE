#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
#include <stdio.h>

//模拟创建strlen函数 不允许创建临时变量，求字符串长度
//int my_strlen(char* str) //这用字符指针变量char *str
//{
//	//int count = 0; //统计有多少个字符
//	//while (*str != 0)//字符指针变量解引用 不等于 字符结束标志\0 时。通过str指针拿到字符'b'
//	//{
//	//	count++; //字符个数+1
//	//	str++; //指针移向下一个元素地址。str++走一步指向i
//
//	//}
//	//return count;
//	// 
//	//my_strlen("bit")    让my_strlen求一个字符串"bit"的长度 str指向的是bit
//	                      //*str 就是拿到第一个字符'b' *str可以判断一下字符'b'是不是\0 如果发现第一个字符不是\0,my_strlen在求字符串长度时就可以变成
//	//1+my_strlen("it")   的长度，第一个字符不是\0 那第一个字符长度至少是一个1  1剥离下来变成 1+my_strlen("it")的长度
//	//1+1+my_strlen("t")  my_strlen对于"it"长度的求解也能拿到第一个字符'i'不是\0，不是\0第一个字符'i'的长度至少是1，这时再剥离下来1+上my_strlen("t")的长度
//	//1+1+1+my_strlen("") my_strlen去看时 发现第一个是t t说明第一个字符不是\0 长度至少是个1，所以长度是1+my_strlen("")空字符串 因为't'再往后就什么也没有了 就剩了'\0'了 所以就变成空字符串了
//	//1+1+1+0=3           my_strlen去看它自己的字符串时 上来第一个就是'\0 '  是'\0 '时说明字符串里没有东西了 长度就是0 最终+起来是3
//	
//	//if (*str != '\0')
//	//{
//	//	return 1 + my_strlen(str + 1); //b + my_strlen("it")
//	//}
//	//else
//	//	return 0; //*str == 0 说明是个空字符
//
//	if (* str == 0) //是个指针的话，只有解引用了才能拿到指向的字符
//		return 0;
//	else
//		return 1 + my_strlen(str + 1); //str+1指向下一个字符的地址  str+1不断逼近跳出条件\0
//
//}
//int main()
//{
//	char arr[] = "hello bit"; //arr字符数组 用来存放字符串
//	//['b']['i']['t']['\0']有4个元素
//	printf("%d", my_strlen(arr)); //数组名相当于首元素'b'的地址  数组名在传参的时 传过去的其实是首元素的地址 'b'是字符所以传过去的是字符的地址
//	return 0;
//}

//迭代与递归 求n的阶乘（不考虑溢出）
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

//求第n个斐波那契数列 （不考虑溢出）
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//统计第3个斐波那契数的计算次数
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
//	printf("第%d个斐波那契数列是%d\n", n, ret);
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
//	printf("第%d个斐波那契数列是%d\n", n, ret);
//	return 0;
//}

//求n! 递归 参数会栈溢出
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


//C语言 青蛙跳台阶 递归 可以跳1阶 2阶 n阶几种跳法？ 斐波那契数列问题
//int F(int n)
//{
//	if (n == 0) //0阶
//		return 0;
//	else if (n == 1) //1阶 1种跳法
//		return 1;
//	else if (n == 2) //2阶 2种跳法
//		return 2;
//	else //n>=3阶
//		return F(n - 1) + F(n - 2);
//}
//
//int main()
//{
//	int n = 0; //n阶
//	scanf("%d", &n);
//	printf("%d阶，有%d种跳法", n, F(n));
//	return 0;
//}

//汉诺塔 3个盘子
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
//	int n = 0; //n个盘子
//	printf("please input n:");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');//调用汉诺塔函数 把盘子数 杆子参数传进去
////有3个盘子  希望从a杆子 经由b杆子 移动到c杆子
//	return 0;
//}