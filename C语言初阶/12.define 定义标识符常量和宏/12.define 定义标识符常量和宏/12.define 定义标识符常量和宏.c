#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//define是一个预处理指令  定义符号
//#define MAX 1000 //#define 定义标识符常量 MAX 给上1000 MAX就是#define定义的符号 定义的常量
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//ADD宏要加两个数X+Y  就把X,Y两个参数传进去
//#define 定义宏
  //ADD宏名 X,Y参数
#define ADD(X,Y) ((X)+(Y))
int main()
{
	//define定义的宏是替换的
	printf("%d\n", 4 * ADD(2, 3)); //用的时候 ADD(2, 3)传进去  ADD让2+3
	return 0;
}

//#define ADD(X,Y) ((X)+(Y)) //语法
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum=%d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("ADD(2,3) = %d\n", ADD(2, 3));
//	printf("10*ADD(2,3) = %d\n", 10 * ADD(2, 3));
//
//	return 0;
//}