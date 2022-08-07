#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a); //0的二进制表示形式：00000000000000000000000000000000   因为0是一个整数 整数是一个（4x8）32比特的整型
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //后置++
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	//int b = ++a; //前置++
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//整型     浮点型强制转换成
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//int a = 3;
//	//int b = 0;
//	//int c = a && b; // 1）a是真  b是真  并且肯定也是真 结果为1。  2）a b之间有一个为假  结果是0   &&并且里 只要有一个为假 结果就是假；两个同时都为真 结果才为真
//	//printf("%d\n", c);
//	//if (a && b) //a和b现在都为非零 都为真  左边为真  右边为真  并且就是两边都为真时，整个表达式才为真
//	//{
//
//	//}
//
//	int a = 3;
//	int b = 5;
//	int c = a || b; // ||或   有一个为真 结果肯定为真， 两个为真  结果还是为真； 两个同时都为假 结果才为假
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	/*int max = 0;*/
//	//求出a和b的最大值
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	int max = a > b ? a : b;
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	(2, 4 + 5, 6); //逗号表达式：逗号隔开的一串表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//a被改成b+2
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	return 0;
//}


//下标引用 操作符
//int main()
//{
//	              //数组的值
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //把数组的第6个元素拿出来   第6个元素的下标是5
//	printf(" %d\n", arr[5]); //写出arr[5]的时候就是第6个元素   数组的下标是从0开始的，数组是由下标来访问的
//	return 0;
//}

//函数调用 操作符
int main()
{
	printf("hehe\n");
	printf("%d\n", 100);
	return 0;
}