#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Stu
//{
//	char name[5];
//	int age;
//	char sex[3];
//	char id[11];
//	double score;
//};
//
//int main()
//{
//	struct Stu s = { "张三",18,"男","2022111209",99.9 }; //结构体的创建和初始化 
// 打印结构体信息                                         //.为结构成员访问操作符
//	printf("1: name=%s age=%d sex=%s id=%s score=%.2lf\n", s.name, s.age, s.sex, s.id, s.score);
//	struct Stu* ps = &s;
//	// -> 操作符
//	printf("2: name=%s age=%d sex=%s id=%s score=%.2lf\n", ps->name, ps->age, ps->sex, ps->id, ps->score);
//	printf("3: name=%s age=%d sex=%s id=%s score=%.2lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id, (*ps).score);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	float price; //书的定价
//	char id[30]; //书号
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
////用类型创建出一个个变量  
//int main()
//{
//	//创建一个学生
//	struct Stu s = { "张三", 20 , 85.5 }; //大括号初始化
//	printf("1.%s %d %lf\n", s.name, s.age, s.score); //结构体变量.成员变量 就可以找到它的成员 结构体的基本访问. ->
//
//	struct Stu* ps = &s;
//	printf("2.%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3.%s %d %lf\n", ps->name, ps->age, ps->score);
//	                   //ps指针 指向 对象的名字
//	return 0;
//}

#include <string.h>
//int main()
//{
//	//arr数组没有指定大小
//	//char arr[] = { 'b','i','t','\0' }; //但是arr数组只初始化了3个字符，所以arr数组空间只有3个元素。 把bit放到arr数组里边 arr数组有3个元素
//	////strlen求字符长度时 ""字符串结尾会默认补上\0
//	////    但求 单个字符 组成的字符串长度时 一定要添加字符串零终止符'\0'才结束, 没有字符串终止符零'\0'  计算出来的字符串长度将会是随机值
//	//printf("%d\n", strlen(arr));
//
//	//printf("%d", '\060');
//	//int n = 10;
//	//int arr[10] = { 0 };
//
//	/*int a = 10;
//	int b = 20;
//	printf("%d\n", a > b ? a : b);*/
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	int max = 0;
//	if (x > y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}

int main()
{
	int m = 0;
	scanf("%d", &m); //把值取进来放到m里去
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}