#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//冒泡排序
//void Bubble_sort(int* ptr, int sz)
//{
//	//确定冒泡排序趟数   10个元素9趟
//	int i = 0; //0~8 9趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序    一趟进行怎样的冒泡排序 10个元素交换9对   10个元素中间空9个
//		int j = 0; //0~8 9对   
//		for (j = 0; j <sz-1- i; j++)
//		{
//			if (*(ptr + j) > *(ptr + j + 1))
//			{
//				int tmp = *(ptr + j);
//				*(ptr + j) = *(ptr + j + 1);
//				*(ptr + j + 1) = tmp;
//			}
//		}
//	}
//}
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	           //数组名是数组首元素地址，整型地址 拿一级指针接收
//	Bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//冒泡排序
//pointer to the first object of the array to be sorted,converted to a void*
//指向要排序的数组的第一个对象的指针，转换为void*
//指针指向被排序的数组里，第一个对象

//         void* 无具体类型的指针，任意类型的地址都可以放到base里
//void qsort(void* base, //base待排序数据的起始位置    存放的是，待排序数据中第一个对象/元素的地址  void* base不知道一个元素有多大   int* base整型  *base解引用可以访问4个字节
//	size_t num, //num排序数据的 元素个数
//	size_t size, //size一个元素有多大 空间，一个元素有几个字节？  排序数据中一个元素的大小，单位是字节
//	int (*cmp)(const void* e1, const void* e2));  //cmp函数指针 代表所指向函数用来干什么？ 用来比较待排序数据中两个函数
//                     e1、e2形参名没什么意义       cmp指向的函数 用来比较这组数据里边 两个元素的比较函数的地址
//                     e1、e2里存一个元素
//                     e1存的是要比较的第一个元素的地址
//                     e2存的是要比较的第二个元素的地址
//                    const void* 传什么地址都可以接收
//返回整型 返回如果>0 说明第一个元素比第二个元素大
//         返回如果=0 说明第一个元素等于第二个元素
//         返回如果<0 说明第一个元素比第二个元素小

//#include <stdlib.h>
//#include <string.h>
//int cmp_int(const void* e1, const void* e2) //无类型的指针 解引用不知道访问几个字节
//{
//	//提供两个整型比较的方法   e1、e2指向整型  比较e1、e2指向整型的大小
//	return *(int*)e1 - *(int*)e2;  //如果e1指向的元素 大于 e2指向的元素 返回大于0的数字
////e1放的是整型元素的地址，
////强制类型转换为int* 就变成整型指针
////整型指针解引用 就向后访问了4个字节
//
//	//降序
//	//return *(int*)e2 - *(int*)e1;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////整型数据排序
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//整型arr地址 sz元素个数
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int); //两个元素比较方法
//	//      1.不知道传什么类型的地址
//	// 	          2.不知道排序多少个元素，把元素个数传过去
//	//                3.不知道类型，要知道访问一个元素有多大？一个元素4个字节
//	//                  即使不知道起始位置放的元素类型是什么，依然可以知道一个元素有多大,该如何跳过这个元素
//	//                                 4.进行排序 必然要进行两个元素的比较
//		//打印
//	print_arr(arr, sz);
//}
//
////学生类型
//struct Stu
//{
//	char name[20];
//	int age;
//};
////使用qsort函数排序结构体数据
//int sort_by_age(const void* e1, const void* e2)
//{           //升序
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;   //如果第一个年龄大于第二个年龄，返回>0的数字
////           struct Stu* 结构体指针
////         ((struct Stu*)e1)整体转换为结构体指针的结果
//	//降序
//	//return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;
//}
//int sort_by_name(const void* e1, const void* e2)
//{
//	//升序
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	
//	//两个字符串比较 对应位置比较ASCII码值
//	// abc  
//	// adc
//	
//	//降序
//	//return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e1)->name);
//}
//void print(struct Stu s[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d ", s[i].name,s[i].age);
//	}
//	printf("\n");
//}
//void test2()
//{
//	//结构体数组
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}}; //初始化3个元素
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄排序
//	/*qsort(s, sz, sizeof(s[0]), sort_by_age);*/
//	//按名字排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//	//打印结构体数组
//	print(s, sz);
//}
//
//void swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++) //有多少宽度就交换多少对
//	{
//		//char tmp = *buf1;
//		//*buf1 = *buf2;
//		//*buf2 = tmp;
//		//buf1++; //走一步跳过一个字节
//		//buf2++;
//
//		char tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
//
////模仿qsort实现冒泡排序的基本算法 
//void Bubble_sort(void* base, //无具体类型指针  要排序数据的起始位置
//	int sz, //从base位置上开始排序数据，排序几个数据？ 元素个数
//	int width, //一个元素有多大？ void类型不知道一个指针+1 怎么找到元素 得知道宽度
//	int (*cmp)(const void* e1, const void* e2)) //需要知道如何比较两个元素，需要函数指针
//	 //            e1 e2是指向两个元素的指针，把两个元素地址传过来  加const 是因为找到e1 和e2的值进行比较一下 此处并没有交换
//	//             能够比较e1 e2指向两个元素大小的函数  把函数地址传过来 
//	//             cmp 指向那个函数
//{
//	int i = 0;
//	//确定趟数
//	//冒泡排序有sz个元素，就要进行sz-1趟,这是最坏的情况
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//一趟冒泡排序 比较的对数
//		//一趟内部就要进行sz-1-i 这么多对元素的比较
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个相邻元素的比较方法  
//			        //调用cmp指向的函数
//			//         一个元素的地址     另一个元素的地址
//
//			//比较和  cmp传过去的是要比较的两元素的地址
//			        //arr[j] arr[j + 1]
//			if (cmp( (char*)base+j*width,(char*)base+(j+1)*width )>0)
//			//把两个元素的地址传给cmp函数  cmp函数就把两个指针的内容进行了比较
//			//9  8 >0
//			//cmp如果返回值大于0 升序的交换
//			{
//				//交换 两个指针指向的元素/内容
//				       //把两个元素的起始地址传过去
//				 //从9开始一个字节一个字节交换   从8开始一个字节一个字节交换
//
//				//交换 都要传准确的地址
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width); //width 字节大小
//			}
//		}
//	}
//}
//
//void test3()
//{
//	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//整型arr地址 sz元素个数
//	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int); //两个元素比较方法
//	//      1.不知道传什么类型的地址
//	// 	          2.不知道排序多少个元素，把元素个数传过去
//	//                3.不知道类型，要知道访问一个元素有多大？一个元素4个字节
//	//                  即使不知道起始位置放的元素类型是什么，依然可以知道一个元素有多大,该如何跳过这个元素
//	//                                 4.进行排序 必然要进行两个元素的比较
//		//打印
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//结构体数组
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} }; //初始化3个元素
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄排序
//	//Bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//按名字排序
//	Bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//	//打印结构体数组
//	print(s, sz);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3(); //整型数据排序
//	test4(); //结构体数据排序
//	return 0;
//}

//升序
//9  8  第一个>第二个 交换
//降序
//8  9  第一个<第二个 交换

//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	//void类型的指针 就是用来存放任何类型指针的值的
//	void* p = &a; //int*
//	p = &ch; //char*
//	return 0;
//}

