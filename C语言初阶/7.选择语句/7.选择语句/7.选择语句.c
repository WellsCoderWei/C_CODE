#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int coding = 0; //����
	printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("��֣�����к�offer\n");
	}
	else
	{
		printf("�������ؼ�������\n");
	}

	return 0;
}

//int main()
//{
//	int input = 0; //�����ֵ
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)��:>");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("�ؼ�������\n");
//	return 0;
//}