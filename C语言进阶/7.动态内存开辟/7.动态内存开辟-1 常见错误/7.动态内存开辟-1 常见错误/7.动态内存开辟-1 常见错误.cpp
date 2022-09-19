#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exit(EXIT_FAILURE);  代表异常退出     功 能: 关闭所有文件，终止正在执行的进程。
//exit()参数     EXIT_FAILURE  C语言头文件库#include <stdlib.h>中定义的符号常量

//void GetMemory(char* p)                //p是指针变量，值传递 是str的一份临时拷贝  NULL
//{                                      //在GetMemory函数内部改变p，把动态申请的内存空间地址放到p里后，其实并没与影响外面的str
//	p = (char*)malloc(100);           //申请100个字节空间，把这块空间起始地址交给p，相当于p指向/维护这块空间，p里存放这块空间地址 不再是空指针
//}//p是形参变量，形参变量和局部变量一样出了范围p销毁
//                             
//void Test(void)
//{
//	char* str = NULL;                  //str  NULL
//	GetMemory(str);                   //str是指针变量 值传递,并没有传str的地址
//	strcpy(str, "hello world");       //GetMemory函数一旦返回之后，p这个临时变量销毁了 还给操作系统，malloc申请的这100个字节的起始地址，再也找不见了；由于p的销毁，导致内存泄露，malloc开辟的空间再也找不到了；p指向的地址并没有放到str里，str还是空指针
//	                                 //把"hello world"常量字符串放到空指针指向的空间，就会有问题；空指针并没有指向任何有效的空间，"hello world"拷贝进去本身就会失败，导致程序崩溃
//	printf(str);                     //没有拷贝成功，打印不出来相应的信息
//	                                 //后面再想释放也释放不了，因为已经内存泄露了
//}
//int main()
//{
//	Test();
//	return 0;
//}

//str传给GetMemory函数是值传递，所以GetMemory函数的形参p是str的一份临时拷贝，
//在GetMemory函数内部，动态申请空间的地址，存放在p中，不会影响后面的str，
//所以当GetMemory函数返回之后，str依然是NULL,所以strcpy会失败；
//同时，形参p销毁，使得动态开辟的100个字节存在内存泄露，无法释放。

//改1：传地址
//void GetMemory(char** p)               
//{                                      
//	*p = (char*)malloc(100); 
//  //*p解引用就找到外边的str     把malloc开辟的100个字节空间放到*p里，就相当于放到外边的str里，str也得到了100个字节空间的地址
//}
//                             
//void Test(void)
//{
//	char* str = NULL;                  
//    GetMemory(&str);
//	strcpy(str, "hello world");                                   
//	printf(str); 
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char* p)                
//{                                     
//	p = (char*)malloc(100);          
//	return p; //开辟好空间把p带回来
//}
//                             
//void Test(void)
//{
//	char* str = NULL;                 
//	str = GetMemory(str);
//	strcpy(str, "hello world");                                        
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//返回栈空间的问题
//GetMemory函数 内部创建的数组，是在栈区上创建的，出了函数，p数组的空间就还给了操作系统，返回的地址没有实际意义，
//如果通过返回的地址去访问内存，就是非法访问内存
//char* GetMemory(void)
//{
//	//在栈上创建局部变量p数组
//	char p[] = "hello world";
//	return p; //把p的起始地址返回了，但是当str存了p的地址时，p的空间已经还给操作系统销毁了
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//int* f1(void)
//{
//	int x = 10;  //x是局部变量，局部变量就是在栈上开辟空间的
//	return (&x);  //把x地址返回去就会有问题
//}
//
//int* f2(void)
//{
//	//野指针问题
//	int* ptr;  //ptr虽然是指针，但是没有对它做任何初始化，局部变量不初始化，ptr里面放的就是随机值
//	*ptr = 10; //ptr里面放着随机值，一旦被解引用，是哪里的地址？要去访问哪块空间？ 10往里放 要放哪里？
//	return ptr;
//}
//指针 要么是空指针，要么指向一块有效空间，不要什么都不初始化，还想解引用

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);  //开辟的空间还在，可是使用权不归str了   free只是释放str指向的空间，不会把str指针置空
	//str = NULL;
	if (str != NULL)  //所以走到这str确实不为空
	{
		strcpy(str, "world"); //可是这块空间已经free掉了 不让改，非法访问内存
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}