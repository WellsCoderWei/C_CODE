#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
	//�ļ�ָ�����
	//FILE* pf =fopen("E:\\Dev-Cpp\\source\\C_CODE\\C���Խ���\\10.�ļ�\\test.dat", "r"); //��д�ķ�ʽ���ļ������û���ļ����Զ�����
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////�򿪳ɹ�д�ļ�
	////д���ر��ļ�
	//fclose(pf);
	//pf = NULL;


//	FILE* pFILE;
//	//���ļ�
//	pFILE = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (NULL != pFILE)
//	{
//		fputs("fopen example", pFILE);
//	}
//	//�ر��ļ�
//	fclose(pFILE);
//	pFILE = NULL;
//	return 0;
//}
//���ͷ��ڴ棬���ڴ�й©
//���ر��ļ�����򲻿�


//�ļ��������д
////fseek �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int main()
//{
	//FILE* pFILE;
	//pFILE = fopen("example.txt", "wb"); //ֻд ��һ���������ļ�
	//fputs("This is an apple", pFILE);
	//fseek(pFILE, 9, SEEK_SET);
	//fputs("sam", pFILE);
	//fclose(pFILE);
	//pFILE = NULL;
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.dat", "w"); //��w�򿪣���ʹԭ���ļ������ݣ�Ҳ�������յ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//ʹ���ļ�           ����ָ����ʲô�������������
//	//fputc('b', pf);  //pf�ļ��������ļ���д���
//	//fputc('i', pf);
//	//fputc('t', pf);
//
//	fputc('b', stdout);  //stdout��FILE* �ṹ    ��׼�����д ��Ļ
//	fputc('i', stdout);
//	fputc('t', stdout);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	 //fgetc���ļ����ȡ����
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//fgetc�ӱ�׼��������ȡ��Ϣ
//	/*int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);*/
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef\n", pf);
//	fputs("higklmn\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	char arr[10] = { 0 };
	FILE* pf = fopen("test.dat", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	fgets(arr, 4,pf);
	printf("%s", arr);
	fgets(arr, 4,pf);
	printf("%s", arr);
	fclose(pf);
	pf = NULL;
	return 0;
}
