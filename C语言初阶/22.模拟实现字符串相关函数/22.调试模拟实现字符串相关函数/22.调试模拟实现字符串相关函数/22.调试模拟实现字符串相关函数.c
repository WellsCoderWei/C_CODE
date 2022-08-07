#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int n = 0;
//	int m = 10;
//	int const * p = &n;
//	int* const p1 = &m;
//	printf("n=%d\n", *p);
//	p = &m;
//	*p1 = 34;
//	printf("n=%d m=%d %d \n",n, *p,m);
//	return 0;
//}

//const 修饰指针 1.const放在*左边 - 不管p指向谁 p指向的内容 都不能够通过p来改变
//               2.const放在*右边 - p变量不能动 原来指向谁 永远指向谁不能动，但是p指向的内容可以被改变

//*dest 指向的内容是要被修改的 作为左值不能加const
//目标空间发生变化又得看到目标空间发生变化 - strcpy函数 其实返回的是目标空间的起始地址  destination is returned 目标空间的起始地址会被返回
                                          //源字符串拷贝到目标空间以后，把目标空间起始地址返回来
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest; //首先把目标空间的起始地址放到ret里去
//	//把src指向的内容拷贝放进dest指向的空间中
//	//源字符串的内容拷贝放到目标空间里去
//	//本质上希望，dest指向的内容被修改（目标空间发生变化），src指向的内容不被修改
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret; //最终返回目标空间的起始地址
//	//return dest; err  直接返回dest是绝对不行的 dest++ while循环走完 dest指向的不是目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "xxxxxx";
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2)); //arr2拷贝到目标空间arr1里 会返回目标空间arr1的起始地址 
//	                                      //一旦返回起始地址 printf把my_strcpy函数返回的的起始地址 以字符串的形式打印
//	              //用my_strcpy的返回值作了printf函数的参数 - 链式访问
//	return 0;
//}

//int 有符号整型 既可以表示整数，也可以表示负数 而求字符串长度不能是负数
// size_t - unsigned int 无符号整型
            //健壮性=鲁棒性
//size_t __cdecl my_strlen(const char* str) //仅仅是为了求字符串长度，不期望arr数组内容被改变，加上const修饰让代码更健壮
//{      //函数调用约定 - 函数调用时需要传参 先传左边还是右边有__cdecl决定
//    //                                     (char* dest, const char* src)
//
//    //使用指针时都可以断言一下 - 指针不为空指针才去使用指针，指针为空指针断言失败报错，让指针使用时更加安全一些
//    //assert(str != NULL); //assert断言保持指针有效性   断言是断言指针变量本身，指针不能是空指针  *p已经对p解引用找到p所指向对象去了（已经是指针指向的内容了），对应是个字符不能是空指针，而且p本来是空指针 解引用就出错、代码崩溃了 写成*p有什么用？
//    //assert(str); //str == NULL   str是空指针时，空指针为0 假报错
//
//    //方法一：计数器
//    //size_t count = 0;
//    //while (*str) //*str != '\0'
//    //{
//    //    count++;
//    //    str++;
//    //}
//    //return count; //size_t count 返回的count永远不可能是负数
//
//    //方法二：指针-指针
//    const char* eos = str;
//    while (*eos++); //当eos指向\0  *eos eos解引用是\0    \0后置有++  又因为附带作用eos指向\0后面位置
//    return eos - str-1; //把\0后面位置减回来   减了1之后跳到\0前面
//}
//int main()
//{
//    //char arr[] = "abc";
//    //int len = my_strlen(arr);
// 
//    const char* p = "abcdef";
//    int len = my_strlen(p);
//    printf("%d\n", len);
//    return 0;
//}

//模拟实现strlen - 求字符串长度
size_t __cdecl my_strlen(const char* str)
{
    assert(str != NULL);
    const char* eos = str;
    while (*eos++);
    return eos - str - 1;
}
int main()
{
    char arr[] = "abc";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}

//模拟实现字符串拷贝
//char* __cdecl my_strcpy(char* dst, const char* src)
//{   //函数调用规定
//    assert(dst && src);
//    char* cp = dst;
//    while (*cp++ = *src++);
//    return dst;
//}

//extern char* __cdecl my_strcpy(char* dst, const char* src);
//int main()
//{
//    char arr1[20] = "xxxxxx";
//    char arr2[] = "bit";
//    printf("%s\n", my_strcpy(arr1, arr2));
//    return 0;
//}

//   C:\Program Files (x86)\Windows Kits\10\Source\10.0.19041.0\ucrt\string


