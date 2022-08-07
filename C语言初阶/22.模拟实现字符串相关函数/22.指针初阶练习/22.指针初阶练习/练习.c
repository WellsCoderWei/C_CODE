#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算求和 求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字  由a组成前n项之和 整数表达有上限 不考虑溢出
//例如：2+22+222+2222+22222  由2组成的前5项 由2组成的前8项        由2组成前20项之和 放不下 一个整型里最大能放的数字也就一个21亿多的正数 有符号整数最多21亿多  无符号整数最多也就是42亿多
//      24690

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int Sn = 0;
//	int ret = 0; //一项
//	scanf("%d %d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		Sn += ret;
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}