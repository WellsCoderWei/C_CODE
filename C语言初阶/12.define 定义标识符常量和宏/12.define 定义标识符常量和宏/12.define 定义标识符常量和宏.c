#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//define��һ��Ԥ����ָ��  �������
//#define MAX 1000 //#define �����ʶ������ MAX ����1000 MAX����#define����ķ��� ����ĳ���
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//ADD��Ҫ��������X+Y  �Ͱ�X,Y������������ȥ
//#define �����
  //ADD���� X,Y����
#define ADD(X,Y) ((X)+(Y))
int main()
{
	//define����ĺ����滻��
	printf("%d\n", 4 * ADD(2, 3)); //�õ�ʱ�� ADD(2, 3)����ȥ  ADD��2+3
	return 0;
}

//#define ADD(X,Y) ((X)+(Y)) //�﷨
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum=%d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("ADD(2,3) = %d\n", ADD(2, 3));
//	printf("10*ADD(2,3) = %d\n", 10 * ADD(2, 3));
//
//	return 0;
//}