#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//exit(EXIT_FAILURE);  �����쳣�˳�     �� ��: �ر������ļ�����ֹ����ִ�еĽ��̡�
//exit()����     EXIT_FAILURE  C����ͷ�ļ���#include <stdlib.h>�ж���ķ��ų���

//void GetMemory(char* p)                //p��ָ�������ֵ���� ��str��һ����ʱ����  NULL
//{                                      //��GetMemory�����ڲ��ı�p���Ѷ�̬������ڴ�ռ��ַ�ŵ�p�����ʵ��û��Ӱ�������str
//	p = (char*)malloc(100);           //����100���ֽڿռ䣬�����ռ���ʼ��ַ����p���൱��pָ��/ά�����ռ䣬p�������ռ��ַ �����ǿ�ָ��
//}//p���βα������βα����;ֲ�����һ�����˷�Χp����
//                             
//void Test(void)
//{
//	char* str = NULL;                  //str  NULL
//	GetMemory(str);                   //str��ָ����� ֵ����,��û�д�str�ĵ�ַ
//	strcpy(str, "hello world");       //GetMemory����һ������֮��p�����ʱ���������� ��������ϵͳ��malloc�������100���ֽڵ���ʼ��ַ����Ҳ�Ҳ����ˣ�����p�����٣������ڴ�й¶��malloc���ٵĿռ���Ҳ�Ҳ����ˣ�pָ��ĵ�ַ��û�зŵ�str�str���ǿ�ָ��
//	                                 //��"hello world"�����ַ����ŵ���ָ��ָ��Ŀռ䣬�ͻ������⣻��ָ�벢û��ָ���κ���Ч�Ŀռ䣬"hello world"������ȥ����ͻ�ʧ�ܣ����³������
//	printf(str);                     //û�п����ɹ�����ӡ��������Ӧ����Ϣ
//	                                 //���������ͷ�Ҳ�ͷŲ��ˣ���Ϊ�Ѿ��ڴ�й¶��
//}
//int main()
//{
//	Test();
//	return 0;
//}

//str����GetMemory������ֵ���ݣ�����GetMemory�������β�p��str��һ����ʱ������
//��GetMemory�����ڲ�����̬����ռ�ĵ�ַ�������p�У�����Ӱ������str��
//���Ե�GetMemory��������֮��str��Ȼ��NULL,����strcpy��ʧ�ܣ�
//ͬʱ���β�p���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й¶���޷��ͷš�

//��1������ַ
//void GetMemory(char** p)               
//{                                      
//	*p = (char*)malloc(100); 
//  //*p�����þ��ҵ���ߵ�str     ��malloc���ٵ�100���ֽڿռ�ŵ�*p����൱�ڷŵ���ߵ�str�strҲ�õ���100���ֽڿռ�ĵ�ַ
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
//	return p; //���ٺÿռ��p������
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

//����ջ�ռ������
//GetMemory���� �ڲ����������飬����ջ���ϴ����ģ����˺�����p����Ŀռ�ͻ����˲���ϵͳ�����صĵ�ַû��ʵ�����壬
//���ͨ�����صĵ�ַȥ�����ڴ棬���ǷǷ������ڴ�
//char* GetMemory(void)
//{
//	//��ջ�ϴ����ֲ�����p����
//	char p[] = "hello world";
//	return p; //��p����ʼ��ַ�����ˣ����ǵ�str����p�ĵ�ַʱ��p�Ŀռ��Ѿ���������ϵͳ������
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
//	int x = 10;  //x�Ǿֲ��������ֲ�����������ջ�Ͽ��ٿռ��
//	return (&x);  //��x��ַ����ȥ�ͻ�������
//}
//
//int* f2(void)
//{
//	//Ұָ������
//	int* ptr;  //ptr��Ȼ��ָ�룬����û�ж������κγ�ʼ�����ֲ���������ʼ����ptr����ŵľ������ֵ
//	*ptr = 10; //ptr����������ֵ��һ���������ã�������ĵ�ַ��Ҫȥ�����Ŀ�ռ䣿 10����� Ҫ�����
//	return ptr;
//}
//ָ�� Ҫô�ǿ�ָ�룬Ҫôָ��һ����Ч�ռ䣬��Ҫʲô������ʼ�������������

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
	free(str);  //���ٵĿռ仹�ڣ�����ʹ��Ȩ����str��   freeֻ���ͷ�strָ��Ŀռ䣬�����strָ���ÿ�
	//str = NULL;
	if (str != NULL)  //�����ߵ���strȷʵ��Ϊ��
	{
		strcpy(str, "world"); //�������ռ��Ѿ�free���� ���øģ��Ƿ������ڴ�
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}