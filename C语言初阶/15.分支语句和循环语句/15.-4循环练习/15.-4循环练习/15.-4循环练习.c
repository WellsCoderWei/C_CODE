#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//n!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d! = %d", n, ret);
//
//	return 0;
//}

//1!+2!+3!+...+10!
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("10! = %d", sum);
//
//	return 0;
//}

//���ֲ��� ��һ�����������в��Ҿ����ĳ������k��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7; //Ҫ�ҵ�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}
	return 0;
}
