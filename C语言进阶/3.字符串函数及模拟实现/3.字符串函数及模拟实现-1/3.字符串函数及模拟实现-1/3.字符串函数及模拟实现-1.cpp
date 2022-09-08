#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//不能使用strcat字符串追加 字符串连接 让字符串自己给自己追加
//int main()
//{
//	char arr[20] = "abcd";
//	//strcat(arr, arr);  err  目标字符串\0被覆盖，找不到结束标志\0了
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	const char* p = "obc";
//	const char* q = "abcdef";
//
//	//比较的是p和q的地址
//	//if (p > q)
//	//{
//	//	printf(">\n");
//	//}
//	//else
//	//{
//	//	printf("<=\n");
//	//}
//
//	//比较的是o和a的地址
//	/*if ("obc" > "abcdef")
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}*/
//	//> <号用来比较字符串时，比较的是地址，所以字符穿的比较不能用> <号
//
//	//字符串比较与字符串有关，对应字符相比 如果相等继续往下比较
//	//当\0等于\0比较结束 两个字符串相等
//	//int strcmp(const char* str1,const char* str2)
//	//                       str1指向一个字符串   str2指向一个字符串
//	//strcmp把str1 str2两个指针指向的字符串进行比较 比较完后返回类型是int
//	//strcmp比较两个字符串对应位置的ASCII码值，如果相等比较下一对，不相等比较大小之分
//	//  当第一个字符串跟第二个字符串的内容不相同时 (对应字符不相等时)
//	//int ret = strcmp("abbb", "abc");  //返回一个<0的数字  -1
//	//                   b的ASCII码值<c的ASCII值       
//	//int ret = strcmp("abbb", "abq");  //返回一个<0的数字  -1    
//	//int ret = strcmp("abqqq", "aaa");  //返回一个>0的数字  1    
//	int ret = strcmp("aaa", "aaa");  //返回一个=0的数字  0    
//
//	printf("%d\n", ret);
//	return 0;
//}

//模拟实现strcmp函数
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);  //s1 s2不能为空指针
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	//只有>或< 不相等才跳出循环
//	return *s1 - *s2;
//
//	//if (*s1 > *s2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//}
//
//int main()
//{
//	/*const char* p = "abcdef";
//	const char* q = "abbb";*/
//
//	/*const char* p = "abcdef";
//	const char* q = "abqb";*/
//
//	const char* p = "abcdef";
//	const char* q = "abcdef";
//	int ret = my_strcmp(p,q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p=q\n");
//	}
//	return 0;
//}

//int __cdecl strcmp(
//	const char* src,
//	const char* dst
//)
//{
//	int ret = 0;
//
//	while ((ret = *(unsigned char*)src - *(unsigned char*)dst) == 0 && *dst)
//	{
//		++src, ++dst;
//	}
//
//	return ((-ret) < 0) - (ret < 0); // (if positive) - (if negative) generates branchless code
//}

//strcmp.asm 汇编代码

//__cdecl  函数调用声明    C Declaration

//强制类型转换解引用得到一个字符
//*(unsigned char*)src

//拿出两个字符相减，结果放到ret里
//(ret = *(unsigned char*)src - *(unsigned char*)dst)
//ret==0说明这两个字符相等，相等的情况下*dst!='\0'

//循环跳出有两个条件：
//1.*dst=='\0'
//2.两个字符串不相等，ret!=0


//strcpy 源字符串直到拷贝到\0才停止
//strcat 源字符串直到\0都要追加
//strcmp 要么比较不相等，要么都比较\0 直达比完为止
//长度不受限制的字符串函数

//strncpy
//strncat
//strncmp
//长度受限制的字符串函数

//Copies the first num characters of source to destination
//源字符串开始的num个字符拷贝到目标字符串
//char* my_strncpy(char* dst, const char* src, size_t num)  //num是几 说明从src拷几个字符到dst里
//{
//	assert(dst && src);
//	char* cp = dst;
//	while ((num--) && (*cp++ = *src++));  // \0拷过去之后，0为假跳出循环
//	//此时num如果还有剩余，主动补\0
//	//6543 2
//	//qwer\0
//	while (num--)
//	{
//		*cp++ = '\0';
//	}
//	return dst;
//}
//int main()
//{
//	char arr1[20] = "abcdef####";
//	char arr2[] = "qwer";
//	//my_strncpy(arr1, arr2, 7);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strncpy(arr1, arr2, 7));
//
//	
//	//printf("%s\n", strncpy(arr1, arr2, 2)); //qwcdef
//	//printf("%s\n", strncpy(arr1, arr2, 10)); //qwer
//	//strncpy(arr1, arr2, 8); //长度专门指定拷贝几个字符  不够也给拷贝过去用\0
//	//printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dst, const char* src, size_t num)
//{
//	assert(dst && src);
//	char* cp = dst;
//	while (*cp)  cp++;
//	while (num--)
//	{
//		if ((*cp++ = *src++) == 0)
//		{
//			return dst;
//		}
//	}
//	//*cp的\0赋值时被覆盖了，追加小于源字符串长度时，得补\0
//	*cp = '\0';
//	return dst;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 4);
//	//strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strncmp(const char* dst, const char* src,size_t num)
//{
//	while (num--)
//	{
//		while (*dst == *src)
//		{
//			if (*dst == '\0')  return 0;
//			dst++, src++;
//		}
//			return *dst - *src;
//	}
//	return 0;
//}

int __cdecl my_strncmp
(
    const char* first,
    const char* last,
    size_t      count
)
{
    size_t x = 0;

    if (!count)
    {
        return 0;
    }

    /*
     * This explicit guard needed to deal correctly with boundary
     * cases: strings shorter than 4 bytes and strings longer than
     * UINT_MAX-4 bytes .
     */
    if (count >= 4)
    {
        /* unroll by four */
        for (; x < count - 4; x += 4)
        {
            first += 4;
            last += 4;

            if (*(first - 4) == 0 || *(first - 4) != *(last - 4))
            {
                return(*(unsigned char*)(first - 4) - *(unsigned char*)(last - 4));
            }

            if (*(first - 3) == 0 || *(first - 3) != *(last - 3))
            {
                return(*(unsigned char*)(first - 3) - *(unsigned char*)(last - 3));
            }

            if (*(first - 2) == 0 || *(first - 2) != *(last - 2))
            {
                return(*(unsigned char*)(first - 2) - *(unsigned char*)(last - 2));
            }

            if (*(first - 1) == 0 || *(first - 1) != *(last - 1))
            {
                return(*(unsigned char*)(first - 1) - *(unsigned char*)(last - 1));
            }
        }
    }

    /* residual loop */
    for (; x < count; x++)
    {
        if (*first == 0 || *first != *last)
        {
            return(*(unsigned char*)first - *(unsigned char*)last);
        }
        first += 1;
        last += 1;
    }

    return 0;
}
int main()
{
	const char* p= "aqcdef";
	const char* q= "abcqwert";
	int ret = my_strncmp(p, q, 5);
	//int ret = strncmp(p, q, 3);
	printf("%d\n", ret);
	return 0;
}
