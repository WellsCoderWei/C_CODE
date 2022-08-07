#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//
//	char arr1[20] = { 0 };	//假设有20个元素初始化为0
//	char arr2[20] = "abc";
//	strcpy(arr1, arr2);
//	printf("arr1 = %s\narr2 = %s\n", arr1, arr2);
//	return 0;
//}

//写一个函数可以找出两个整数的最大值
//get_max函数的设计
//int get_max(int x, int y)
//{	
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	//scanf("%d%d", &a, &b);
//	/*int max = get_max(5+2, 3);*/ //get_max 求出a和b的较大值就应该把较大值返回来 放到max里面去
//	int max = get_max(2 + 5, get_max(4, 7));
//	printf("max = %d\n",max);
//	return 0;
//}

//写一个函数交换两个整型变量的内容
// 传值调用
// swap在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
// 改变形参，影响不了实参
//void swap(int x, int y) //此函数无效 调用swap1函数时 为x y创建了两个独立的空间
//{
//	int z = 0; //x y z 空间相互交换值时， a b压根不会受到影响
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10; //在内存中开辟了a空间
//	int b = 20; //b空间
//	swap(a, b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

// //写一个函数交换两个整型变量的内容
//void swap(int* pa, int* pb) //创建两个指针变量 指针变量的大小也是固定的8个字节 pa pb也开辟了内存空间 但里面放的是a b的地址
//{
//	// *pa = a
//	// *pb = b
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
////void swap(int* pa, int* pb) swap函数内部 与 swap(&a,&b) swap函数调用 相匹配
//int main()
//{
//	int a = 10; //在内存中开辟了a空间
//	int b = 20; //b空间
//	printf("交换前：a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	//int* pa = &a; //取a的地址存放到指针变量pa里头去
//	//int* pb = &b; //取b的地址存放到指针变量pb里头去
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10; //相当于在内存中开辟了4个字节的空间
//	int *pa = &a; //4个字节有地址 &a取地址a 取出a的地址 存起来 放到变量里头去 pa类型就是int* pa就是一个指针变量
//	//把a这块空间的地址 交代给了pa变量 
//	//pa这个指针变量里面存放的是a的地址
//	*pa=20; //要找到a   pa的前面加个* 通过pa里存的地址 找到 要找的对象 *pa就是a
//	printf("%d", a);
//	return 0;
//}

//写一个函数比较三个整数大小
//int get_max(int x, int y, int z)
//{
//	int t = (x > y) ? (x) : (y);
//	int ret = (t > z) ? (t) : (z);
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = get_max(a, b, c);
//	printf("max = %d", max);
//	return 0;
//}