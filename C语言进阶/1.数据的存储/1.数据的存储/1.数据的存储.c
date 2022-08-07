#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num) //num!=0 二进制中至少有一个1
//	{
//		count++;
//		num = num & (num - 1); //去掉一个1
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//在VS环境下，内存栈区上变量i和arr中间空2个整形。当越界2个整型，10变成12的时候，程序运行结果死循环。
//1.因为i和arr是两个局部变量，先创建i，再创建arr；
//2.根据内存栈区的布局，局部变量是放在栈区上的，栈区的使用习惯是：先使用高地址，再使用低地址;
//3.又因为数组随着下标的增长，地址是由低到高变化的，因此当数组用下标访问时，只要适当的往后越界，就有可能覆盖到i，导致程序死循环。
//
//在gcc环境下，内存栈区上变量i和a中间空1个整型。当越界1个整型，16变成17的时候，程序运行结果死循环。

//int main()
//{
//	printf("%d", sizeof(long long));
//	return 0;
//}

//数据的存储：1.整型的存储   -  整型在内存中的存储：原码、反码、补码
//            2.浮点型的存储

//内置类型-C语言本身就有的类型   数据类型所占空间的大小
//类型的意义：       1.使用这个类型开辟内存空间的大小（大小决定了使用范围）。  使用short类型就能开辟2个字节的空间、使用int类型就能开辟4个字节的空间，利用这些类型可以知道开辟空间的大小
//（两个层次的理解） 2.如何看待内存空间的视角。                                这些类型是一种看待空间的视角 float a a里放的是浮点型的大小、小数   int a a是整数

//类型的基本归类:
//1.整型家族：
//             char  字符类型底层存的是 字符的ASCII码值 ASCII码值也是个整数
//                          unsigned char 无符号字符型    创建一个变量，这个变量里只会存正数，没有可能有负数的情况
//                            signed char 有符号字符型
//             short
//                          unsigned short[int] 无符号短整型   unsigned short age - short里能放的无符号最大值是65535
//                            signed short[int] 有符号短整型   有符号型 表达有正数、有负数的数
//             int 
//                          unsigned int 无符号整型
//                            signed int 有符号整型
//             long
//                          unsigned long[int] 无符号长整型
//                            signed long[int] 有符号长整型
// 
//             long long    unsigned long long[int] 无符号更长的整型
//                            signed long long[int] 有符号更长的整型
//2.浮点型家族：
//             float  单精度浮点型
//             double 双精度浮点型

// 3.构造类型 - 自定义类型（自己去创建/定义的类型）：
//                                               数组类型 int arr[10]; //int [10]  数字可以自己指定，表示数组放几个元素
//                                                        int arr2[5]; //int [5]   类型也可以自己指定 - 数组也是一种自定义类型
// 
//                                               结构体类型 struct
//                                               枚举类型 enum
//                                               联合体 union
// 
// 4.指针类型：
//             void *pv; 空指针类型
//             char *pc; 字符指针类型
//             int *pi;  整型指针类型
//             float *pf; 浮点型指针类型
// 
// 5.空类型（无类型）：
//           void  一般用在  1）函数返回类型 - 函数是不需要返回的，写成void    void test();  无返回
//                           2）函数参数     - 这个函数是不需要参数的          void test(void);  这个函数无参
//                           3）指针类型         - 指针中也会用void                void* p;  void*也是一种指针类型


//数据在内存中以二进制的形式存储
//整型在内存中的存储： 整数的二进制有3种表示形式： 原码、反码、补码
                                        //正整数： 原码 反码 补码相同
                                        //负整数：  原码 反码 补码要进行计算
//int main()
//{
//	int a = -10; //  整数是32个bit 比特位      //二进制中最高位表示符号位  最高位1，表示是负数   最高位0，表示是正数
//
////     原码 1000000000000000000000000000001010  先写符号位 根据数值直接写出二进制形式 就是原码
////     反码 1111111111111111111111111111110101  符号位不变，其他位通通按位取反 就是反码
////     补码 1111111111111111111111111111110110  反码+1
// 
//补码再次取反1000000000000000000000000000001001 符号位不变，其他位按位取反
//      +1    1000000000000000000000000000001010 得到原码
////4*7=28个1 ff ff ff f6          二进制余0进1
//
////按照数据的数值直接写出二进制序列就是原码
////原码的符号位不变，其他位按位取反，得到的就是反码
////反码+1得到的就是补码
//
////整数在内存中存储的是补码
//	return 0;
//}

//为什么整数在内存中存的是补码而不是原码呢？
//1.原因在于，使用补码，可以将符号位和数值域统一处理；（符号位和数值域都可以+）
//2.同时加法和减法也可以统一处理（CPU只有加法器 用加法器来模拟实现减法运算）
//3.此外，补码与原码相互转换，其运算过程是相同的，不需要额外的硬件电路
//                           （原码变补码  补码变原码  都用符号位不变，其他位按位取反，再+1）

//  原码取反+1得到补码：符号位不变其他位按位取反，得到反码，+1再得到补码
//  补码倒回去得到原码：1）补码-1得到反码，符号位不变其他位按位取反，得到原码
//                      2）对补码再次进行取反+1


//int main()
//{
//    //1-1; CPU上没有减法器只有加法器，只能加，不能进行减法运算，减法其实都是用加法来模拟的 
//    //1+(-1) 模拟出来的减法  多减几次其实就是除法
////假设用原码来计算：1的原码   00000000000000000000000000000001
////                  -1的原码  10000000000000000000000000000001
////                            10000000000000000000000000000010   -2
//
////用补码来计算： 1的补码      00000000000000000000000000000001
////               -1的补码     11111111111111111111111111111111
////                           100000000000000000000000000000000  放不下就丢了 剩下的就是全0
//    return 0;
//}

//为什么有大端小端？
//一个数据的大小存到内存里，它需要占的空间大于一个内存（1个字节）时，就会有存储顺序的问题。
//大端(存储)模式：数据的 低位 保存在内存的 高地址 中，数据的 高位 保存在内存的 低地址 中。
//小端(存储)模式：数据的 低位 保存在内存的 低地址 中，数据的 高位 保存在内存的 高地址 中。

//大端字节序 和 小端字节序 ：数据存到内存后，以一个字节为单位，考虑存储字节顺序

int main()
{
    int a = 0x11223344;
//        低地址——>高地址
//大端字节序 - 正着存
//小端字节序 - 倒着存

//大端字节序：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放字低地址处。
//小端字节序：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处。
    return 0;
}
