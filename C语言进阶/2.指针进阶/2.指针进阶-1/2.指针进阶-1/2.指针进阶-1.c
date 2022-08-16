#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	*pFloat = 9.0;
//	printf("%d\n", n);
//
//	float f = 9.0f;
//	printf("%f\n", f);
//	int* pInt = (int*)&f;
//	printf("%d\n", *pInt); //以整型视角打印浮点数
//	return 0;
//}


//数组指针 - 存放数字的指针
//int main()
//{
//	int a = 10;
//	int* pa = &a; //整型指针 - 指向整型的指针
//
//	char ch = 'w';
//	char* pc = &ch; //字符指针 - 存放字符的指针
//
//	//指针数组 - 存放指针的数组 
//	/*int a[5] = {1,2,3,4,5};
//	int b[5] = { 2,3,4,5,6 };
//	int c[5] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	int arr[10] = { 1,2,3,4,5 };
//	//arr 数组名 取出的是数组首元素的地址 - arr[0]的地址
//	//&arr 取地址数组名 取出的是数组的地址
//	//int* parr = &arr; err   这样写int *parr是个整型指针，指向整型地址    而&arr是数组地址
//	//int* parr[10]=&arr; err 这样写int *parr[10]是整型指针数组  整个数组地址不能放在数组里
//	//     parr首先和[]结合 parr就是数组了 数组元素10个 数组每个元素是int* 整型指针 而不是地址
//	int(*parr)[10] = &arr;
//	//让*和parr首先结合 说明parr一定是个指针 指针有指向 [10]说明指向的是整型数组 数组有10个元素 数组每个元素类型是int
//	//parr是(数组)指针名字 - 其中存放的是数组的地址   int(*)[10]是数组指针的类型   整个数组地址应该放在数组指针里
//
//	double* d[5];
//	double* (*pd)[5] = &d; //让*首先和pd结合 说明pd一定是个指针 pd指针指向的指针数组有5个元素，每个元素的类型是double*
//	/*printf("%d ",(*parr)[10]);*/
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int* p1 = arr; //p1整型指针
//	int(*p2)[10] = &arr; //p2数组指针，存放的是数组的地址
//	printf("%p\n", p1); //0099FB10
//	printf("%p\n", p1 + 1); //跳过4个字节 跳过一个元素 指向下一个元素  0099FB14
//
//	printf("%p\n", p2); //0099FB10
//	printf("%p\n", p2 + 1); //跳过40个字节 跳过整个数组                0099FB38
//	//                             28   2*(16^1)+8*(16^0)    32+8=40  
//	return 0; 
//}

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	int(*pa)[10] = &arr;
//	//*pa==arr  对指向整个数组的指针解引用，拿到了整个数组相当于拿到了数组名  pa解引用等于数组名arr 
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}

//通常数组指针应用到二维数组以上
//          用数组接收
//void print1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]); //arr[i][j]数组的某个元素
//		}
//		printf("\n"); //数组通过行和列来访问数组的每一个元素 打印完一行（一行有几列）换行
//	}
//}

//二维数组数组名是首元素的地址 也就是第一行一维数组的地址
//这样的数组指针就能指向一行 p是个指向一维数组的数组指针 数组有5个元素 每个元素类型是int
                        //r是行   c是列
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j)); //p+i 相当于找到第i行地址  指向某一行
//			                               //*(p+i) 解引用找到第i行数组名 数组名arr[0]相当于首元素地址   相当于某一行 第一个元素的地址
//				                          //*(*(p+i)+j)    *(p+i)找到了这一行第一个元素的地址 再+j找到这一行下标为j元素的地址
//				                         //*()圆括号括起来解引用 找到的就是第i行下标为j的元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int arr[5] 5个元素 每个元素int  相当于拿到&arr放到指针里
//	//                 arr[0]      arr[1]      arr[2]
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//    // 用数组传参
//	/*print1(arr,3,5);*/ //二维数组要把行和列传过去才能知道几行几列
//	print2(arr, 3, 5); //arr二维数组  数组名表示数组首元素(第一行)的地址 
//	                 //二维数组的首元素是：第一行! 二维数组第一行是5个整型一维数组的地址
//	return 0;
//}

//int arr[5]; 整型数组 每个元素int
//int* parr1[10]; 整型指针数组 []结合首先是个数组 数组有10个元素 每个元素类型是int*
//int(*parr2)[10]; 数组指针 - 该指针能够指向一个数组，数组10个元素，每个元素类型是int

//int(*parr3[10])[5]; parr3首先和[]结合 parr3首先是数组，数组有10个元素，数组的元素类型是int(*)[5] 指针能有指向的数组 数组有5个元素 每个元素是int
//int (*)[5]数组指针也是一种指针 把它存到parr3[10]数组里 数组有10个元素 数组里的每个元素是数组指针 
//parr3是一个存储数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型

//一维数组传参
//void test(int arr[10])
//{}
//void test(int *arr) //整型的地址 就应该放到整型指针里
//{}
//
//void test(int* arr2[]) //本来是指针数组 形参写成指针数组 数组传参，数组接收 是什么数组写什么数组
//{}
//void test(int **arr2) //指针数组 取了一个一级指针的地址就是二级指针
//{}
//int main()
//{
//    int arr[10] = { 0 };
//    test(arr);
//
//    int* arr2[20] = { 0 }; //arr2是整型指针数组 - arr2是存放整型指针int*的数组  20个元素 每个元素的内容是int*  
//    test2(arr2); //int* int* int*
//    return 0;
//}

//二维数组传参
void test(int arr[3][5])
{}
void test(int arr[][5])
{}


//传二维数组名时 传过去是一个指针时 那这个指针一定是指向一维数组的指针
void test(int(*arr)[5]) //(*arr) 说明是个指针 指向一个数组 数组有5个元素 每个元素是int
{}//说明指针能够指向一个5个整型元素的数组   这个指针能够指向那个数组中5个元素，每个元素是int
int main()
{
    int arr[3][5] = { 0 };
    test(arr);
    return 0;
}

void test(int *arr)//err 数组名表示首元素的地址  二维数组传参 应该指的是第一行的地址  一维数组的地址
{}       
                                                              //第一行是5个整型的数组  是数组的地址  不能拿一级指针接收
void test(int* arr[5]) //err 这样写参数部分是数组 不是指针；   如果写成数组形式是3行5列的二维数组，不是指针数组
{}//这样写不是指针，也不是二维数组

void test(int** arr) //err 不能写成二级指针 因传过去的压根不是二级指针。如果能这样写int** arr 说明传过去的就是二级指针
{}//不是二级指针，而是第一行一维数组的地址 不匹配
void test(int*** arr){}