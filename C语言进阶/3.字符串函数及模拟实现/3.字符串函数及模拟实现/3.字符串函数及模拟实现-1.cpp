#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//���ַ������� 
//strlen
//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp
//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp
//�ַ�������
//strstr
//strtok
//������Ϣ����
//strerror
//�ַ�����
//�ڴ��������
//memcpy
//memmove
//memset
//memcpy

//���ַ�������
//�汾1��������  �ü�������ͳ�Ƶ�ǰ�м����ַ�
//            ��constʹ�������Ӱ�ȫ����׳  ֻ�����ַ����ĳ��� ����ı��ַ���
//int my_strlen(const char* str) //ָ��ָ������ݲ���ͨ��ָ�����ı�
//{
//	int cnt = 0;
//	assert(str); //str���ܵ���NULL ��֤��ָ�����Ч��  �����ø��Ӱ�ȫ
//	//��ָ����н����ñ�������Ч��ָ��
//	while (*str != '\0')
//	{
//		cnt++;
//		str++;
//	}
//	return cnt;
//}

//�汾2���ݹ� ���ַ������Ȳ���������ʱ����
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

//�汾3��ָ��-ָ��    C:\Program Files (x86)\Windows Kits\10\Source\10.0.19041.0\ucrt\string\arm
//size_t my_strlen(const char* str)
//{
//	//�û������
//	const char* eos = str;
//	while (*eos++);  //��*eosΪ'\0'ʱ������++ ʹ��ѭ������eosָ��'\0'����
//	return eos - str - 1;  //-1ָ��'\0'ǰ��
//}
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a','b','c' };  //�ַ��������������
//	size_t len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strlen�ķ���ֵΪsize_t �޷���   unsigned int
//int main()
//{
//	//const char* str1 = "abc";
//	//const char* str2 = "abcdef";
//	//           3    -3          6
//	/*if (strlen("abc") - strlen("abcdef") > 0)*/
//	if(my_strlen("abc") - my_strlen("abcdef")>0)
//	{
//		//-3
//		//ԭ�� 10000000000000000000000000000011
//		//���� 11111111111111111111111111111100
//		//���� 11111111111111111111111111111101   -3���ڴ���Ĳ��� �����Ϊ�޷�����  �����Ϊ������ԭ��  �ǳ��������
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//�޷�����-�޷��������������滹���޷�����
//-3�������޷��ŵ����������û�з��Ÿ���
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
//	//arr = "hello";  err   arr����������������Ԫ�صĵ�ַ �ǳ���ֵ �������  ��hello���ڵ�ַ����ϣ� Ӧ�ð�hello�ַ��������ŵ���arrָ��Ŀռ���ȥ
//	//Ŀ��ռ���arr��ʼλ�þ���������
//	           //�ַ����ڸ�ֵ����ʹ��ʱ��ʹ�õ������ַ�h�ĵ�ַ
//	const char* p = "hello";  //���ַ���hello �����ַ�h�ŵ�p�p��ָ��������ַ�����  ��ֵ��ȥ����h�ĵ�ַ���ɲ��������ַ���   �����ַ����ŵ������ʽ��
//	//strcpy(arr, "hello"); //hello �ڴ���ʱ������ȥ����h�ĵ�ַ  ������src srcָ����hello
//	             //����\0������ȥʱ���Ͱ�Դ�ַ������������ݶ�������ȥ��
//	
//	//strcpy��������ʱ��Դ�ַ���û��\0����֪����ʱ�����ҵ�\0ͣ��,��ʱ�Ѿ�Խ����ʺܾ���
//	char arr2[] = { 'a','b','c' };
//	strcpy(arr, arr2);
//	printf("%s\n",arr);
//	return 0;
//}

//               Ŀ��ռ��ַ     Դ�ռ��ַ
//void my_strcpy(char* dest, const char* src)
//{//strcpy��������ԭ����Դָ��ռ�������ݿ�����Ŀ�ĵ�ָ����ָ��Ŀռ���ȥ
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

//strcat �ַ���׷��   �ַ�������
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cp = dest;
//	//1.�ҵ�Ŀ���ַ����е�\0
//	while (*cp) cp++;
//	//2.Դ�ַ�׷�ӹ�ȥ������\0
//	while (*cp++ = *src++);
//	return dest;  //����Ŀ��ռ���ʼ��ַ
//}

//void my_strcat(char* dest, const char* src)
//{
//	//assert(dest && src);
//	////1.�ҵ�Ŀ���ַ����е�\0
//	//while (*dest) dest++;
//	////2.Դ�ַ�׷�ӹ�ȥ������\0
//	//while (*dest++ = *src++);
//
//	assert(dest && src);
//		char* cp = dest;
//		//1.�ҵ�Ŀ���ַ����е�\0
//		while (*cp) cp++;
//		//2.Դ�ַ�׷�ӹ�ȥ��
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


