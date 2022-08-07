#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//判断100-200的数是不是素数
//int is_prime(int x)
//{
//		int flag = 1;
//		for (int i = 2; i <= sqrt(x); i++)
//		{
//			if (x % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		return flag;
//}
//
//int main()
//{
//	int count = 0;
//	for (int num = 101; num < 200; num+=2)
//	{
//		if (is_prime(num) == 1)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//判断1000-2022年是不是闰年
//int is_leap_year(int x)
//{
//	return ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0);
//}
//
//int main()
//{
//	int count = 0;
//	for (int y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//实现一个整型有序数组的二分查找
//int binary_search(int a[], int k, int s )
//{
//	int left = 0;
//	int right = s - 1;
//	do
//	{
//		int mid = (left + right) >> 1;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	} while (left <= right); //说明左右下标中间是有元素的 可以被查找
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz); //在arr数组的sz个元素中找到key
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}

//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]); //64位 变量占4字节
//          // 传的是首元素首地址 int *arr   64位 指针占8字节
//	int left = 0;
//	int right = sz - 1;
//	do
//	{
//		int mid = (left + right) >> 1;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	} while (left <= right); //说明左右下标中间是有元素的 可以被查找
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int ret = binary_search(arr, key); //在arr数组的sz个元素中找到key
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}