#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//1到100的所有整数中 出现 了多少个数字9？99中有两个9 共出现20次  不是问带9的数字有多少个
//个位 9  19 29 39 49 59 69 79 89 99
//十位 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//先算个位数出现的9
//			count++;
//		if (i / 10 == 9) //再算十位数出现的9
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 .... + 1/99- 1/100的值，打印出结果
//int main()
//{
//	double sum = 0.0;
//	int flag = 1; //表示+-符号
//	for (int i = 1; i <= 100; i++) //i是分母
//	{
//		//if(i%2==0) //是偶数
//		//	sum -= 1.0 / i; //减偶数
//		//else
//		//	sum += 1.0 / i; //让分子是小数
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;//计算结果是小数 用双精度浮点型
//	int flag = 1; //表示+-符号
//	for (int i = 1; i <= 100; i++) //i是分母
//	{
//		sum += flag*1.0 / i; //分数计算的是小数 分子分母中总得有一个是小数
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}

//计算10个整数中最大值
//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	*/
//	//int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int arr[3] = { -11,-2,-3};
//	int arr[10] = { 98,2,56,13,0,43,7,8,9,89 };
//	int max = arr[0];//10个数中最大值 让max等于数组中第1个元素
//	for (int i = 1; i < 10; i++) // 让数组下标从第二个元素开始比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//计算10个整数中最大值
//int main()
//{
//	int arr[10] = { -520,-521,-1314,-666,-999,-2020,-7,-10,-33 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//1*1=1  第一行有1项
//2*1=2 2*2=4 第二行有2项
//3*1=3 3*2=6 3*3=9 第三行有3项
//......            第九行有9项
//int main()
//{
//	//行数 打印9行
//	for (int i = 1; i <= 9; i++)
//	{
//		//打印一行 有几项？
//		for (int j = 1; j <=i; j++) //打印i项
//		{
//			printf("%d*%d=%d \t", j, i,i*j); //%2d 积打印两位 不够用空格代替 右对齐空格填充。%-2d 左对齐空格填充
//		}
//		printf("\n"); //打印完一行 换行
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d \t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数游戏
//void menu()
//{
//	printf("*************************************\n");
//	printf("*************  1.play  **************\n");
//	printf("*************  0.exit  **************\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	int guess;
//	int random_num = rand() % 100 + 1;
//	while (1) //用死循环来猜
//	{
//		printf("请猜一个1-100的数：>");
//		scanf("%d", &guess);
//		if (guess > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//在一个整型有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//二分查找/拆半查找
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
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
//	}	
//	return -1; //不能return0 下标是从0开始的
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int key = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz); //arr不用&是因为数组名就是地址
//	if (-1 == ret)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret); 
//	}
//	
//	/*printf("%d\n", binary_search(arr, key, sz));*/
//}

//无返回类型 无返回值
//void test()
//{
//	{ //成对大括号构成一个代码块
//		int a = 10;
//	}
//	printf("%d", a); //err
//}
//
//int main()
//{
//	test(); //假设写一个函数test不返回
//	return 0;
//}

//实现一个函数，判断一个数是不是素数
//利用上面实现的函数 打印100-200之间的素数
//int is_prime(int x)
//{
//	int flag = 1;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int count = 0;
//	for (int num = 101; num < 200; num += 2)
//	{
//		if (is_prime(num) == 1)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}