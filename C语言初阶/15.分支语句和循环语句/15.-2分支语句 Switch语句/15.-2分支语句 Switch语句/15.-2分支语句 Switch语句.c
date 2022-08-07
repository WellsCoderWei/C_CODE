#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入1，输出星期一
//......
//输入7，输出星期天
//int main()
//{
//	int day = 0; //day可以输入
//	scanf("%d", &day);
//
//	switch (day) //day是几 就会进到case几
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	}
//
//	return 0;
//}

//输入1-5 输出工作日
//输入6-7 输出休息日
//int main()
//{
//	int day = 0; //day可以输入
//	scanf("%d", &day);
//
//	switch (day) //day是几 就会进到case几
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
	//while (1) //死循环
	//{
	//	printf("hehe\n");
	//}

	//打印1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	//	while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}