#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int coding = 0; //输入的值
//	printf("你会敲代码吗（选择1 or 0）？:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好offer");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯");
//	}
//	return 0;
//}

int main()
{
	int input = 0;
	printf("加入比特:>\n");
	printf("你要好好学习吗(1/0)？:>");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer");
	else
		printf("回家卖红薯");
	return 0;
}