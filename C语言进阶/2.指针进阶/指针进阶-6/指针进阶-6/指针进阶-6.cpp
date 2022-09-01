#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string>

//sizeof(数组名) - 表示整个数组，计算的是整个数组的大小
//      &数组名  - 表示整个数组，取出的是整个数组的地址
//除此之外，其他情况下数组名都是数组首元素的地址
//int main()
//{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a)); //16        每个元素是4个字节 4*4=16
	//printf("%d\n", sizeof(a + 0)); //4/8   这个地方的数组名表示的不是整个地址，也没有&取地址符号  a数组名表示的就是数组首元素地址  a+0是第一个元素的地址  是地址就应该是 32位平台4个字节 或 64位平台8个字节  sizeof(a+0)计算的是地址的大小
	//printf("%d\n", sizeof(*a)); //4        a没有单独放在sizeof内部  首元素地址解引用访问的是1 整型4个字节   *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
	//printf("%d\n", sizeof(a + 1)); //4/8   数组名表示数组首元素地址，类型是int*  int型指针+1跳过一个整型 指针指向2  a+1是第二个元素的地址，sizeof(a+1)计算的是地址的大小 4/8
	//printf("%d\n", sizeof(a[1])); //4      a[1]第二个元素，sizeof(a[1])计算的是第二个元素的大小 整型4

	//printf("%d\n", sizeof(&a)); //4/8        &a虽然取出的是整个数组的地址，但也是地址，sizeof(&a)计算的是地址的大小
	//printf("%d\n", sizeof(*&a)); //16        &a取出的是(一维)数组的地址   数组的地址，类型是 数组指针 int(*p)[4]= &a;   指针是一个指向数组的指针，解引用找到数组。  取地址a取出的是数组的地址，解引用相当于找到整个数组，相当于整型指针int* 解引用可以找到一个整型，字符指针char* 解引用可以找到一个字符，数组的地址 解引用就能找到数组。  sizeof(*&a)计算的是数组的大小 16个字节。    *&取出地址后再解引用，还是sizeof(a)表示整个数组，计算的是整个数组的大小
	//printf("%d\n", sizeof(&a + 1)); //4/8    &a+1数组后面空间的地址，sizeof(&a+1)计算的是地址的大小
	//printf("%d\n", sizeof(&a[0])); //4/8     &a[0]取出第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1)); //4/8   第一元素地址+1 就是第二个元素地址

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' }; //6个元素   &arr+1跳过数组大小6个字节，&arr+2跳过两个数组大小，12个字节    跳过多少字节看类型
	//sizeof 计算所占空间大小
	//printf("%d\n", sizeof(arr)); //6
	//printf("%d\n", sizeof(arr + 0)); //4/8
	//printf("%d\n", sizeof(*arr)); //1            首元素a的地址 解引用1个字节
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4/8          地址都是4个或8个字节
	//printf("%d\n", sizeof(&arr + 1)); //4/8     
	//printf("%d\n", sizeof(&arr[0] + 1)); //4/8

	//strlen 求字符串长度
	//strlen函数设计
	//int my_strlen(const char* str){} 传的是字符串起始位置的地址，所以用char*指针接收
	//printf("%d\n", strlen(arr)); //随机值          数组名arr没有单独放在sizeof内部，数组名就是数组首元素地址。 strlen是给一个地址，从这个地址开始向后数字符，直到找到\0停下
	//printf("%d\n", strlen(arr + 0)); //随机值      首元素地址+0还是首元素地址
	//printf("%d\n", strlen(*arr)); //err          arr本来是这块首元素空间的地址，*arr解引用就找到这块空间的内容字符a了  字符'a'是97 把97当做这块空间的地址了   以97为地址，找字符串谁知道找哪去了
	//printf("%d\n", strlen(arr[1])); //err        arr[1]第二个元素 把第二个元素字符b 98当做地址，也不知道找哪去了。    传过去的东西不管是什么，被strlen理解，放到指针变量里去了 就是地址，但站在strlen角度不是合法的地址，代码出问题
	//printf("%d\n", strlen(&arr)); //随机值         strlen认为是首字符地址，从'a'开始往后数   &arr 取地址arr取出的是 数组的地址,本来是char(*)[6]数组指针类型。  把地址传过来放到const char* str里去
	//printf("%d\n", strlen(&arr + 1)); //随机值-6   取数组地址+1跳过整个数组大小6个字节  这个随机值跟前面随机值差6
	//printf("%d\n", strlen(&arr[0] + 1)); //随机值-1    从'b'的地址开始往后数，差1

	//char arr[] = "abcdef"; //[a b c d e f \0]
	             //sizeof会算\0
	//printf("%d\n", sizeof(arr)); //7         
 //   printf("%d\n", sizeof(arr + 0)); //4/8
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4/8
	//printf("%d\n", sizeof(&arr + 1)); //4/8
	//printf("%d\n", sizeof(&arr[0] + 1)); //4/8

	//printf("%d\n", strlen(arr)); //6          字符串个数截止到\0,不包括\0
	//printf("%d\n", strlen(arr + 0)); //6
	////printf("%d\n", strlen(*arr)); //err
	////printf("%d\n", strlen(arr[1])); //err
	////printf("%d\n", strlen(&arr)); //6
	////printf("%d\n", strlen(&arr + 1)); //随机值   整个数组+1 把整个数组跳过去，也把\0跳过去
	//printf("%d\n", strlen(&arr[0] + 1)); //5

	//char arr[] = "abcdef";
	//char* p = arr;  //a b c d e f \0 起始位置地址放到p里去    a放到p里

	//printf("%d\n", sizeof(p)); //4/8          算的是指针变量的大小 字符指针也是指针 大小是4/8
	//printf("%d\n", sizeof(p + 1)); //4/8      p本来是a的地址，+1变成b的地址
	//printf("%d\n", sizeof(*p)); //1           p指向a *p拿出a sizeof算出a所占字节
	//printf("%d\n", sizeof(p[0])); //1         p[0]等价于*(p+0)
	//printf("%d\n", sizeof(&p)); //4/8
	//printf("%d\n", sizeof(&p + 1)); //4/8     &p+1把整个p的地址跳过去
	//printf("%d\n", sizeof(&p[0] + 1)); //4/8

	//printf("%d\n", strlen(p)); //6              p放的是a的地址，把a的地址交给strlen向后数字符  
	//printf("%d\n", strlen(p + 1)); //5     
	////printf("%d\n", strlen(*p)); //err           
	////printf("%d\n", strlen(p[0])); //err       
	//printf("%d\n", strlen((const char*) & p)); //随机值
	//printf("%d\n", strlen((const char*) & p + 1)); //随机值     &p+1把整个p的地址跳过去
	//printf("%d\n", strlen(&p[0] + 1)); //5


	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a)); //48           3*4*sizeof(int)
	//printf("%d\n", sizeof(a[0][0])); //4
	//printf("%d\n", sizeof(a[0])); //16        4*4  a[0]单独放在sizeof内部，表示第一行一维数组名 单独放在sizeof里 计算的是第一行一维数组的大小 第一行有4个元素 每个元素是int
	//printf("%d\n", sizeof(a[0] + 1)); //4/8   a[0]没有单独放在sizeof内部，因此a[0]表示首 元素 /第一个 元素 的地址，整型的地址a[0]+1跳过一个整型，指向第一行的第二个元素地址
	//                                          //a[0]作为数组名没有单独放在sizeof内部，也没有取地址，所以a[0]就是第一行第一个元素的地址，a[0]+1就是第一行第二个元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1))); //4  第一行第二个元素地址解引用，就是第一行第二个元素
	//printf("%d\n", sizeof(a + 1)); //4/8      a二维数组名没有单独放在sizeof内部，并没有代表整个二维数组，数组名a是二维数组首元素第一行的地址，第一行的地址a+1其实是第二行的地址
	//printf("%d\n", sizeof(*(a + 1))); //16    a+1第二行的地址解引用，找到第二行   *(a+1)-->a[1]
	//printf("%d\n", sizeof(&a[0] + 1)); //4/8
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16
	//printf("%d\n", sizeof(*a)); //16          (*a) ==  *(a+0) == a[0]
	//printf("%d\n", sizeof(a[3])); //16        //a[3]存在 类型是int [4]       一维数组，4个元素，每个元素是整型
	                                            // sizeof();内部表达式不计算  不会真实的去访问第四行a[3]在哪，只有知道有第四行概念，就能推测第四行类型
												//(如果有的话)a[3]其实是第四行数组名，即使不存在，也能通过类型计算大小
	//printf("%d\n", sizeof(a[-1])); //16
												
	//3+5
	//printf("%d\n", sizeof(3 + 5)); //4        
	//表达式 有两种属性
	//1.值属性 8
	//2.类型属性 int

	//short s = 5;
	//int a = 6;
	//printf("%d\n", sizeof(s = a + 4)); //2
	//printf("%d\n", s); //5

    /*int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));*/
	//      2  5  
