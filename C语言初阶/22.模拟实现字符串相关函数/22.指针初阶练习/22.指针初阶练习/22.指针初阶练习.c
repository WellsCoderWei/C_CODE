#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//С��
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a); //%x��ӡ16����   11223300
//	return 0;
//}

//������� ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������  ��a���ǰn��֮�� ������������� ���������
//���磺2+22+222+2222+22222  ��2��ɵ�ǰ5�� ��2��ɵ�ǰ8��        ��2���ǰ20��֮�� �Ų��� һ������������ܷŵ�����Ҳ��һ��21�ڶ������ �з����������21�ڶ�  �޷����������Ҳ����42�ڶ�
//      24690
//int main()
//{
//	int a = 0; //����
//	int n = 0; //��n��
//	int i = 0;
//	int Sn = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0; //һ��
//	for (i = 0; i < n; i++) //ѭ��n�� 
//	{//ÿ�ν�������1�� ��n�������
//		//���һ�� ��ô���һ���һ����2 �ڶ�����22 ��������222
//		ret = ret * 10 + a;
//		Sn += ret; //sum����һ���ֵ
//	}
//	printf("Sn = %d\n", Sn); //���Sn��ӡ
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά����
//void print(int* p,int sz) //�����������飬��ָ��ָ���һ��Ԫ��
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	return 0;
//}

//���0~100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�����õ��ڸ����ֱ���
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ��������� - i��ÿһλ�� λ���η� ֮���Ƿ����i����
//        //1.����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//        //2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//        //3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", sizeof(int***));
//	return 0;
//}

//дһ������ ���������ַ���������
#include <assert.h>
#include <string.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}

//�ݹ� �����ַ���
//void reverse(char* str)
//{
//	assert(str);
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{     
//	//char* ch = "hello bit."; err �����ַ������ܸ� д������
//	//            012345678
//	char arr[] = "hello bit."; //.tib olleh  ���ַ������ʼ��Ϊhello bit.
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}