#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ð������ ����Ϊ����
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ������
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//һ��ð���������
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };*/
//	//int arr[] = { 9,7,8,6,3,4,5,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void init(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n"); //��ӡ�껻�У�ÿ�ε���print�������ڲ�ͬ������
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//void reverse(int* arr, int sz)
//{
//	for (int i = 0; i < sz/2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	init(arr, sz);
//	print(arr,sz);
//
//	return 0;
//}

//������A�е�����������B�е����ݽ��н�������������һ����
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 }; 
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	
	return 0;
}