#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	/*int a = 3 / 5;*/ //商0  商0余3 不够除余3
	/*int a = 6 / 5; *///商1 余1
	//float a = 6 / 5.0; //1.2  想得到小数两端（除数和被除数）必须有一个数是浮点数  小数两端只要有一个浮点数，执行的就是小数的除法
	//printf("%f", a); //浮点数放到浮点数里再以浮点数打印  
	/*double a = 6.0 / 5.0;*/  //“初始化”: 从“double”到“float”截断   double类型计算除结果也double类型
	/*printf("%f", a);*/ //double双精度浮点数的值放到float单精度变量里可能会丢失精度
	/*float a = 6.0f / 5.0f; 
	printf("%f", a); */
//	return 0;
//}

//int main()
//{
//	/*int a = 7 % 0;*/ //被0除被0求%无意义
//	/*int a = 7 % -1;*/ //商7余0
//	int a = 7 % -4; //7除不了-19999 余7  余3
//	printf("%d", a); //1
//	return 0;
//}

//int main()
//{
//	//int a = 2;
//	//int b = a << 1; //a向左移动一位  移的是2进制位 00000000000000000000000000000010
//	//printf("%d\n", b); //4                 //     00000000000000000000000000000010
//	                                             //  00000000000000000000000000000100
//
//	//int a = 2;                              //    00000000000000000000000000000010
//	//int b = a << 2; //移两位补两个0    //       00000000000000000000000000000010
//	//printf("%d\n", b);  //8                       00000000000000000000000000001000
//
//	int a = 2;             //            00000000000000000000000000000010
//	int b = a >> 1;     //                00000000000000000000000000000010
//	printf("b = %d\n", b); //1               00000000000000000000000000000001  
//	       //表达式的结果是a向右移动的结果
//	printf("a = %d\n", a); //a没有变
//	return 0;
//}

//int main()
//{
//	/*int a = -1;
//	int b = a >> 1;
//	printf("b = %d\n", b);*/ //-1 当前右移操作符使用的是算术右移
//
//	int num = 2;
//	int num1 = num << 1;
//	printf("num1 = %d\n", num1);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	/*int c = a & b;*/
//	//printf("c = %d\n", c); //1
//
//	/*int c = a | b;
//	printf("c = %d\n", c);*/ //7
//
//	int c = a ^ b;
//	printf("c = %d\n", c); //6
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n", num1 & num2); //0
//	printf("%d\n", num1 | num2); //3
//	printf("%d\n", num1 ^ num2); //3
//	return 0;
//}

//int main()
//{
//	/*int a = 10;
//	int b = 20;*/
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;*/
//	//printf("a = %d\nb = %d\n", a, b);
//	
//	/*int c = 0;
//	c = a;
//	a = b;
//	b = c;*/
//
//	//数值太大会溢出 整型变量有上限 存放数字有最大值
//	//给a放超大数字，给b放超大数字，但是都没有超出a和b整型能表达的最大值，一旦a和b相加 和就超出了整型表达式的最大值，数学上可算但整型a里存不下
//	a = a + b; //超出整型表达式最大值放到a里，肯定放不下，一旦放不下就有二进制位要丢掉了，丢掉之后放到a里的值就不是和了
//	b = a - b;  //和-b 翻译出原来a 放到b里（b已得到原来a） 不是和就翻译不出原来的a了
//	a = a - b; //和-b（b放着原来的a）  翻译出原来b 放到a里（a已得到原来b）
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//                  补码
//int main()
//{
//	int a = 10;
//	int count = 0;
//	for (int i = 32; i >0; i--)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//			num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
////原码10000000000000000000000000000001
////反码11111111111111111111111111111110
////补码                               11111111111111111111111111111111
////    00000000000000000000000000000001
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++; //0-31位 每一位按位&都是1    -1二进制中有32个1 即补码
//		}
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
////11111111111111111111111111111111
////11111111111111111111111111111110
////11111111111111111111111111111110
////11111111111111111111111111111101
////10000000000000000000000000000010
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	
//	/*printf("%d", -1 ^ -1); *///两个相同数字异或是0
//	//int a = 10;
//	//int x = 0;
//	//int y = 20;
//	///*a = x = y + 1;*/
//	//x = y + 1;
//	//a = x;
//	//printf("a=%d x=%d y=%d", a, x, y);
//	      //a=21 x=21 y=20
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	/*printf("a=%d", (1 << 4) | a);*/
//	//a |= (1 << 4);
////00000000000000000000000000011101
////11111111111111111111111111101111
////00000000000000000000000000010000
//	a &= ~(1 << 4);
//	printf("a=%d", a);
//	return 0;
//}

//int main()
//{
//	/*int a = 10; *///int a占了几个字节的空间
//	//printf("%d\n", sizeof(a)); //计算a所占空间大小，单位字节
//	//printf("%d\n", sizeof(int)); //计算a所占空间大小，单位字节
//	/*printf("%d\n", sizeof a);*/ //sizeof计算大小对于变量名可以省去（） 说明sizeof是一个操作符 不是函数
//
//	//char arr[10] = { 0 }; //字符数组10个元素，每个元素是char类型 一个char是一个字节
//	///*printf("%d\n", sizeof(arr)); *///10个字节
//	//printf("%d\n", sizeof(char [10])); //10
//
//	//int arr[10] = { 0 }; //一个int是4个字节
//	//printf("%d\n", sizeof(arr)); //40
//	//printf("%d\n", sizeof(int [10])); //40  int [10]就是arr的类型
//	//printf("%d\n", sizeof(int));
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", a--);
	printf("%d\n", a);

	/*int b = a++;*/ //后置++   先使用，再++
	/*int b = ++a;*/ //前置++   先++，再使用
	/*int b = a--;*/ // 后置--   先使用，再--
	/*int b = --a;*/ // 前置--   先--，再使用
	/*printf("a = % d\n", a);
	printf("b = % d\n", b);*/
	return 0;
}