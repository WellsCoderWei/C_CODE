#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Stu
//{
//	char name[5];
//	int age;
//	char sex[3];
//	char id[11];
//	double score;
//};
//
//int main()
//{
//	struct Stu s = { "����",18,"��","2022111209",99.9 }; //�ṹ��Ĵ����ͳ�ʼ�� 
// ��ӡ�ṹ����Ϣ                                         //.Ϊ�ṹ��Ա���ʲ�����
//	printf("1: name=%s age=%d sex=%s id=%s score=%.2lf\n", s.name, s.age, s.sex, s.id, s.score);
//	struct Stu* ps = &s;
//	// -> ������
//	printf("2: name=%s age=%d sex=%s id=%s score=%.2lf\n", ps->name, ps->age, ps->sex, ps->id, ps->score);
//	printf("3: name=%s age=%d sex=%s id=%s score=%.2lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id, (*ps).score);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	float price; //��Ķ���
//	char id[30]; //���
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
////�����ʹ�����һ��������  
//int main()
//{
//	//����һ��ѧ��
//	struct Stu s = { "����", 20 , 85.5 }; //�����ų�ʼ��
//	printf("1.%s %d %lf\n", s.name, s.age, s.score); //�ṹ�����.��Ա���� �Ϳ����ҵ����ĳ�Ա �ṹ��Ļ�������. ->
//
//	struct Stu* ps = &s;
//	printf("2.%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3.%s %d %lf\n", ps->name, ps->age, ps->score);
//	                   //psָ�� ָ�� ���������
//	return 0;
//}

#include <string.h>
//int main()
//{
//	//arr����û��ָ����С
//	//char arr[] = { 'b','i','t','\0' }; //����arr����ֻ��ʼ����3���ַ�������arr����ռ�ֻ��3��Ԫ�ء� ��bit�ŵ�arr������� arr������3��Ԫ��
//	////strlen���ַ�����ʱ ""�ַ�����β��Ĭ�ϲ���\0
//	////    ���� �����ַ� ��ɵ��ַ�������ʱ һ��Ҫ����ַ�������ֹ��'\0'�Ž���, û���ַ�����ֹ����'\0'  ����������ַ������Ƚ��������ֵ
//	//printf("%d\n", strlen(arr));
//
//	//printf("%d", '\060');
//	//int n = 10;
//	//int arr[10] = { 0 };
//
//	/*int a = 10;
//	int b = 20;
//	printf("%d\n", a > b ? a : b);*/
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	int max = 0;
//	if (x > y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", Max(a, b));
//	return 0;
//}

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}

int main()
{
	int m = 0;
	scanf("%d", &m); //��ֵȡ�����ŵ�m��ȥ
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}