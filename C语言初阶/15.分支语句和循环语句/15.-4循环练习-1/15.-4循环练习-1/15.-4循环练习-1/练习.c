#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//演示多个字符从两端移动,向中间汇聚。 while循环
//int main()
//{
//	char arr1[] = "生活就像海洋，只有意志坚强的人才能到彼岸。";
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

//演示多个字符从两端移动,向中间汇聚。 for循环
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

//演示多个字符从两端移动,向中间汇聚。 do-while循环
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

//模拟用户登录情景, 并且只能登录三次。
//(只允许输入三次密码, 如果密码正确则提示登录成功, 如果三次均输入错误, 则退出程序。
//int main()
//{
//	int i = 0;
//	char psw[10] = ""; //假设输入的密码为 password
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

//实现一个二分查找函数
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
//			return mid; //找到了，返回下标
//			break;
//		}
//	}
//	return -1; //没找到
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

//实现一个猜数游戏
//1.玩完一把还可以玩
//2.生成1-100之间的随机数
//3.猜数字 猜大 猜小
void menu()
{
	printf("************************************\n");
	printf("***************  1.play  ***********\n");
	printf("***************  0.exit  ***********\n");
	printf("************************************\n");
}

void game()
{
	//1.生成随机数
	int random_num = rand() % 100 + 1;

	//2.猜数字
	int guess = 0;
	while (1) //死循环来猜数
	{
		printf("请猜一个1-100的数:>");
		scanf("%d", &guess);
		if (guess < random_num)
		{
			printf("猜小了\n");
		}
		else if (guess > random_num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //设置一次随机数生成起点
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);

	return 0;
}