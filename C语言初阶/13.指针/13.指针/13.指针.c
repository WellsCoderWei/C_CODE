#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num = 10;
//	//%p �Ե�ַ����ʽ��ӡ
//	printf("%p\n", &num); //&num ȡ��num�ĵ�ַ ��ӡnum�ĵ�ַ
//	return 0;
//}

//int main()
//{
//	int a = 10; //10������ ���пռ� a���ڴ���Ҫ����ռ� - ����ռ�4���ֽ� 
//	printf("%p\n", &a);
//	int* pa = &a; //pa��������ŵ�ַ�ģ���C������pa��ָ�����
//		//*˵��pa��ָ�����
////
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	//int* pa = &pa;
//
//	return 0;
//}

//�����ַ��Ҫ����ָ�����
//int num = 10;
//int* p; //pΪһ��ָ�����
//p = &num;

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
////int aռ4���ֽ� ���ĸ��ֽ�ÿ���ֽڶ���һ����ַ
//	int a = 10; //�൱�����ڴ��￪��4���ֽڣ��������һ��10
//	int* pa = &a; //�õ�a�ĵ�ַ �浽pa��ͷȥ  pa��������int*   ��ȡ��a�ĵ�ַʱ����ʵȡ����a4���ֽ��е� ��һ���ֽ� ���׵�ַ��44��  a�ĵ�ַ��44��Ҫ�浽p��ͷȥ   p��ָ����� ռ�ÿռ� 
//	    //��ͨ��pa��ͷ���a�ĵ�ַ �ҵ�a
//	*pa = 20;
//	//��Ϊpa��ߴ����a�ĵ�ַ������*pa����ͨ��pa��� a�ĵ�ַ�ҵ�a  ���*��Ϊ�����ò���
////	//��Ϊ*pa����20 �Ͱ�a��ߵ�10�ĵ��� ��a���Բ�ͨ��a�ı䣬ֻ��Ҫ��a�ĵ�ַ����pa�� *pa�����þͿ����ҵ�a����ӵĸı� ����paȥ�ı�a 
////	return 0;
//}

int main()
{
	printf("char=%d\n", sizeof(char*));
	printf("short=%d\n", sizeof(short*));
	printf("int=%d\n", sizeof(int*));
	printf("long=%d\n", sizeof(long*));
	printf("long long=%d\n", sizeof(long long*));
	printf("float=%d\n", sizeof(float*));
	printf("double=%d\n", sizeof(double*));
	return 0;
}