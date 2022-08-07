#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//hello bit\0 十个字符在ps指针变量里怎么存得下 ps撑死在64位平台也是8个字节
//	//本质上是把"hello bit"这个字符串的首字符h的地址存储在了ps中
//	char* ps = "hello bit"; //把一个字符串赋给ps指针变量,绝不是把字符串放到ps指针变量里
//	char arr[] = "hello bit"; //arr数组里放的就是hello bit这个字符串
//	//ps是变量 arr是数组不一样，但是访问形式一样 arr数组名也表示的是h的地址
//	printf("%c\n", *ps); //ps是个字符指针 如果ps里面存的是h的地址，那么说明ps指向h，字符指针解引用就能访问一个字节 找到h
//	printf("%s\n", ps); //打印字符串时，给字符串的起始地址就能打印出来
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	//字符变量放字符
//	char ch = 'w';
//	char* pc = &ch; //字符变量地址放到字符指针
//	*pc = 'q';
//	printf("%c", ch);
//	return 0;
//}

//int main()
//{
//	//相同的字符串常量去初始化不同的数组时，会开辟不同的内存块
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//
//	//几个指针指向相同的常量字符串时，实际上指向的是同一块内存
//	const char* str3 = "hello bit"; //常量字符串 内存中只存一个
//	const char* str4 = "hello bit"; 
//	//const *str3 const *str4  const放在*左边 修饰指针指向内容
//	*str1 = 'w';
//	*(str2 + 1) = 'w';
//	printf("%s\n", str2);
//
//	if (str1 == str2) //两个指向不同空间的首字符地址
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3 == str4) //指向同一个常量字符串
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	return 0;
//}

//指针数组用途：是数组 存放指针（地址） 每个元素都是指针
int main()
{
	//int* arr1[10]; //一级整型指针数组  存放整型指针数组有10个元素，每个是元素int*
	//char* arr2[4]; //一级字符指针数    存放字符指针数组有4个元素，每个是元素char*
	//char** arr3[5]; //二级字符指针数组 存放字符指针数组有5个元素，每个是元素char**

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = { &a, &b, &c }; //整型指针数组可以存放3个整型指针
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i])); //地址解引用就是值
	//}

	//3行数组完全独立，只不过3个指针把3个数组统领起来了
	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* arr[3] = { a,b,c }; //数组名相当于首元素地址（指针）
	//arr数组3个元素，分别指向3个数组，每个数组又是5个元素   a代表1的地址 b代表2的地址 c代表3的地址
	//数组arr3个元素分别是 int*类型
	//                     int*类型
	//                     int*类型
	for (int i = 0; i < 3; i++) //i是某一行一维数组起始位置的地址  i作为数组下标访问
	{
		for (int j = 0; j < 5; j++) //j起始位置地址+0指向1 +1指向2
		{
			/*printf("%d ", *(arr[i] + j))*/; //arr[i]相当于拿到数组起始位置地址
		              // a这一行下标为j元素的地址    拿到起始位置之后又有5个元素   解引用就是这一行的所以元素
			printf("%d ", arr[i][j]); //[j] == *(+j)   
			                          //方括号j 等价于 +j解引用
		}
		printf("\n");
	}
	return 0;
}

//二维数组中的每一行是连续存放的。