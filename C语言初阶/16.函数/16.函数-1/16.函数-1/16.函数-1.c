#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//
//	char arr1[20] = { 0 };	//������20��Ԫ�س�ʼ��Ϊ0
//	char arr2[20] = "abc";
//	strcpy(arr1, arr2);
//	printf("arr1 = %s\narr2 = %s\n", arr1, arr2);
//	return 0;
//}

//дһ�����������ҳ��������������ֵ
//get_max���������
//int get_max(int x, int y)
//{	
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	//scanf("%d%d", &a, &b);
//	/*int max = get_max(5+2, 3);*/ //get_max ���a��b�Ľϴ�ֵ��Ӧ�ðѽϴ�ֵ������ �ŵ�max����ȥ
//	int max = get_max(2 + 5, get_max(4, 7));
//	printf("max = %d\n",max);
//	return 0;
//}

//дһ�����������������ͱ���������
// ��ֵ����
// swap�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
// �ı��βΣ�Ӱ�첻��ʵ��
//void swap(int x, int y) //�˺�����Ч ����swap1����ʱ Ϊx y���������������Ŀռ�
//{
//	int z = 0; //x y z �ռ��໥����ֵʱ�� a bѹ�������ܵ�Ӱ��
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10; //���ڴ��п�����a�ռ�
//	int b = 20; //b�ռ�
//	swap(a, b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

// //дһ�����������������ͱ���������
//void swap(int* pa, int* pb) //��������ָ����� ָ������Ĵ�СҲ�ǹ̶���8���ֽ� pa pbҲ�������ڴ�ռ� ������ŵ���a b�ĵ�ַ
//{
//	// *pa = a
//	// *pb = b
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
////void swap(int* pa, int* pb) swap�����ڲ� �� swap(&a,&b) swap�������� ��ƥ��
//int main()
//{
//	int a = 10; //���ڴ��п�����a�ռ�
//	int b = 20; //b�ռ�
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	//int* pa = &a; //ȡa�ĵ�ַ��ŵ�ָ�����pa��ͷȥ
//	//int* pb = &b; //ȡb�ĵ�ַ��ŵ�ָ�����pb��ͷȥ
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10; //�൱�����ڴ��п�����4���ֽڵĿռ�
//	int *pa = &a; //4���ֽ��е�ַ &aȡ��ַa ȡ��a�ĵ�ַ ������ �ŵ�������ͷȥ pa���;���int* pa����һ��ָ�����
//	//��a���ռ�ĵ�ַ ��������pa���� 
//	//pa���ָ����������ŵ���a�ĵ�ַ
//	*pa=20; //Ҫ�ҵ�a   pa��ǰ��Ӹ�* ͨ��pa���ĵ�ַ �ҵ� Ҫ�ҵĶ��� *pa����a
//	printf("%d", a);
//	return 0;
//}

//дһ�������Ƚ�����������С
//int get_max(int x, int y, int z)
//{
//	int t = (x > y) ? (x) : (y);
//	int ret = (t > z) ? (t) : (z);
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = get_max(a, b, c);
//	printf("max = %d", max);
//	return 0;
//}