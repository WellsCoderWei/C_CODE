#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//����ͨѶ¼ģ��
//ͨѶ¼���ܹ����1000�˵���Ϣ
//ÿ���˵���Ϣ��
//����+����+�Ա�+�绰+��ַ

//��������:
//1.�����˵���Ϣ
//2.ɾ��ָ���˵���Ϣ
//3.�޸�ָ���˵���Ϣ
//4.����ָ���˵���Ϣ
//5.����ͨѶ¼����Ϣ
//6.��ʾͨѶ¼����Ϣ

//ͨѶ¼�ĺ���ʵ��
void menu()
{
	printf("**********************************************\n");
	printf("**********   1.Add      2.Delete   ***********\n");
	printf("**********   3.Modify   4.Search   ***********\n");
	printf("**********   5.Sort     6.Print    ***********\n");
	printf("**********        0.Exit           ***********\n");
	printf("**********************************************\n");
}

int main()
{
	int input = 0;
	//�������ʹ���
	Contact con;  //conͨѶ¼ ���������ﴴ���ľֲ����������Կ϶���Ҫ�ѵ�ַ����ȥ��AddContact��������ܼ���con
	InitContact(&con); //��ʼ��ͨѶ¼����

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case EXIT:
			printf("�˳�����\n");
			break;
		case ADD:
			//��װһ������ - ����һ���˵���Ϣ��ȥ
			//��Ҫ��date���鴫��AddContact��ҲҪ��sz�ĵ�ַ����AddContact ����һ����Ϣ��sz�ı�����1
			//����Ҫ����Ϣ�ŵ�Con��
			AddContact(&con);  //����Ҫ����Ϣ�ŵ�con�������ȡ��ַcon����ΪҪ�ı�con
			break;
		case DELETE:
			//ɾ��ͨѶ¼
			DelContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);  //����ַЧ�ʸ���
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);  //�ṹ�崫�Σ�����ַ��������Ϣ���ޣ�Ч�ʸ��ߣ�����ѹջ��ϵͳ������һ��
			break;
		default :
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

