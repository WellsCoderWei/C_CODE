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

//const ����ָ�� 1.const����*��� - ����pָ��˭ pָ������� �����ܹ�ͨ��p���ı�
//               2.const����*�ұ� - p�������ܶ� ԭ��ָ��˭ ��Զָ��˭���ܶ�������pָ������ݿ��Ա��ı�

//*dest ָ���������Ҫ���޸ĵ� ��Ϊ��ֵ���ܼ�const
//Ŀ��ռ䷢���仯�ֵÿ���Ŀ��ռ䷢���仯 - strcpy���� ��ʵ���ص���Ŀ��ռ����ʼ��ַ  destination is returned Ŀ��ռ����ʼ��ַ�ᱻ����
                                          //Դ�ַ���������Ŀ��ռ��Ժ󣬰�Ŀ��ռ���ʼ��ַ������
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest; //���Ȱ�Ŀ��ռ����ʼ��ַ�ŵ�ret��ȥ
//	//��srcָ������ݿ����Ž�destָ��Ŀռ���
//	//Դ�ַ��������ݿ����ŵ�Ŀ��ռ���ȥ
//	//������ϣ����destָ������ݱ��޸ģ�Ŀ��ռ䷢���仯����srcָ������ݲ����޸�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret; //���շ���Ŀ��ռ����ʼ��ַ
//	//return dest; err  ֱ�ӷ���dest�Ǿ��Բ��е� dest++ whileѭ������ destָ��Ĳ���Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "xxxxxx";
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2)); //arr2������Ŀ��ռ�arr1�� �᷵��Ŀ��ռ�arr1����ʼ��ַ 
//	                                      //һ��������ʼ��ַ printf��my_strcpy�������صĵ���ʼ��ַ ���ַ�������ʽ��ӡ
//	              //��my_strcpy�ķ���ֵ����printf�����Ĳ��� - ��ʽ����
//	return 0;
//}

//int �з������� �ȿ��Ա�ʾ������Ҳ���Ա�ʾ���� �����ַ������Ȳ����Ǹ���
// size_t - unsigned int �޷�������
            //��׳��=³����
//size_t __cdecl my_strlen(const char* str) //������Ϊ�����ַ������ȣ�������arr�������ݱ��ı䣬����const�����ô������׳
//{      //��������Լ�� - ��������ʱ��Ҫ���� �ȴ���߻����ұ���__cdecl����
//    //                                     (char* dest, const char* src)
//
//    //ʹ��ָ��ʱ�����Զ���һ�� - ָ�벻Ϊ��ָ���ȥʹ��ָ�룬ָ��Ϊ��ָ�����ʧ�ܱ�����ָ��ʹ��ʱ���Ӱ�ȫһЩ
//    //assert(str != NULL); //assert���Ա���ָ����Ч��   �����Ƕ���ָ���������ָ�벻���ǿ�ָ��  *p�Ѿ���p�������ҵ�p��ָ�����ȥ�ˣ��Ѿ���ָ��ָ��������ˣ�����Ӧ�Ǹ��ַ������ǿ�ָ�룬����p�����ǿ�ָ�� �����þͳ������������ д��*p��ʲô�ã�
//    //assert(str); //str == NULL   str�ǿ�ָ��ʱ����ָ��Ϊ0 �ٱ���
//
//    //����һ��������
//    //size_t count = 0;
//    //while (*str) //*str != '\0'
//    //{
//    //    count++;
//    //    str++;
//    //}
//    //return count; //size_t count ���ص�count��Զ�������Ǹ���
//
//    //��������ָ��-ָ��
//    const char* eos = str;
//    while (*eos++); //��eosָ��\0  *eos eos��������\0    \0������++  ����Ϊ��������eosָ��\0����λ��
//    return eos - str-1; //��\0����λ�ü�����   ����1֮������\0ǰ��
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

//ģ��ʵ��strlen - ���ַ�������
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

//ģ��ʵ���ַ�������
//char* __cdecl my_strcpy(char* dst, const char* src)
//{   //�������ù涨
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


