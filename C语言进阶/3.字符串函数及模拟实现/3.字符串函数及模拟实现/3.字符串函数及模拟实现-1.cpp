#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//求字符串长度 
//strlen
//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp
//长度受限制的字符串函数
//strncpy
//strncat
//strncmp
//字符串查找
//strstr
//strtok
//错误信息报告
//strerror
//字符操作
//内存操作函数
//memcpy
//memmove
//memset
//memcpy

//求字符串长度
//版本1：计数器  用计数器来统计当前有几个字符
//            加const使函数更加安全、健壮  只是求字符串的长度 不会改变字符串
//int my_strlen(const char* str) //指针指向的内容不能通过指针来改变
//{
//	int cnt = 0;
//	assert(str); //str不能等于NULL 保证了指针的有效性  解引用更加安全
//	//对指针进行解引用必须是有效的指针
//	while (*str != '\0')
//	{
//		cnt++;
//		str++;
//	}
//	return cnt;
//}

//版本2：递归 求字符串长度不允许创建临时变量
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//版本3：指针-指针    C:\Program Files (x86)\Windows Kits\10\Source\10.0.19041.0\ucrt\string\arm
//size_t my_strlen(const char* str)
//{
//	//用户定义宏
//	const char* eos = str;
//	while (*eos++);  //当*eos为'\0'时，后置++ 使得循环结束eos指向'\0'后面
//	return eos - str - 1;  //-1指向'\0'前面
//}
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a','b','c' };  //字符串长度是随机数
//	size_t len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strlen的返回值为size_t 无符号   unsigned int
//int main()
//{
//	//const char* str1 = "abc";
//	//const char* str2 = "abcdef";
//	//           3    -3          6
//	/*if (strlen("abc") - strlen("abcdef") > 0)*/
//	if(my_strlen("abc") - my_strlen("abcdef")>0)
//	{
//		//-3
//		//原码 10000000000000000000000000000011
//		//反码 11111111111111111111111111111100
//		//补码 11111111111111111111111111111101   -3在内存里的补码 被解读为无符号数  被解读为真正的原码  非常大的正数
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//无符号数-无符号数在算术层面还是无符号数
//-3被当成无符号的数来解读，没有符号概念
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("str1>str2\n");
//	}
//}


//int main()
//{
//	char arr[20] = {"############"};
//	//arr = "hello";  err   arr数组名本来就是首元素的地址 是常量值 编号数字  把hello放在地址编号上？ 应该把hello字符串拷贝放到由arr指向的空间里去
//	//目标空间是arr起始位置就是数组名
//	           //字符串在赋值或者使用时，使用的是首字符h的地址
//	const char* p = "hello";  //把字符串hello 的首字符h放到p里，p就指向了这个字符串。  赋值过去的是h的地址，可不是整个字符串   常量字符串放到表达表达式里
//	//strcpy(arr, "hello"); //hello 在传参时，传过去的是h的地址  传给了src src指向了hello
//	             //当把\0拷贝过去时，就把源字符串的所有内容都拷贝过去了
//	
//	//strcpy拷贝数据时，源字符串没有\0，不知道何时才能找到\0停下,这时已经越界访问很久了
//	char arr2[] = { 'a','b','c' };
//	strcpy(arr, arr2);
//	printf("%s\n",arr);
//	return 0;
//}

//               目标空间地址     源空间地址
//void my_strcpy(char* dest, const char* src)
//{//strcpy函数基本原理：把源指针空间里的数据拷贝到目的地指针所指向的空间里去
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++);
//}
//int main()
//{
//	char arr[20] = { 0 };
//	my_strcpy(arr, "hello");
//	printf("%s\n",arr);
//	return 0;
//}

//strcat 字符串追加   字符串连接
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cp = dest;
//	//1.找到目标字符串中的\0
//	while (*cp) cp++;
//	//2.源字符追加过去，包含\0
//	while (*cp++ = *src++);
//	return dest;  //返回目标空间起始地址
//}

//void my_strcat(char* dest, const char* src)
//{
//	//assert(dest && src);
//	////1.找到目标字符串中的\0
//	//while (*dest) dest++;
//	////2.源字符追加过去，包含\0
//	//while (*dest++ = *src++);
//
//	assert(dest && src);
//		char* cp = dest;
//		//1.找到目标字符串中的\0
//		while (*cp) cp++;
//		//2.源字符追加过去，
//		while (*cp++ = *src++);
//}

//int main()
//{
//	char arr[20] = "hello \0#######";
//	const char* p = "world";
//	//strcat(arr, "world");
//	//my_strcat(arr, p);
//
//	//printf("%s\n", arr);
//	printf("%s\n",my_strcat(arr, p));
//	//printf("%s\n",strcat(arr, arr));
//	return 0;
//}


