#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//printf("hehe\n");
//	//3 + 5;
//	//; //空语句
//
//	//int age = 10;
//	//if (age >= 18)
//	//{
//	//	printf("成年\n");
//	//}
//	//else
//	//{
//	//	printf("未成年\n");
//	//	printf("不能谈恋爱\n");
//	//}
//
//	//int age = 170;
//	//if (age < 18)
//	//	printf("少年\n");
//	//else if (age >= 18 && age < 40) //else if 如果其他情况下  age>=18 && age<26 这样写逻辑更顺一些
//	//	printf("青年\n");
//	//else if (age >= 40 && age < 48)
//	//	printf("壮年\n");
//	//else if (age >= 48 && age < 65)
//	//	printf("中年\n");
//	//else if (age >= 65 && age < 100)
//	//	printf("老年\n");
//	//else //不是必须有
//
//	int age = 39;
//	if (age < 18)
//		printf("少年\n");
//	else if (age < 40) //else if 如果其他情况下  age>=18 && age<26 这样写逻辑更顺一些
//		printf("青年\n");
//	else if (age < 48)
//		printf("壮年\n");
//	else if (age < 65)
//		printf("中年\n");
//	else if (age < 100)
//		printf("老年\n");
//	//else //不是必须有
//
//
//	return 0; //C语言中由一个分号；隔开的就是一条语句  这就是一条语句
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//	{
//		if (b == 0)
//		{
//			printf("hehe\n");
//		}
//	}
//	else //悬空else  else跟最近的if匹配
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//if书写形式对比
//int test()
//{
//	if (0) //1为真 条件满足返回0  0为假 条件不满足返回1
//		return 0;
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (5 = num) //左操作数必须为左值 左边的操作数压根不能被改 常量是不能修改的 只写等号无法编译
//	if (5 == num) //当两个整型变量进行比较时，把常量放在左边 效果更好
//		printf("hehe\n");
//
//	return 0;
//}

//判断一个数是否为奇数  输出1-100之间的奇数
int main()
{
	/*int num = 1;

	while (num <= 100)
	{
		if (num % 2 == 1)
		{
			printf("%d ", num);
		}
		num++;
	}*/

	//for (int num = 1; num <= 100; num++)
	//{
	//	if (num % 2 == 1)
	//		printf("%d ", num);
	//}

	for (int num = 1; num <= 100; num += 2)
	{
		printf("%d ", num);
	}

	return 0;
}