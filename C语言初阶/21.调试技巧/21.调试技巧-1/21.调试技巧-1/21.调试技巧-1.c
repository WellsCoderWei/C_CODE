#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ģ��ʵ��strcpy - �ַ���������ȥ�͸�����
//void my_strcpy(char* dest, char* src) //��Ԫ�ص�ַchar* д������ָ��
//{
//	while (*src != '\0') //ѭ������ʱ*src == '\0'
//	{
//		//ǰ�����ݿ���
//		*dest = *src; //dest�ǵ�ַ �����ò����ҵ��ռ�
//		dest++;
//		src++;
//	}
//	// + \0����
//	*dest = *src;
//	
//}

//void my_strcpy(char* dest, char* src) //��Ԫ�ص�ַchar* д������ָ��
//{
//	while (*src != '\0') //ѭ������ʱ*src == '\0'
//	{
//		//ǰ�����ݿ���
//		*dest++ = *src++; //dest�ǵ�ַ �����ò����ҵ��ռ�
//	}
//	// + \0����
//	*dest = *src; //����д\0����������ԭ�ַ���
//	
//}

void my_strcpy(char* dest, char* src) //��Ԫ�ص�ַchar* д������ָ��
{
	      //'\0'ǰ���ַ�������ȥ��ASCII��ֵ��0  *dest++ = *src++������ʽΪ��
	     //*src == '\0'������ȥ��  ���ʽASCII��ֵ���0 ����ѭ��  
	while (*dest++ = *src++) //��copy��\0  ��ʹ��ѭ��ֹͣ��
	{
		; 
	}
}
int main()
{
	                 //����ǰ6���ַ��ͻᱻ����
	char arr1[20] = "xxxxxxxxx"; //��Ϊ��hello����\0������ ��ӡ�ַ���ʱ����\0��ֹͣ�ˣ���Ϊ\0���ַ����Ľ�����־ ��������ط�ֻ��ӡǰ���hello
	char arr2[] = "hello"; //��hello������ȥ֮�󣬻����\0������ȥ 

	my_strcpy(arr1, arr2); //arr2��Ԫ�ص�ַ ��Ԫ��char�� 
	//arr2������������src��arr1������������dest   
	//strcpy(arr1, arr2); //1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
	printf("%s\n", arr1); //�ַ����Ĵ�ӡ��%s��ֻҪ���ַ�������ʼ��ַ����
	                      //����\0 ��Ϊ�ַ�����ӡʱ���ַ���������־��\0Ҳ��ͣ�����ˣ������������ӡ
	return 0;
}