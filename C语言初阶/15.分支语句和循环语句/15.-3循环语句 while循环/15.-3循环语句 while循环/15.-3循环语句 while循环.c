#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int ch = 0;
// //�ŵ�ch����ȥ//getchar��ȡ��һ���ַ�
/*while ((ch = getchar()) != EOF) *///��ֵ�� �õ���ch���ݲ�����end of file�ļ�������־  ˵��getchar��ȡ�����������ַ�
//	{//����whileѭ���ڲ� 
//		putchar(ch); //putchar(ch);�ַ���ӡ
//	}//���������getchar��ȡ����ֵ ��ch��EOF  EOF != EOF Ϊ��  ѭ�����ټ���
//	return 0;
//}

//int main()
//{
////password������Է�20���ַ�
//	char password[20] = { 0 }; //Ĭ�ϳ�ʼ��ȫ0
//	printf("����������:>");
//	scanf("%s", password); //����һ���ַ�����Ϊ����  �ַ����ô����� ��������������123456 abcdef
//	          //passwordû��ȡ��ַ ����Ϊpassword������һ�����飬�������������������һ����ַ������passwordû��ȡ��ַ
//	printf("��ȷ������(Y/N):>\n"); //ȷ�� �ɹ�/ʧ�� Ҫ��ȡ Y/N  
//		//�������� 
//	//getchar(); //����'\n' ֻ������һ���ַ�
//
//	//���������ж���ַ�
//	int tmp = 0; //��ʱ����temporary
//	while ((tmp = getchar()) != '\n') //����һ���ַ��ŵ�tmp��ȥ ǰ��һֱ�� ֱ��getchar���һ�ζ���\nʱͣ�£� \n���ߺ�tmp����\n   \n != \n Ϊ�� ����whileѭ�� �ѻ����������ж������������
//	{
//		; //�����  ��������ַ�����\n  ʲôʱ�򲻸�����ַ�������
//	}
//	int ch = getchar(); //��getchar(); ��ȡһ��������ַ�  ��ȡ���ַ��ŵ�ch��ͷ
//	if (ch == 'Y') //�ַ�ch������ ���� �ַ�'Y'
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	      //ch����ֵ��getchar�ķ���ֵ  
//	while ((ch = getchar()) != EOF) //�ŵ�ch��ķ���ֵ��EOF�Ƚ�
//	{
//		if (ch < '0' || ch>'9') //���chС���ַ�0 ����ch�����ַ�9
//			continue; //�������ַ� ������������ַ�continue; continue;�ͻ���������ѭ��continue��Ĵ��� ����ӡ  ֱ�ӵ��жϲ���
//
//		putchar(ch); //�������ֻ���ӡ�����ַ�
//	}
//
//	return 0;
//}

int main()
{
	int i = 1; //��ʼ��
	while (i <= 10) //�жϲ���
	{
		printf("%d ", i);
		i+=2; //ѭ��������������
	}

	return 0;
}