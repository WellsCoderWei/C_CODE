#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ����ڴ�������
//struct S
//{
//	char c1; //1
//	int i; //4
//	char c2; //1
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s)); //12
//	return 0;
//}

//#pragma pack(2)
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct s));  //8
//	return 0;
//}

// macro   ���� ��Ա��
//offsetof(type,member) ˭˭˭��ƫ����
////��������size_t��ֵ���������г�Ա��ƫ����
//#include <stddef.h>
//struct s 
//{              //����c1����ڽṹ���Ա��ƫ������?
//	char c1; //1
//	int i;   //4
//	char c2; //1
//};
//
//int main()
//{
//	//offsetof����Լ��㣬�ṹ����ĳ����Ա���������ṹ�������ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct s, c1));  //0
//	printf("%d\n", offsetof(struct s, i));  //4
//	printf("%d\n", offsetof(struct s, c2)); //8
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
////�ṹ�崫��
////��ֵ
//void printf1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
////            �ṹ�� ָ��
//void printf2(const struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	printf1(s);  //���ṹ�� ����
//	printf2(&s); //����ַ  
//	return 0;
//}

//���ۣ��ṹ�崫��ʱ��Ҫ���ṹ���ַ
//��������ʱ��������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//�������һ���ṹ�����ʱ���ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�


//ʲô��λ��?
//λ�ε�������ṹ�����ƣ��������㲻ͬ��
//1.λ�εĳ�Ա������int��signed int��unsigned int��char(�������ͼ���)����
//2.λ�εĳ�Ա�����һ��ð�ź�һ������

//�ձ�    2bit�㹻��ʾ�Ա���3��״̬
//00��
//01Ů
//10����
//11

//��������λ�ռ�����Դ�00 01 10 11 ����״̬
// ��������λ���Դ�4������

//A����һ��λ������
//struct A
//{
//	//����4���ֽ�
//	int _a : 2;  //2bit   a�����4��ȡֵ״̬
//	int _b : 5;  //5bit
//	int _c : 10; 
//	//����4���ֽ�
//	int _d : 30;
//};              //47bit   32bit+15bit    ����2�����ͣ�һ��������4�� 2*4=8���ֽ�
//
//int main()
//{
//	printf("%d\n", sizeof(struct A)); //8
//	return 0;
//}

//λ�ε��ڴ���䣺
//1.λ�εĳ�Ա������int��signed int��unsigned int��char(�������ͼ���)����
//2.��Ա��int���� ��4�ֽڶ��뿪�ٿռ䣬��Ա��char���� ��1�ֽڶ��뿪�ٿռ�


//�ռ�����ο��ٵģ�
//struct S
//{                            //�͵�ַ         
//	char a : 3;  //����1���ֽ�  0010 0011     
//	char b : 4; 
//	char c : 5;  //����1���ֽ�  0000 0101
//	char d : 4;  //����1���ֽ�  0000 0100    
//};                          //�ߵ�ַ
//
//struct S s = { 0 };
//
//int main()
//{                                             //ʮ������
//	s.a = 10;   //����1���ֽ� 0110 0010         0x62  
//	s.b = 12;   
//	s.c = 3;   //����1���ֽ�  0000 0011         0x03
//	s.d = 4;   //����1���ֽ�  0000 0100         0x04
//	return 0;
//}

//���ۣ��ڵ�ǰvs����������(��һ���ֽ�Ϊ��λ������)��
// char  һ���ֽ��ڲ���������ʹ��ʱ������ʹ�õ͵�ַ(�ͱ���λ������)�� ��ʹ�øߵ�ַ(�߱���λ������)
// char                                                     ��������ʹ�õ�

// int  һ�������ڲ�����������ʹ�ã�����һ��ռ䣬�Ǵ�������ʹ�ã��ӵ�λ���λʹ��
// int  ��һ��ռ��ʣ��Ŀռ����ݣ�������һ����Աʹ��ʱ�����ռ䱻�˷ѵ�

//��С�˿��ǵ����ֽ���
//16λ - int - 2byte
//TOS Tybe of Service ��������
//protocol Э��

enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun,
};

enum Sex
{
	MALE,
	FEMALE,
	SECRET,
};

//        ���ų��� �ڴ������滻��û������
//#define RED 5
//#define GREEN 8
//#define BLUE 9

enum Color 
{//����     ö���ﶨ��ķ���������ö������
	RED=1, //��������ֵ
	GREEN=2,
	BLUE=4,
	//ö�����͵Ŀ���ȡֵ - ö�ٳ���   ����ȡֵ������ֵ�ģ�Ĭ�ϴ�0��ʼ��һ�ε���1���ڶ����ʱ��Ҳ���Ը���ֵ
	//ö�������ͣ����Զ����������ö�ٳ�Ա��ö�ٳ�����ö�ٳ���ֵ������ֵ
	//ö�ٵĿ���ȡֵ����ֵ������
};

int main()
{
  //RED=6; //err  ��cpp�������ͼ��
	              //  :: �޶���  �޶�GREEN����Color
	enum Color c = Color::GREEN;  //������ʹ�ø��Ͻ�
	//ö�ٵ�ȡֵ��һ��GREEN,GREEN������

	printf("%d\n", RED); //0
	printf("%d\n", GREEN); //1
	printf("%d\n", BLUE); //2

	//ö�����͵Ĵ�С�������ͱ����Ĵ�С
	printf("%d\n", sizeof(c));  //ö�ٱ�����С ֻ��һ�ֿ���ȡֵ - ���ʹ�С
	return 0;
}

enum Option
{
	EXIT,
	ADD,
	SUB,
	MUL,
	DIV,
};

void menu()
{
	printf("************************************\n");
	printf("********** 1.Add   2.Sub ***********\n");
	printf("********** 3.Mul   4.Div ***********\n");
	printf("********** 3.Mul   4.Div ***********\n");
	printf("***********    0.Exit    ***********\n");
	printf("************************************\n");
}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}


//test.c           ����             ����          test.exe��ִ�г���
//          Ԥ���� ���� ���                      �����ɿ�ִ�г��򣬿�ִ�г�����ܱ�����
//                                                ����һ���������ɳ���֮�����д���ʱ���ԶԳ������һ���ĵ���


