#define _CRT_SECURE_NO_WARNINGS 1

//描述
//将一个字符串str的内容颠倒过来，并输出。
//
//数据范围：1 \le len(str) \le 10000\1≤len(str)≤10000
//输入描述：
//输入一个字符串，可以有空格
//
//输出描述：
//输出逆序的字符串
//
//示例1
//输入：
//I am a student
//复制
//输出：
//tneduts a ma I
//复制
//示例2
//输入：
//nowcoder
//复制
//输出：
//redocwon

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

//void reverse_string(char* str)
//{
//    assert(str);
//    char tmp = *str;
//    int len = strlen(str);
//    *str = *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if (strlen(str + 1) >= 2)
//    {
//        reverse_string(str + 1);
//    }
//    *(str + len - 1) = tmp;
//}
//
//int main()
//{
//    char arr[10000];
//    gets(arr);
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//打印菱形 *13 line7
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//题目：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水？
//                                                         可以喝 2*money-1 瓶汽水
//喝了  空瓶
//20    20

//10    10
//5     5
//2     2 1
//1     1 1
//1     
//total 喝了39瓶

//最优解
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = 2 * money - 1;
//	}
//	printf("%d", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//
//	//买的
//	int total = money; //总共喝水了多少瓶
//	int empty = money;
//
//	//置换的
//	while (empty >= 2)
//	{
//		total += empty / 2; 
//		empty = empty / 2 + empty % 2;
////真正的剩下空瓶 换回来的空瓶  剩下的空瓶
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	while (money)
//	{
//		total++;
//		money--; //让money逼近0 跳出循环
//		if (total % 2 == 0)
//		{
//			money++;
//		}
//	}
//	printf("%d\n", total);
////s	     20 19 18 17 16 15 14 13 12 11     10 9  8  7  6  5  4  3  2  1
////b	     1  2  3  4  5  6  7  8  9  10     11 12 13 14 15 16 17 18 19 20
////change      2     4     6     8     10        12    14    16    18    20
//	return 0;
//}


//题目：程序死循环解释
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//题目：调整奇偶数顺序  调整数组使奇数全部都位于偶数前面。
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中的所有奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//思路：前面找到一个奇数不动，继续往后找，找到一个偶数；
//      后面找到一个偶数不动，再继续往前找，找到一个奇数；
//      前面找到一个偶数，后面找到一个奇数，进行交换；
//      当前后中间没有元素时，奇偶就不需要调整了，这样只用遍历一次数组就调整好奇偶顺序了
// 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	//left right 数组下标
//	int left = 0;
//	int right = sz - 1;
//	     //说明中间还有元素要交换
//	while (left < right) 
//	{
//		//往前面找一个偶数
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		//往后面找一个奇数
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[] = { 1,3,5,7,9 };
//	//int arr[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//当去move函数里查arr时，压根不知道这个数组有几个元素，得在外边算出这个数组元素的个数
//	move(arr, sz); //表示arr数组里有sz个元素
//	print(arr, sz); //print函数能够打印arr数组的sz个元素
//	return 0;
//}

//void print(int* p,int sz)
//{
//	int* end = p + sz - 1;
//	/*while (p<=end)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (; p <=end; p++)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n");
//}
//void move(int* p, int sz)
//{
//	int* left = p;
//	int* right = p + sz - 1;
//	while (left < right)
//	{
//		//往后找偶数
//		while (left < right && *left % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		while (left < right && *left % 2 == 0 && *right % 2 != 0)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}		
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr,sz);
//	return 0;
//}

//模拟实现strlen函数
//hello wolrd!
//     函数调用约定 - 函数调用时传参先传左边还是右边由函数调用约定决定
//     cdecl (C declaration,即C声明)
//size_t __cdecl my_strlen(const char* str)
//{
//    assert(str);
//    //          eos 用户定义的宏
//    const char* eos = str;
//    while (*eos++);
//    return eos - str - 1;
//}
//int main()
//{
//    char str[100] = {0};
//    gets(str);
//    printf("%d\n", my_strlen(str));
//    return 0;
//}

//模拟实现strcpy函数 拷贝字符串
//char* __cdecl my_strcpy(char* dst, const char* src)
//{
//	char* cp = dst;
//	assert(src && dst);
//	while (*cp++ = *src++);
//	return dst;
//}
//int main()
//{
//	char str[20] = "xxxxxxxxxxxxxxxxx";
//	char* str2 = "hello world!";
//	printf("%s\n", my_strcpy(str, str2));
//	return 0;
//}

