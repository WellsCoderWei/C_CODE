#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a); //%p��ӡ��ַ  a��ռ�ռ����ʼ��ַ
//	//int* pa = &a; //pa��������ŵ�ַ�ģ�pa����һ��ָ�����
//	///*printf("%p\n", pa);*/
//	//*pa = 20; //*paͨ��������ŵĵ�ַ���ҵ�����ָ��Ķ���a��*pa����a
//	//printf("%d\n", a);
//
//	//int a = (int)3.14; //��3.14ǿ������ת��Ϊint
//	//printf("%d\n", a);
//
//	/*int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;*/
//
//	/*int a = 10;
//	int x = ++a;
//	int y = --a;
//	printf("x=%d y=%d", x, y);*/
//
//	int a = 3;
//	int b = 0;
//	//if (a > 5)
//	//	b = 1;
//	//else
//	//	b = -1;
//	b = (a > 5 ? 1 : -1);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);*/
//	/*int arr[10];
//	arr[9] = 10;
//	printf("%d\n", arr[9]);*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	      //[]ָ�������С�ĸ�ʽ
//	printf("%d\n", arr[4]); //[]�±����ò����� ������������ĳ��Ԫ��
//	return 0;
//}

//int Add(int a,int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//void test1()
//{
//	printf("hehe\n");
//}
//void test2(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();
//	test2("hello bit");
//	return 0;
//}


//������һ���Զ�������   ��struct���Զ���һ���µĽṹ������ 
//struct Book //����һ��������� �Լ���������ͣ��Զ�������
//{
//	char name[20]; //һ����Ա �����ַ��� �ַ�����  name��b����ĳ�Ա
//	char id[20]; //���
//	int price; //��������
//}; //��������������������������
//
//int main()
//{
//	//�����ʹ�����һ����
//	//struct Book���� b������һ���� {}��ʼ��
//	struct Book b = { "C����","C20220716",55 }; //���� ��� ���� 3����Ч��Ϣ��ʼ����b
//
//	/*printf("������%s\n",b.name); *///�ַ����� %s����ֱ�Ӵ�ӡ
//		       //.��ʾb��ߵ� b�Լ�name
//	/*printf("��ţ�%s\n", b.id);
//	printf("���ۣ�%d\n", b.price);*/
//
//	struct Book* pb = &b;
//	/*printf("������%s\n", (*pb).name);
//	printf("��ţ�%s\n", (*pb).id);
//	printf("���ۣ�%d\n", (*pb).price);*/
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("���ۣ�%d\n", pb->price);
//	return 0;
//}

//struct Stu //����һ��ѧ��������
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//int main()
//{
//	struct Stu ���� = { "����",23,"��",99.5 };
//	struct Stu* p = &����;
//	//printf("%s\n", p->name);
//	//printf("%d\n", p->age);
//	//printf("%s\n", p->sex);
//	//printf("%lf\n", p->score);
//
//	//printf("%s\n", (*p).name);
//	//printf("%d\n", (*p).age);
//	//printf("%s\n", (*p).sex);
//	//printf("%lf\n", (*p).score);
//
//	/*printf("%s\n", ����.name);
//	printf("%d\n", ����.age);
//	printf("%s\n", ����.sex);
//	printf("%lf\n", ����.score);*/
//	return 0;
//}

//struct Stu //����һ��ѧ��������
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//
//void Set_age1(struct Stu Stu)
//{
//	Stu.age = 18;
//	printf("���䣺%d\n", Stu.age);
//}
//
//void Set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;
//	printf("���䣺%d\n", pStu->age);
//}
//
//int main()
//{
//	struct Stu Stu;
//	struct Stu* pStu = &Stu;
//
//	Stu.age = 20;
//	Set_age1(Stu);
//
//	pStu->age = 20;
//	Set_age2(pStu);
//
//	return 0;
//}

//int main()
//{
//	/*char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);*/
//	printf("%d\n", sizeof(long long));
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(-c));
//	//printf("%d\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i); //12 10
//	printf("%d\n", ret);
//	return 0;
//}