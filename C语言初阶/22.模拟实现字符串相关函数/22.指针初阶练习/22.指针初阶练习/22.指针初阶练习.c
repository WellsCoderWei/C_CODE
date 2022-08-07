#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//小端
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a); //%x打印16进制   11223300
//	return 0;
//}

//计算求和 求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字  由a组成前n项之和 整数表达有上限 不考虑溢出
//例如：2+22+222+2222+22222  由2组成的前5项 由2组成的前8项        由2组成前20项之和 放不下 一个整型里最大能放的数字也就一个21亿多的正数 有符号整数最多21亿多  无符号整数最多也就是42亿多
//      24690
//int main()
//{
//	int a = 0; //数字
//	int n = 0; //第n项
//	int i = 0;
//	int Sn = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0; //一项
//	for (i = 0; i < n; i++) //循环n次 
//	{//每次进来产生1项 把n项加起来
//		//算出一项 怎么算出一项？第一项是2 第二项是22 第三项是222
//		ret = ret * 10 + a;
//		Sn += ret; //sum加上一项的值
//	}
//	printf("Sn = %d\n", Sn); //算出Sn打印
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整型一维数组
//void print(int* p,int sz) //遍历整个数组，拿指针指向第一个元素
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	return 0;
//}

//求出0~100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和正好等于该数字本身。
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数 - i的每一位的 位数次方 之和是否等于i本身
//        //1.计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//        //2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//        //3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", sizeof(int***));
//	return 0;
//}

//写一个函数 可以逆序字符串的内容
#include <assert.h>
#include <string.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
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

//递归 逆序字符串
//void reverse(char* str)
//{
//	assert(str);
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{     
//	//char* ch = "hello bit."; err 常量字符串不能改 写法错误
//	//            012345678
//	char arr[] = "hello bit."; //.tib olleh  给字符数组初始化为hello bit.
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}