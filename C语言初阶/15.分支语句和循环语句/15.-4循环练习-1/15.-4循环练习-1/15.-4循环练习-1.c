#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//演示多个字符从两端移动,向中间汇聚。
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); // 睡眠/休眠1秒 多行 动态效果 打印后停留一下看到效果 Sleep函数 单位是毫秒 1000毫秒=1秒
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//模拟用户登录情景, 并且只能登录三次。
//(只允许输入三次密码, 如果密码正确则提示登录成功, 如果三次均输入错误, 则退出程序。
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	//假设正确密码是123456
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) //如果这两个字符串相等，strcmp返回值就会返回0。返回值0等于0 说明密码输入正确
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	if (i == 3) //登录成功提前就登录成功了，登录成功时是i不可能等于3，因为i是<3时跳出来。如果3次都没有登录成功，跳出循环时i是等于3
//	{
//		   printf("3次密码均错误，退出程序。\n");
//
//	}
//	return 0;
//}

//模拟用户登录情景, 并且只能登录三次。
//(只允许输入三次密码, 如果密码正确则提示登录成功, 如果三次均输入错误, 则退出程序。
//int main()
//{
//	int i = 0;
//	char psw[10] = ""; //password
//
//	for (i = 0; i < 3; ++i)
//	{
//		printf("please input:");
//		scanf("%s", psw);
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

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password); //输入一个字符串作为密码，输入字符串密码得存起来 假设输入的密码是123456 abcdef
//	printf("请确认密码(Y/N):>\n");
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//折半查找（二分查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7; //要查找的数字
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	if (left <= right)
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}

//实现一个二分查找函数
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) >> 1;
//		if(arr[mid]<key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid; //找到了，返回下标
//	}
//	return -1; //找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", bin_search(arr, left, right, key));
//	return 0;
//}

//写一个猜数字游戏
//1.这个游戏会自动产生一个1-100之间的随机数
//2.猜数字 
//  a.如果在猜的过程中 猜对了，就恭喜你，游戏结束
//  b.如果在猜的过程中 猜错了，会告诉你猜大了，还是猜小了,再继续猜，直到猜对为止
//3.游戏可以一直玩，除非退出游戏

// 1.希望这个游戏玩完一把不过瘾，再来一把；
// 2.而且一开始就能玩游戏，所以采用do - while结构，do - while结构上来就能玩游戏，玩完一把之后再来判断要不要进入下一把；
// 3.do - while结构，
//   游戏一上来先打印个菜单 用menu函数打印
//   menu();  menu函数不是库函数，要自己实现
// 4.有个一个菜单:1要玩游戏
//                0退出游戏
//   玩的时候printf提示一下(“请选择 : > ”);
//   printf完要scanf选择
//   这个时候可能选了1，也可能选了0，当然也有可能选了不是1不是0，
//   这个地方要判断一下 使用switch语句(input) 根据input的值做出判断
//                         ｛
//                            case如果选择是1 :
//                            break;              
//                          ｝

//void menu() //实际上函数没有参数 无所谓直接调用
//{
//	printf("*********************************\n");
//	printf("***********  1.play    **********\n");
//	printf("***********  0.exit    **********\n");
//	printf("*********************************\n");
//}
////TDD-测试驱动开发
////RAND_MAX--rand函数 能返回随机数的最大值。
//void game() //把游戏逻辑封装的game函数里
//{
//	//猜数字游戏的实现
//	//1.先 生成随机数 没有随机数怎么猜 生成随机数有一个库函数 rand函数：生成一个随机数
//	//srand((unsigned int)time(NULL));
//	/*int random_num = rand();*/ //random_num 随机数  这才能生成随机数
//	// RAND_MAX rand函数返回了一个0-32767之间的数字，但是这个数字不够随机 
//	//原因：srand确实要在rand之前被调用，但是随机数起点的设置 srand只用调用一次就可以了
//	        //如果srand放在game();函数，随机数生成起点 玩一次游戏设置一次，玩一次游戏设置一次 不合适。
//	       //整个工程里 只用把随机数的生成起点设置一次就可以了，放在rand之前 但不要放在game函数这，把srand放在main主函数里
//
//	int random_num = rand() % 100 + 1;
//	//printf("%d\n", random_num); 一定是外边生成随机数，再去循环里猜
//
//	//2.猜数字
//	int guess = 0;
//	while (1)//死循环来猜
//	{
//		//如果把随机数放到循环里，每次猜的数都是随机数，猜一次 数变了，永远也猜不对，除非一次就猜对
//		printf("请猜1-100之间数字:>");
//		scanf("%d", &guess); //猜一个数字存起来
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
//	
//}
//
//int main()
//{
//	int input = 0;
//	//rand正在想办法生成一个随机数，srand也需要一个随机数 srand需要传进去一个正在发生变化的值 电脑的时间-时间戳 - 一个时间转换成一个数字
//	srand((unsigned int)time(NULL)); //srand数字发生变化时，random_num 随机数也在发生变化  这需要变的数在变
//		  //获取时间戳用time函数 这个库函数会返回一个时间戳，返回的时间戳是调用这个函数的时间点和计算机的起始时间之间的时间戳
//			  //time函数本来是有一个参数的，不想用这个参数，给time函数传/扔一个空指针NULL
//			  //time_t//time函数类型是整型 强制转换成unsigned int类型
//	//main函数一进来 srand就把起点一设置，下面不管怎么玩游戏 反正随机数生成的起始点只设置一次就可以了，此时的随机数就足够随机了
//	do
//	{
//		menu(); //屏幕打印菜单 
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: //选了1玩游戏
//			game(); //猜数字封装到一个简易的函数里
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default: //如果选了其他值 不是1 不是0 走default
//			printf("选择错误，重新选择\n");
//			break;
//		}
//		//不管走了哪一个 Switch-case走完以后是do-while while判断
//		//0.当选input是0，退出游戏  退出游戏，input是0 退出0以后break跳出去 跳出的此时是Switch语句。
//		// 来到while（）循环判断，因为退出游戏肯定不需要循环了。
//		//1.如果选的是1，猜数字 猜完之后break跳出来到这，input是1 又可以选择一次
//		//5.如果选的是5，走的default 打印选择错误，如果拿input的来判断 input是5时为真 再来一次
//	} while (input); //while （input）往着一放逻辑合适 input如果选的是0，退出游戏一打印，这就是0，0为假就不继续了
//
//
//	return 0;
//}