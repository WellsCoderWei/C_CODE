#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//malloc - allocate memory block  ���������ڴ��
//void* malloc(size_t size)  bytes to allocate  ���ٵ��ֽ���
//int main()
//{
//	//���迪��10�����͵Ŀռ�  10*sizeof(int)
//	int arr[10];  //ԭʼ������ջ���Ͽ���
//	int* p = (int*)malloc(10 * sizeof(int));  //ϣ�����ٵ�40���ֽڣ��ܷ�10������  �����͵ķ�ʽ�������ռ�
//	//  *p   void*��ָ�벻��ֱ�ӽ����ò���   ͨ������£�Ҫ��malloc�ķ���ֵת����������Ҫ������   ����ָ��+1����һ�����ͣ�����ָ������÷���һ������
//	//ʹ����Щ�ռ�ʱ
//	if (p == NULL)
//	{
//		//���ڿ�ָ�뱨��  malloc���ٿռ�ʧ��
//		//printf("malloc err\n");
//		perror("main");  //��main�����ﱨ��   perror���"main"��ӡ������������ӡ����  main: xxxxxxxxx
//		return;
//	}
//	//���ٳɹ�����ʹ��  p��һ������ָ�� ָ��malloc���ٵ�10�����Ϳռ�   
//	
//	//��ȫ���԰����ռ䵱��10������������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//p����ʼλ�õ�ַ һ������ָ��  
//		*(p + i) = i; //p+i ����i��Ԫ�أ��±�Ϊi��Ԫ�صĵ�ַ �������ҵ�Ԫ��  ��i�Ž�ȥ��ֵ
//		//��i��0ʱ���൱��*p��һ��Ԫ�����0
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);  //*(p+i) p�൱�������� ָ���һ��Ԫ�� ��Ԫ�صĵ�ַ
//	}
//	free(p); //��ָ��Ž�ȥ  p��ֵ����
//	p = NULL;  //�Զ��ֶ���p��ΪNULL
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//      return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//int* p = (int*)malloc(40);
	int* p = calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	int* ptr = (int*)realloc(p, 20000000 * sizeof(int));
	if (NULL != ptr)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}