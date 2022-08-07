#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("***************************************\n");
	printf("**********  1.play  0.exit  ***********\n");
	printf("***************************************\n");
}

void game()
{
	char board[ROW][COL]={0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	char ret = 0; //������Ϸ״̬
	while (1)
	{
	  //�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//ÿһ������֮��Ӧ���ж�һ����Ӯ  isWin���������ж����ӮҲ���жϵ���Ӯ
		ret = isWin(board, ROW, COL); //�����ж���û����Ӯ���������ж��������ǲ�����3�����ߡ�3�����ߡ���2���Խ��� ������
		//�����÷���һ��char���͵ķ���ֵ
		if (ret != 'C') //�������ַ�'C' �൱�� �����ַ�'*' '#' 'Q'
		{
			break; //����whileѭ�� ȥ�ж�ret=ʲô�ַ�
		}

	  //������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = isWin(board, ROW, COL); //���ι�ȥҪ��������� �� �� �Խ��ߣ���֪��������к���
		//��¼��ret��
		if (ret != 'C') //���ز���'C' ��Ϸ����Ҫ����
		{
			break; 
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n"); 
		DisplayBoard(board, ROW, COL); //�����̴�ӡ���������������ôӮ��
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	return 0;
}