//	return 0;
//}

//struct Test  //结构体Test类型的大小20个字节
//{
//	int num;  //4
//	char* pcName; //4
//	short sDate; //2
//	char cha[2]; //2
//	short sBa[4]; //2*4
//}* p; //结构体指针 p变量大小20个字节
////假设p的值为0x100000
//int main()
//{
//	printf("%p\n", p + 0x1); //0x100014 结构体指针+1跳过20个字节  十进制20 --> 十六进制14
//	printf("%p\n", (unsigned long)p + 0x1);  //整型p 0x100000 +1 --> 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);  //整型指针跳过4个字节 0x100000 +4 --> 0x100004
//	return 0;
//}

//int main()
//{
	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);  //取地址a取出数组地址
	//int* ptr2 = (int*)((int)a + 1);  //转换成整型+1 就是加1 
	//printf("%#x,%#x", ptr1[-1], *ptr2);
	//%x十六进制
	//00000000 00000000 00000000 00000001
	//   00       00       00       01
	// 1个字节  1个字节  1个字节  1个字节
	//*(ptr1-1)-->ptr[-1]  00000004 4
	//00000001+1 00000002    02000000 2000000

	//int a[3][2] = { (0,1),(2,3),(4,5) }; //逗号表达式  三行二列
	////                1     3     5                      1  3
	////                                                   5  0
	////                                                   0  0
	//int* p;
	//p = a[0]; //没有放在sizeof内部、没有&，代表首元素地址
	//printf("%d\n", p[0]);  //p[0]-->*(p+0)  1

