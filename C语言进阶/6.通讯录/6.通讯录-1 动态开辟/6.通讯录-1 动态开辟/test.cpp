#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//1.ͨѶ¼��ʼ�������ܴ��3���˵���Ϣ
//2.���ռ�����ʱ������������Ϣ
//3. 3+2 �������Ϣ����������2����ÿһ�����Ժ󣬶���������2����ȥ

//data ָ��ά����̬���ɵĿռ�
//sz=0  ���� ���� �Ѿ�����˼�����Ч��Ϣ
//capacity      ���� ��ǰͨѶ¼���������

void menu()
{
	printf("**********************************************\n");
	printf("**********   1.Add        2.Del      *********\n");
	printf("**********   3.Modify     4.Search   *********\n");
	printf("**********   5.Sort       6.Print    *********\n");
	printf("**********         0.Exit            *********\n");
	printf("**********************************************\n");
}

int main()
{
	int input = 0;
	//����һ��ͨѶ¼
	Contact con; 
	//��ʼ��ͨѶ¼  ��date����һ�������Ŀռ��ڶ�����
   //                 sz=0
  //                  capacity ��ʼ��Ϊ��ǰ�������
	InitContact(&con);  

	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ����ϵ��
			DelContact(&con);
			break;
		case MODIFY:
			//�޸�ͨѶ¼
			ModifyContact(&con);
			break;
		case SEARCH:
			//����ͨѶ¼
			SearchContact(&con);
			break;
		case SORT:
			//����ͨѶ¼
			SortContact(&con);
			break;
		case PRINT:
			//��ӡͨѶ¼
			PrintContact(&con);
			break;
		case EXIT:
			//�ռ��Ƕ�̬���ٵģ�����ʱ��̬���� ����ͨѶ¼
			DestroyContact(&con);
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}