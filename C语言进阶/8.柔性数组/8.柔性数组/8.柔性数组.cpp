#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//���� ��С�ǿɱ��
//�ṹ�� ������������ĳ�Ա    �ṹ�����һ��Ԫ���������Сδ֪������
//typedef struct st_type
//{
//	int i;
//	//int a[0]; //���������Ա
//	int a[]; //�����С��δ֪�ģ������󣬾͸����
//}type_a;







//struct S
//{
//	int n; //4
//	int arr[]; //��Сδ֪
//};
//int main()
//{
//	//����arr�Ĵ�С��10������
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));  //����Ŀռ��Ƕ�̬���ٳ����� ���Կɱ�
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	//����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n; //4
//	int arr[];
//};
//int main()
//{
//	//����arr�Ĵ�С��10������       ��������ǰn�Ĵ�С
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//		return 1;
//	ps->n = 10;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����                                 
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (NULL != ptr)
//		ps = ptr;
//	//ʹ��
//	
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	//printf("%d\n", sizeof(struct S)); //4
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 1;
	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
		return 1;
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	//����
	int* ptr = (int*)realloc(ps->arr, 20 * sizeof(int));
	if (ptr != NULL)
		ps->arr = ptr;
	//ʹ��

	//�ͷ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	
	return 0;
}