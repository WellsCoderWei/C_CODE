#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//��ʾ����ַ��������ƶ�,���м��ۡ� whileѭ��
//int main()
//{
//	char arr1[] = "���������ֻ����־��ǿ���˲��ܵ��˰���";
//	char arr2[] = "##########################################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//}

//��ʾ����ַ��������ƶ�,���м��ۡ� forѭ��
//int main()
//{
//	char src[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left;
//	int right;
//
//	for (left = 0, right = strlen(src) - 1; left <= right; left++, right--)
//	{
//		Sleep(1000);
//		system("cls");
//		arr2[left] = src[left];
//		arr2[right] = src[right];
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//}

//��ʾ����ַ��������ƶ�,���м��ۡ� do-whileѭ��
//int main()
//{
//	char src[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(src) - 1;
//
//	do
//	{
//		Sleep(1000);
//		system("cls");
//		arr2[left] = src[left];
//		arr2[right] = src[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	} while (left<=right);
//
//	return 0;
//}

//ģ���û���¼�龰, ����ֻ�ܵ�¼���Ρ�
//(ֻ����������������, ���������ȷ����ʾ��¼�ɹ�, ������ξ��������, ���˳�����
//int main()
//{
//	int i = 0;
//	char psw[10] = ""; //�������������Ϊ password
//
//	for (i = 0; i < 3; ++i)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//
//		if (strcmp(psw, "password") == 0)
//			break;
//		else
//			printf("password error,re-enter\n");
//	}
//
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//
//	return 0;
//}

//ʵ��һ�����ֲ��Һ���
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) >> 1;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid; //�ҵ��ˣ������±�
//			break;
//		}
//	}
//	return -1; //û�ҵ�
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 6;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("%d", bin_search(arr, left, right, key));
//	return 0;
//}

//ʵ��һ��������Ϸ
//1.����һ�ѻ�������
//2.����1-100֮��������
//3.������ �´� ��С
void menu()
{
	printf("************************************\n");
	printf("***************  1.play  ***********\n");
	printf("***************  0.exit  ***********\n");
	printf("************************************\n");
}

void game()
{
	//1.���������
	int random_num = rand() % 100 + 1;

	//2.������
	int guess = 0;
	while (1) //��ѭ��������
	{
		printf("���һ��1-100����:>");
		scanf("%d", &guess);
		if (guess < random_num)
		{
			printf("��С��\n");
		}
		else if (guess > random_num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //����һ��������������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);

	return 0;
}