#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //��ӡ����ÿһ��Ԫ��
	//char ch[5] = { 'a','b','c' };
		//�±�i��0��ʼ  
	//for (int i = 0; i < 10; i++) {
	//	//�����Ч�±�Ϊ9
	//	printf("%d ", arr[i]);
	//}

	int i = 0; //i=0��Ϊ�±��Ԫ��
	while (i < 10) {
		printf("%d ", arr[i]); //���ʵľ���arr[i]=1
		i++;
	}
	return 0;
}