//	int a[5][5];
//	int(*p)[4]; //p数组指针认为 有能力指向4个元素，每个元素整型的数组 +1跳过4个字节
//	//int(*p)[5][5] = &a; //取出的是二维数组的地址 类型是int(*)[5][5]
//	p = (int(*)[4])a; //二维数组 数组名表示 首元素第一行地址 起始位置
////赋值给p 
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//                FFFFFFFC             -4
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//                10           5
//	return 0;
//}

//int main()
//{
//	char* a[] = { (char*)"work",(char*)"at",(char*)"alibaba" };  //三个字符串 产生三个首字符的地址w a a放到指针数组里
//	//数组里放3个char*指针
//	char* * pa = a; //数组名首元素地址，第一元素地址 char*的地址是一个一级指针的地址 指向w
//	pa++; //跳过一个元素 指向a的地址解引用 访问一个元素拿到char*
//	printf("%s\n", *pa); //at
////                 这放一个a的地址，以%s形式打印，从这开始打印字符串
//	return 0;
//}

int main()
{
	char* c[] = { (char*)"ENTER",(char*)"NEW",(char*)"POINT",(char*)"FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp); //POINT
	printf("%s\n", *-- * ++cpp + 3); //ER
	printf("%s\n", *cpp[-2] + 3); //ST
	printf("%s\n", cpp[-1][-1] + 1); //EW
	return 0;
}