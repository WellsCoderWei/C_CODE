#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//strstr作用：在字符串中找另外一个字符串
//int main()
//{ //3个字符串，每个字符串能存放5个字符，包含\0
//	char str[][5] = { "R2D2","C3P0","R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//    if(strncmp(str[n],"R2XX",2)==0)
//	{
//		printf("found %s\n", str[n]);
//	}
//	return 0;
//}

//int main()
//{
//	char string[] = "Hello world!";
//	puts(string);
//}

//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(str, "simeple", 6);
//	puts(str);  //simples a simple string
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);  //需要对指针进行解引用操作，断言
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	char* cp = (char*)str1;
//
//	if (!*str2) //如果*str2=='\0'  !*str2为真 继续执行if里的语句
//	{
//		return (char*)str1;
//	}
//	while (*cp)  //*cp!='\0'
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))  //如果没有*s1 && *s2 当s1++  s2++ 解引用访问到\0时，*s1==*s2条件成立，进入循环就会造成越界访问
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return (char*)cp;
//		}
//		cp++; //当*s1指向/0时，让cp自己++指向\0结束循环查找
//	}
//	return NULL;
//}
//int main()
//{
//	//char arr1[] = "abbbcdef";
//	//char arr2[] = "bbc";
//	
//	//char arr1[] = "abcdefabcdef";
//	//char arr2[] = "bcd";
//
//	//char arr1[] = "abccefabcdef";
//	//char arr2[] = "bcd";
//
//	char arr1[] = "ab";
//	char arr2[] = "bbc";
//	//在arr1中查找是否包含arr2数组
//	char* ret = my_strstr(arr1, arr2); //如果找到bcd 一定是找b第一次出现的位置 返回第一个地址
//	          //如果存在返回第一次出现地址，如果不存在返回空指针
//	if (ret == NULL) //返回空指针没找到
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了： %s\n", ret);   //返回字符串起始地址 打印字符串
//	}
//	return 0;
//}


//strtok  切割一个字符串
// zpw@bitedu.tech
// zpw邮箱名
// bitedu域名
// tech域名的后缀
// @ .分隔符的集合

//int main()
//{
//	char arr[] = "zpw@bitedu.tech hehe";  //第一个字符串其实是由第二个字符串中分隔符分隔开的标记   第一个字符串可能是空字符串，可能有一个标记，可能有两个标记，可能有多个标记
//	char tmp[30] = { 0 }; //拷贝出来的字符串
//	char* p = (char*)"@. ";  //p指向用来做分隔符字符的集合  p指向分隔符集合
//	char* ret = NULL;
//
//	strcpy(tmp, arr);
//	//strtok(arr, "@.");
//
//    // zpw\0bitedu\0tech\0
//	/*ret = strtok(tmp, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	//  初始化部分        判断部分   变量变化部分
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "- This, a simple string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}

//int main()
//{
//	char* p = (char*)"zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


//strerror  使用库函数时，调用库函数可能会失败
//          在调用库函数失败时，都会设置一个错误(代)码
//C语言有一个全局错误码 int errno; //5 变量    只要调用函数发生错误，就会把错误放到errno变量里去
//char* strerror(int errnum);
//对应的错误信息     把错误码翻译成
//当把错误码翻译成错误信息时，错误信息是一个字符串   返回字符串首字符地址

//int main()
//{
//	//把错误码翻译成错误信息，并且返回错误信息所对应的字符串的地址
//	//每一个数字都有错误信息，strerror函数可以帮把对应的错误信息翻译出来
//	//错误码翻译成错误信息
//	printf("%s\n", strerror(0));  //No error  没错 当前调用正常
//	printf("%s\n", strerror(1));  //Operation not permitted   操作被拒绝
//	printf("%s\n", strerror(2));  //No such file or directory  没有这个文件或文件夹
//	printf("%s\n", strerror(3));  //No such process  没有进程
//	printf("%s\n", strerror(4));  //Interrupted function call  调用函数被中断
//	printf("%s\n", strerror(5));  //Input / output error
//	return 0;
//}


#include <errno.h>  //全局的错误码要包含头文件
//会把错误码放到int errno;全局变量里
//int main()
//{
//	//打开一个文件file用fopen函数
//	// 假设打开一个test.txt文件  
//	FILE* pf = fopen("test.txt","r");  //以读的方式打开  这个文件如果不存在，就会打开失败
//	//一旦不存在就会返回一个空指针
//	if (pf == NULL) //如果pf是空指针，打开文件就失败了
//	{//得知道失败的原因  打印失败的原因   strerror反馈失败的原因
//		//                     strerror函数调用errno  当fopen函数调用失败时，会把错误码放到errno变量里，然后把错误码对应的错误信息打印出来
//		printf("%s\n", strerror(errno));
//		return 1;  //调用失败 代码就不用继续往下走了   return 1; 意味着代码就不会继续往下走了  直接返回mian函数结束
//	}
//	//...如果调用成功 打开文件成功才会继续往下走
//	fclose(pf);  //fclose关闭文件
//	pf = NULL;  //pf赋值为空指针
//	return 0;
//}




