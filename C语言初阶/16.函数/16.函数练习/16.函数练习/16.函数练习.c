#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//1��100������������ ���� �˶��ٸ�����9��99��������9 ������20��  �����ʴ�9�������ж��ٸ�
//��λ 9  19 29 39 49 59 69 79 89 99
//ʮλ 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//�����λ�����ֵ�9
//			count++;
//		if (i / 10 == 9) //����ʮλ�����ֵ�9
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 .... + 1/99- 1/100��ֵ����ӡ�����
//int main()
//{
//	double sum = 0.0;
//	int flag = 1; //��ʾ+-����
//	for (int i = 1; i <= 100; i++) //i�Ƿ�ĸ
//	{
//		//if(i%2==0) //��ż��
//		//	sum -= 1.0 / i; //��ż��
//		//else
//		//	sum += 1.0 / i; //�÷�����С��
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;//��������С�� ��˫���ȸ�����
//	int flag = 1; //��ʾ+-����
//	for (int i = 1; i <= 100; i++) //i�Ƿ�ĸ
//	{
//		sum += flag*1.0 / i; //�����������С�� ���ӷ�ĸ���ܵ���һ����С��
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}

//����10�����������ֵ
//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	*/
//	//int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int arr[3] = { -11,-2,-3};
//	int arr[10] = { 98,2,56,13,0,43,7,8,9,89 };
//	int max = arr[0];//10���������ֵ ��max���������е�1��Ԫ��
//	for (int i = 1; i < 10; i++) // �������±�ӵڶ���Ԫ�ؿ�ʼ�Ƚ�
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//����10�����������ֵ
//int main()
//{
//	int arr[10] = { -520,-521,-1314,-666,-999,-2020,-7,-10,-33 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//1*1=1  ��һ����1��
//2*1=2 2*2=4 �ڶ�����2��
//3*1=3 3*2=6 3*3=9 ��������3��
//......            �ھ�����9��
//int main()
//{
//	//���� ��ӡ9��
//	for (int i = 1; i <= 9; i++)
//	{
//		//��ӡһ�� �м��
//		for (int j = 1; j <=i; j++) //��ӡi��
//		{
//			printf("%d*%d=%d \t", j, i,i*j); //%2d ����ӡ��λ �����ÿո���� �Ҷ���ո���䡣%-2d �����ո����
//		}
//		printf("\n"); //��ӡ��һ�� ����
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d \t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//������Ϸ
//void menu()
//{
//	printf("*************************************\n");
//	printf("*************  1.play  **************\n");
//	printf("*************  0.exit  **************\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	int guess;
//	int random_num = rand() % 100 + 1;
//	while (1) //����ѭ������
//	{
//		printf("���һ��1-100������>");
//		scanf("%d", &guess);
//		if (guess > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//��һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//���ֲ���/������
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) >> 1;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}	
//	return -1; //����return0 �±��Ǵ�0��ʼ��
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int key = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz); //arr����&����Ϊ���������ǵ�ַ
//	if (-1 == ret)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret); 
//	}
//	
//	/*printf("%d\n", binary_search(arr, key, sz));*/
//}

//�޷������� �޷���ֵ
//void test()
//{
//	{ //�ɶԴ����Ź���һ�������
//		int a = 10;
//	}
//	printf("%d", a); //err
//}
//
//int main()
//{
//	test(); //����дһ������test������
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ�������
//��������ʵ�ֵĺ��� ��ӡ100-200֮�������
//int is_prime(int x)
//{
//	int flag = 1;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int count = 0;
//	for (int num = 101; num < 200; num += 2)
//	{
//		if (is_prime(num) == 1)
//		{
//			count++;
//			printf("%d ", num);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}