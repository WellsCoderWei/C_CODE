#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//strstr���ã����ַ�����������һ���ַ���
//int main()
//{ //3���ַ�����ÿ���ַ����ܴ��5���ַ�������\0
//	char str[][5] = { "R2D2","C3P0","R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//    if(strncmp(str[n],"R2XX",2)==0)
//	{
//		printf("found %s\n", str[n]);
//	}
//	return 0;
//}

//int main()
//{
//	char string[] = "Hello world!";
//	puts(string);
//}

//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(str, "simeple", 6);
//	puts(str);  //simples a simple string
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);  //��Ҫ��ָ����н����ò���������
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	char* cp = (char*)str1;
//
//	if (!*str2) //���*str2=='\0'  !*str2Ϊ�� ����ִ��if������
//	{
//		return (char*)str1;
//	}
//	while (*cp)  //*cp!='\0'
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))  //���û��*s1 && *s2 ��s1++  s2++ �����÷��ʵ�\0ʱ��*s1==*s2��������������ѭ���ͻ����Խ�����
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return (char*)cp;
//		}
//		cp++; //��*s1ָ��/0ʱ����cp�Լ�++ָ��\0����ѭ������
//	}
//	return NULL;
//}
//int main()
//{
//	//char arr1[] = "abbbcdef";
//	//char arr2[] = "bbc";
//	
//	//char arr1[] = "abcdefabcdef";
//	//char arr2[] = "bcd";
//
//	//char arr1[] = "abccefabcdef";
//	//char arr2[] = "bcd";
//
//	char arr1[] = "ab";
//	char arr2[] = "bbc";
//	//��arr1�в����Ƿ����arr2����
//	char* ret = my_strstr(arr1, arr2); //����ҵ�bcd һ������b��һ�γ��ֵ�λ�� ���ص�һ����ַ
//	          //������ڷ��ص�һ�γ��ֵ�ַ����������ڷ��ؿ�ָ��
//	if (ret == NULL) //���ؿ�ָ��û�ҵ�
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ� %s\n", ret);   //�����ַ�����ʼ��ַ ��ӡ�ַ���
//	}
//	return 0;
//}


//strtok  �и�һ���ַ���
// zpw@bitedu.tech
// zpw������
// bitedu����
// tech�����ĺ�׺
// @ .�ָ����ļ���

//int main()
//{
//	char arr[] = "zpw@bitedu.tech hehe";  //��һ���ַ�����ʵ���ɵڶ����ַ����зָ����ָ����ı��   ��һ���ַ��������ǿ��ַ�����������һ����ǣ�������������ǣ������ж�����
//	char tmp[30] = { 0 }; //�����������ַ���
//	char* p = (char*)"@. ";  //pָ���������ָ����ַ��ļ���  pָ��ָ�������
//	char* ret = NULL;
//
//	strcpy(tmp, arr);
//	//strtok(arr, "@.");
//
//    // zpw\0bitedu\0tech\0
//	/*ret = strtok(tmp, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	//  ��ʼ������        �жϲ���   �����仯����
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "- This, a simple string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}

//int main()
//{
//	char* p = (char*)"zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


//strerror  ʹ�ÿ⺯��ʱ�����ÿ⺯�����ܻ�ʧ��
//          �ڵ��ÿ⺯��ʧ��ʱ����������һ������(��)��
//C������һ��ȫ�ִ����� int errno; //5 ����    ֻҪ���ú����������󣬾ͻ�Ѵ���ŵ�errno������ȥ
//char* strerror(int errnum);
//��Ӧ�Ĵ�����Ϣ     �Ѵ����뷭���
//���Ѵ����뷭��ɴ�����Ϣʱ��������Ϣ��һ���ַ���   �����ַ������ַ���ַ

//int main()
//{
//	//�Ѵ����뷭��ɴ�����Ϣ�����ҷ��ش�����Ϣ����Ӧ���ַ����ĵ�ַ
//	//ÿһ�����ֶ��д�����Ϣ��strerror�������԰�Ѷ�Ӧ�Ĵ�����Ϣ�������
//	//�����뷭��ɴ�����Ϣ
//	printf("%s\n", strerror(0));  //No error  û�� ��ǰ��������
//	printf("%s\n", strerror(1));  //Operation not permitted   �������ܾ�
//	printf("%s\n", strerror(2));  //No such file or directory  û������ļ����ļ���
//	printf("%s\n", strerror(3));  //No such process  û�н���
//	printf("%s\n", strerror(4));  //Interrupted function call  ���ú������ж�
//	printf("%s\n", strerror(5));  //Input / output error
//	return 0;
//}


#include <errno.h>  //ȫ�ֵĴ�����Ҫ����ͷ�ļ�
//��Ѵ�����ŵ�int errno;ȫ�ֱ�����
//int main()
//{
//	//��һ���ļ�file��fopen����
//	// �����һ��test.txt�ļ�  
//	FILE* pf = fopen("test.txt","r");  //�Զ��ķ�ʽ��  ����ļ���������ڣ��ͻ��ʧ��
//	//һ�������ھͻ᷵��һ����ָ��
//	if (pf == NULL) //���pf�ǿ�ָ�룬���ļ���ʧ����
//	{//��֪��ʧ�ܵ�ԭ��  ��ӡʧ�ܵ�ԭ��   strerror����ʧ�ܵ�ԭ��
//		//                     strerror��������errno  ��fopen��������ʧ��ʱ����Ѵ�����ŵ�errno�����Ȼ��Ѵ������Ӧ�Ĵ�����Ϣ��ӡ����
//		printf("%s\n", strerror(errno));
//		return 1;  //����ʧ�� ����Ͳ��ü�����������   return 1; ��ζ�Ŵ���Ͳ��������������  ֱ�ӷ���mian��������
//	}
//	//...������óɹ� ���ļ��ɹ��Ż����������
//	fclose(pf);  //fclose�ر��ļ�
//	pf = NULL;  //pf��ֵΪ��ָ��
//	return 0;
//}




