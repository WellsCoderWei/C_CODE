#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*char arr4[3] = { 'a',98,'c' };*/
//	/*for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr4[i]);
//	}*/
//	//char arr5[5] = { 'a','b','c'};
//	/*printf("%d", sizeof(arr5) / sizeof(arr5[0]));*/
//	//char ch3[5] = "bit"; //5个字符 'b','i','t','\0','\0'
//	//char ch4[] = "bit"; //4个字符  'b','i','t','\0'  根据初始化内容确定数组元素个数
//
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	/*printf("%x\n", 0x12);
//	printf("%p\n", 0x12);*/
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]); //%p按地址格式 十六进制打印
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr; //数组名是数组首元素的地址 1是整型 放到整型指针p里  p指向首元素地址
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//
//	/*int arr[3][4] = { {1,2},{3,4},{5,6} };*/
//	/*int arr[3][4] = { 1,2,3,4 };*/
//	//int arr[3][4] = { {1,2},{4,5}};
//	int arr[][4] = { {2,3},{4,5}}; //4列两行
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}*/
//	printf("%d", arr[1][2]);
//	return 0;
//}

//int main()
//{
//	int arr[3][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] = i * 10 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1, 2},{3,4},{5,6} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int* p = &arr[0][0]; //第一行第一个元素地址拿出来 整型元素地址放到整型指针
//    //因为二维数组是连续存放 把12个元素拿出来
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };
//	int* p = &arr; //第一行第一个元素地址拿出来 整型元素地址放到整型指针
//    //因为二维数组是连续存放 把12个元素拿出来
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++; //让指针移动下一个整型
//	}
//	return 0;
//}

//冒泡排序函数 将一个整型数组排序
void bubble_sort(int arr[],int sz) //参数接受数组元素个数
{
	
	//确定趟数  10个数字 9趟 一趟搞定一个。 sz=10 0-9 10趟  sz-1=9 0-8 9趟
	for (int i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程  一趟9对要比较 两趟8对要比较
		int flag = 1; //一趟冒泡排序之前让flag=1
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{  //交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //一旦发生交换让flag=0
			}
		}
		if (flag == 1) //如果第一趟循环走完没有发生交换，说明这一趟冒泡排序已经是有序的了
		{
			break; //跳出去 不要进行后面的冒泡排序了
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序 - 冒泡排序
	/*int arr[] = { 0,1,2,3,4,5,6,7,8,9 };*/
	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组元素个数
	bubble_sort(arr,sz); //数组传参时，传递的其实是数组首元素的地址
	for (int i = 0; i < sz; i++) //遍历打印数组每个元素
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//int sz = sizeof(arr); //数组表示整个数组
//	//printf("sz = %d\n", sz);
//
//	printf("&arr = %p\n", &arr); //&arr取的是数组的地址
//	printf("&arr+1 = %p\n", &arr+1); //&arr取的是数组的地址
//
//	printf("arr = %p\n", arr); //数组名本身就是 数组首元素地址
//	printf("arr+1 = %p\n", arr+1); //数组名本身就是 数组首元素地址
//	//printf("&arr[0] = %p\n", &arr[0]); //首元素地址
//	
//	//printf("*arr = %d\n", *arr); //*arr是1个字节
//	return 0;
//}
