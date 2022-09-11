#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

//字符分类/操作函数：
//函数                                        如果他的参数符合下列条件就返回真
//iscntrl 判断一个字符是不是控制字符？        任何控制字符
//isspace 判断一个字符是不是空白字符？        空格字符包含：空格'',换页'\f',换行'\n',回车'\r',制表符'\t'或者垂直制表符'\v'    这些字符打印出来看不见，所以是空白字符  那个地方明确有一个空间，但是它是空白的、是看不见的，就像空格一样   那个地方其实是放了一个字符，但是我们看不见
//isdigit 判断一个数字是不是数字字符？        十进制数字 0~9   是不是字符0？ 字符2？   字符7？
//isxdigit 是不是十六进制数字？               包括所有十进制字符，小写字符a-f，大写字符A-F  a-f/A-F是不是数字字符 只针对十六进制
//islower 判断是不是小写字母？                小写字母a-z
//isupper 大写字母判断                        大写字母A-Z
//isalpha 判断是不是字母？                    字母里包含小写字母a~z和大写字母A~Z
//isalnum 判断是不是字母或者是数字、字母和数字组合？   字母或者数字，a-z,A-Z,0-9
//ispunct 判断是不是任何标点符号？             标点符号，任何不属于数字或者字母的图形字符(可打印)
//isgraph 判断是不是任何可图形字符？           
//isprint 是不是任何可打印字符？               包括图形字符和空白字符


//int main()
//{
//	//'#'是不是数字字符
//    //定义一个字符
//	//char ch = '@';
//	char ch = '2';  //2是数字字符，不是2，是字符
//	//int isdigit(int c) 接收一个参数，要判断哪个字符？传ASCII码值
//	int ret = isdigit(ch);
//	//printf("%d\n", ret);  //如果不是数字字符，返回0
//	                     //如果是数字字符，返回非0
//
//	//判断一个字符是不是小写字符
//	char ch1 = 'n';
//	// int islower(int c)  要判断哪个字符？传ASCII码值
//	ret = islower(ch1);
//	printf("%d\n", ret);  //如果是小写字母字符，返回非0
//	                      //如果不是小写字母字符，返回0
//	return 0;
//}
//字符转换
//int tolower(int c);  //转小写
//int toupper(int c); //转大写

//int main()
//{
//	//写一个字符串，接收一个字符串
//	//然后把字符串里所有的大写，转换成小写
//	char arr[20] = { 0 };
//	scanf("%s", arr);  //录一个字符串  放到arr字符数组里
//	//对字符串进行处理，遍历字符串，如果是大写转换成小写，如果是小写不变
//	int i = 0;
//	while (arr[i] != '\0')  //arr[i]数组下标i的元素
//	{
//		if (isupper(arr[i])) //如果是大写
//		{
//			arr[i] = tolower(arr[i]); //转换成小写，放到对应的arr字符数组索引i的元素
//			//printf("%c ", arr[i]);  //放在这，是只打印被转换的大写字符
//		}
//		printf("%c ", arr[i]);
//		i++; //找下一个字符
//	}
//	//AbCdEf
//	return 0;
//}


//字符转换：小写转大写
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))   
//		{                                //如果存在该值，则大写字母等同于c，否则为c（未更改）。该值作为int值返回，可以隐式转换为char。
//			                            //把这个字符的ASCII码值传进去，为真，再返回这个字符的ASC码值
//			arr[i] = toupper(arr[i]);  //转换成大写字母，放到对应的字符数组arr下标为i的元素
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	//char str[] = "Test string.\n";
//	////char c;
//	//while (str[i])
//	//{
//	//	//c = str[i];
//	//	if (isupper(str[i]))
//	//	{
//	//		str[i] = tolower(str[i]);
//	//	}
//	//	putchar(str[i]);
//	//	i++;
//	//}
//
//	printf("%c ", 'B' + 32);  //a b
//	//printf("%c ", 'b' - 32);  //A B
//	return 0;
//}


//函数针对内存块进行拷贝，把这块空间内容放到，另一块空间里。只关注内存块，不关注内存块里放的什么数据
//内存操作函数
//memcpy - 内存拷贝
//void* memcpy(void* destination,const void* source,size_t num)  要拷贝多少个字节的空间，数据的宽度，数据量的大小
//把源头的数据拷贝放到目标空间里
//把源地址指向空间的数据，放到目标空间地址里去

//返回目标空间起始地址
//void* my_memcpy(void* dst, const void* src,size_t num)  //总共拷贝多少个字节？一个一个拷贝
//{
//	void* start = dst;  //先把目标空间地址存起来
//	assert(dst && src);//需要解引用保证传的不是空指针
//	while (num--)
//	{
//		*(char*)dst = *(char*)src;
//		//dst=(char*)dst + 1;  //强制类型转换成某种指针，+1跳过一个字符   赋给dst  dst相当于走向下一个字符，存放下一个字节地址
//		//src=(char*)src + 1;
//	}
//	return start; //返回目标空间起始地址
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };   //1,2,3,4,5   五个这样的数据4*5是20
//	int arr2[20] = { 0 };
//	int sz = sizeof(arr2) / sizeof(arr2);
//	//strcpy
//	//char* strcpy(char* dst,char* src)
//	//1.拷贝的是字符串 char类型
//	//2.以\0为结束标志
//
//	//小端存储 01 00 00 00  02 00 00 00 
//	//当第一个字节拷贝过去后，第二个字节就变成\0了，拷贝结束，接下来第三、四个字节都不会拷贝了
//
//	my_memcpy(arr2, arr1,20);
//	return 0;
//}





