#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
	//文件指针变量
	//FILE* pf =fopen("E:\\Dev-Cpp\\source\\C_CODE\\C语言进阶\\10.文件\\test.dat", "r"); //以写的方式打开文件，如果没有文件会自动创建
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	////打开成功写文件
	////写完后关闭文件
	//fclose(pf);
	//pf = NULL;


//	FILE* pFILE;
//	//打开文件
//	pFILE = fopen("myfile.txt", "w");
//	//文件操作
//	if (NULL != pFILE)
//	{
//		fputs("fopen example", pFILE);
//	}
//	//关闭文件
//	fclose(pFILE);
//	pFILE = NULL;
//	return 0;
//}
//不释放内存，会内存泄漏
//不关闭文件，会打不开


//文件的随机读写
////fseek 根据文件指针的位置和偏移量来定位文件指针
//int main()
//{
	//FILE* pFILE;
	//pFILE = fopen("example.txt", "wb"); //只写 打开一个二进制文件
	//fputs("This is an apple", pFILE);
	//fseek(pFILE, 9, SEEK_SET);
	//fputs("sam", pFILE);
	//fclose(pFILE);
	//pFILE = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat", "w"); //以w打开，即使原来文件有内容，也会把它清空掉
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//使用文件           把流指定成什么，就在哪里输出
//	//fputc('b', pf);  //pf文件流，在文件里写输出
//	//fputc('i', pf);
//	//fputc('t', pf);
//
//	fputc('b', stdout);  //stdout是FILE* 结构    标准输出上写 屏幕
//	fputc('i', stdout);
//	fputc('t', stdout);
//	//关闭文件
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
//	 //fgetc从文件里读取数据
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
//	//fgetc从标准输入流读取信息
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
