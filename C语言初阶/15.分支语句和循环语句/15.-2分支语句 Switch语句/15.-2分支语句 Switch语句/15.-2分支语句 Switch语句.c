#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����1���������һ
//......
//����7�����������
//int main()
//{
//	int day = 0; //day��������
//	scanf("%d", &day);
//
//	switch (day) //day�Ǽ� �ͻ����case��
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	}
//
//	return 0;
//}

//����1-5 ���������
//����6-7 �����Ϣ��
//int main()
//{
//	int day = 0; //day��������
//	scanf("%d", &day);
//
//	switch (day) //day�Ǽ� �ͻ����case��
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
	//while (1) //��ѭ��
	//{
	//	printf("hehe\n");
	//}

	//��ӡ1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	//	while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}