#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//�ж�100-200�����ǲ�������
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

//�ж�1000-2022���ǲ�������
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

//ʵ��һ��������������Ķ��ֲ���
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
//	} while (left <= right); //˵�������±��м�����Ԫ�ص� ���Ա�����
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,key,sz); //��arr�����sz��Ԫ�����ҵ�key
//	if (-1 == ret)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	return 0;
//}

//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]); //64λ ����ռ4�ֽ�
//          // ��������Ԫ���׵�ַ int *arr   64λ ָ��ռ8�ֽ�
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
//	} while (left <= right); //˵�������±��м�����Ԫ�ص� ���Ա�����
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int ret = binary_search(arr, key); //��arr�����sz��Ԫ�����ҵ�key
//	if (-1 == ret)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	return 0;
//}