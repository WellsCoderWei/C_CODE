#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//����ʹ��strcat�ַ���׷�� �ַ������� ���ַ����Լ����Լ�׷��
//int main()
//{
//	char arr[20] = "abcd";
//	//strcat(arr, arr);  err  Ŀ���ַ���\0�����ǣ��Ҳ���������־\0��
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	const char* p = "obc";
//	const char* q = "abcdef";
//
//	//�Ƚϵ���p��q�ĵ�ַ
//	//if (p > q)
//	//{
//	//	printf(">\n");
//	//}
//	//else
//	//{
//	//	printf("<=\n");
//	//}
//
//	//�Ƚϵ���o��a�ĵ�ַ
//	/*if ("obc" > "abcdef")
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}*/
//	//> <�������Ƚ��ַ���ʱ���Ƚϵ��ǵ�ַ�������ַ����ıȽϲ�����> <��
//
//	//�ַ����Ƚ����ַ����йأ���Ӧ�ַ���� �����ȼ������±Ƚ�
//	//��\0����\0�ȽϽ��� �����ַ������
//	//int strcmp(const char* str1,const char* str2)
//	//                       str1ָ��һ���ַ���   str2ָ��һ���ַ���
//	//strcmp��str1 str2����ָ��ָ����ַ������бȽ� �Ƚ���󷵻�������int
//	//strcmp�Ƚ������ַ�����Ӧλ�õ�ASCII��ֵ�������ȱȽ���һ�ԣ�����ȱȽϴ�С֮��
//	//  ����һ���ַ������ڶ����ַ��������ݲ���ͬʱ (��Ӧ�ַ������ʱ)
//	//int ret = strcmp("abbb", "abc");  //����һ��<0������  -1
//	//                   b��ASCII��ֵ<c��ASCIIֵ       
//	//int ret = strcmp("abbb", "abq");  //����һ��<0������  -1    
//	//int ret = strcmp("abqqq", "aaa");  //����һ��>0������  1    
//	int ret = strcmp("aaa", "aaa");  //����һ��=0������  0    
//
//	printf("%d\n", ret);
//	return 0;
//}

//ģ��ʵ��strcmp����
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);  //s1 s2����Ϊ��ָ��
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	//ֻ��>��< ����Ȳ�����ѭ��
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

//strcmp.asm ������

//__cdecl  ������������    C Declaration

//ǿ������ת�������õõ�һ���ַ�
//*(unsigned char*)src

//�ó������ַ����������ŵ�ret��
//(ret = *(unsigned char*)src - *(unsigned char*)dst)
//ret==0˵���������ַ���ȣ���ȵ������*dst!='\0'

//ѭ������������������
//1.*dst=='\0'
//2.�����ַ�������ȣ�ret!=0


//strcpy Դ�ַ���ֱ��������\0��ֹͣ
//strcat Դ�ַ���ֱ��\0��Ҫ׷��
//strcmp Ҫô�Ƚϲ���ȣ�Ҫô���Ƚ�\0 ֱ�����Ϊֹ
//���Ȳ������Ƶ��ַ�������

//strncpy
//strncat
//strncmp
//���������Ƶ��ַ�������

//Copies the first num characters of source to destination
//Դ�ַ�����ʼ��num���ַ�������Ŀ���ַ���
//char* my_strncpy(char* dst, const char* src, size_t num)  //num�Ǽ� ˵����src�������ַ���dst��
//{
//	assert(dst && src);
//	char* cp = dst;
//	while ((num--) && (*cp++ = *src++));  // \0����ȥ֮��0Ϊ������ѭ��
//	//��ʱnum�������ʣ�࣬������\0
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
//	//strncpy(arr1, arr2, 8); //����ר��ָ�����������ַ�  ����Ҳ��������ȥ��\0
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
//	//*cp��\0��ֵʱ�������ˣ�׷��С��Դ�ַ�������ʱ���ò�\0
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
