#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	/*char arr4[3] = { 'a',98,'c' };*/
//	/*for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr4[i]);
//	}*/
//	//char arr5[5] = { 'a','b','c'};
//	/*printf("%d", sizeof(arr5) / sizeof(arr5[0]));*/
//	//char ch3[5] = "bit"; //5���ַ� 'b','i','t','\0','\0'
//	//char ch4[] = "bit"; //4���ַ�  'b','i','t','\0'  ���ݳ�ʼ������ȷ������Ԫ�ظ���
//
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	/*printf("%x\n", 0x12);
//	printf("%p\n", 0x12);*/
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]); //%p����ַ��ʽ ʮ�����ƴ�ӡ
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr; //��������������Ԫ�صĵ�ַ 1������ �ŵ�����ָ��p��  pָ����Ԫ�ص�ַ
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//
//	/*int arr[3][4] = { {1,2},{3,4},{5,6} };*/
//	/*int arr[3][4] = { 1,2,3,4 };*/
//	//int arr[3][4] = { {1,2},{4,5}};
//	int arr[][4] = { {2,3},{4,5}}; //4������
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}*/
//	printf("%d", arr[1][2]);
//	return 0;
//}

//int main()
//{
//	int arr[3][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] = i * 10 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1, 2},{3,4},{5,6} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int* p = &arr[0][0]; //��һ�е�һ��Ԫ�ص�ַ�ó��� ����Ԫ�ص�ַ�ŵ�����ָ��
//    //��Ϊ��ά������������� ��12��Ԫ���ó���
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6 };
//	int* p = &arr; //��һ�е�һ��Ԫ�ص�ַ�ó��� ����Ԫ�ص�ַ�ŵ�����ָ��
//    //��Ϊ��ά������������� ��12��Ԫ���ó���
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++; //��ָ���ƶ���һ������
//	}
//	return 0;
//}

//ð�������� ��һ��������������
void bubble_sort(int arr[],int sz) //������������Ԫ�ظ���
{
	
	//ȷ������  10������ 9�� һ�˸㶨һ���� sz=10 0-9 10��  sz-1=9 0-8 9��
	for (int i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���  һ��9��Ҫ�Ƚ� ����8��Ҫ�Ƚ�
		int flag = 1; //һ��ð������֮ǰ��flag=1
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{  //����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //һ������������flag=0
			}
		}
		if (flag == 1) //�����һ��ѭ������û�з���������˵����һ��ð�������Ѿ����������
		{
			break; //����ȥ ��Ҫ���к����ð��������
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//����Ϊ���� - ð������
	/*int arr[] = { 0,1,2,3,4,5,6,7,8,9 };*/
	int sz = sizeof(arr) / sizeof(arr[0]); //��������Ԫ�ظ���
	bubble_sort(arr,sz); //���鴫��ʱ�����ݵ���ʵ��������Ԫ�صĵ�ַ
	for (int i = 0; i < sz; i++) //������ӡ����ÿ��Ԫ��
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//int sz = sizeof(arr); //�����ʾ��������
//	//printf("sz = %d\n", sz);
//
//	printf("&arr = %p\n", &arr); //&arrȡ��������ĵ�ַ
//	printf("&arr+1 = %p\n", &arr+1); //&arrȡ��������ĵ�ַ
//
//	printf("arr = %p\n", arr); //������������� ������Ԫ�ص�ַ
//	printf("arr+1 = %p\n", arr+1); //������������� ������Ԫ�ص�ַ
//	//printf("&arr[0] = %p\n", &arr[0]); //��Ԫ�ص�ַ
//	
//	//printf("*arr = %d\n", *arr); //*arr��1���ֽ�
//	return 0;
//}
