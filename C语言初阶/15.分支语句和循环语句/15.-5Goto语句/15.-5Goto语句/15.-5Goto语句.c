#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int count = 0;
//	for (int i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;//flag==1 标记i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//    flag:
//	printf("haha\n");
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就会在1分钟内关机，如果输入：永久反弹，就取消关机
//int main()
//{
//	//c语言 关机 要写一个命令
//	//system()函数 - 执行系统命令 
//	char input[20] = { 0 }; //字符数组可以放20个字符 存放输入的信息
//	system("shutdown -s -t 60"); // 执行命令关机
//	//已经开始关机了，所以就没必要再关机了 system("shutdown -s -t 60"); 跳过不进去
//
//again:
//	printf("请注意,你的电脑在1分钟内关机，如果输入：永久反弹，就取消关机\n"); //提示
//	scanf("%s", input);  //数组名本来就是地址，所以这不用再取地址。如果scanf()这是变量就要取地址
//	if (strcmp(input, "永久反弹") == 0)
//	{
//		system("shutdown -a"); //取消关机
//	}
//	else
//	{
//		goto again;
//	}

	//while (1)
	//{
	//	printf("请注意,你的电脑在1分钟内关机，如果输入：永久反弹，就取消关机\n"); //提示
	//	scanf("%s", input);  //数组名本来就是地址，所以这不用再取地址。如果scanf()这是变量就要取地址
	//	if (strcmp(input, "永久反弹") == 0)
	//	{
	//		system("shutdown -a"); //取消关机
	//		break;
	//	}
	//}

	//do
	//{
	//	printf("请注意,你的电脑在1分钟内关机，如果输入：永久反弹，就取消关机\n"); //提示
	//	scanf("%s", input);  //数组名本来就是地址，所以这不用再取地址。如果scanf()这是变量就要取地址
	//	if (strcmp(input, "永久反弹") == 0)
	//	{
	//		system("shutdown -a"); //取消关机
	//		break;
	//	}

	//} while (1);

	//for (;;) 
	//{
	//	printf("请注意,你的电脑在1分钟内关机，如果输入：永久反弹，就取消关机\n"); //提示
	//	scanf("%s", input);  //数组名本来就是地址，所以这不用再取地址。如果scanf()这是变量就要取地址
	//	if (strcmp(input, "永久反弹") == 0)
	//	{
	//		system("shutdown -a"); //取消关机
	//		break;
	//	}
	//}
		
//	return 0;
//}

//goto语句只能在一个函数范围内跳转，不能跨函数
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}