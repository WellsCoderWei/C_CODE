#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ص������ĸ���һ����ͨ������ָ��ȥ�����������������Ѻ�����ָ����ߵ�ַ��Ϊ�����������ݸ�����һ��������
//�����ָ�뱻������������ָ����ʱ����˵���ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�������������ʱ��������һ�����ã����¼�������������Ӧ��
//void menu()
//{
//	printf("*************************************************\n");
//	printf("***************** 1.Add  2.Sub  *****************\n");
//	printf("***************** 3.Mul  4.Div  *****************\n");
//	printf("*****************    0.exit     *****************\n");
//	printf("*************************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////       �������Ǻ����ĵ�ַ �������ֵ���һ������ָ��
//int calc(int(*pf)(int, int)) //����ָ��ָ����������int int ��������Ҳ��int
//{//calc���� ��ʲô���� ����ʲô����   ���� ���������� ���� ���������� ���� ����������
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	//pf���������Ǻ���Add�ĵ�ַ ������Add pfָ��Add����
//	return pf(x, y); //���ε���
//	//calc����������int ����Ľ��return����ȥ
//}
////ǰ��д�ļӼ��˳�������ַû��ֱ���ã�û��ֱ�ӵ���Add���� Sub����
////��Add�����ĺ�������Ϊ��������calc����
////ͨ��pfָ���������ָ���������ֻ��Ʊ���Ϊ�ص���������
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		int ret = 0;
//
//		switch (input)
//		{
//		case 1:
//			ret = calc(Add); //���������Ǻ����ĵ�ַ ��Ϊ��������ȥ
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int(*pfArr[5])(int, int) = {NULL,Add,Sub,Mul,Div};  //����ָ������䵱�������� -- ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("����������������:>");  //����
//			scanf("%d %d", &x, &y);  //����
//			ret = (pfArr[input])(x, y); //�ҵ�������ַ���� ����
//                      ѡ��1 �����±�Ϊ1��λ��
//                      ѡ��2 �����±�Ϊ2��λ�� �õ�����Sub�����ĵ�ַ
//                      intputΪ�����±��Ԫ�� ��ʵ���Ǻ����ĵ�ַ
// ͨ����ͬ�±�����˲�ͬ��Ԫ�أ���ͬ��Ԫ�ش�ŵ��ǲ�ͬ�ĺ�����ַ
// ͨ���±��ҵ�һ��Ԫ�أ�ͨ��Ԫ��ֱ��ȥ����һ������
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//}

int main()
{

	return 0;
}