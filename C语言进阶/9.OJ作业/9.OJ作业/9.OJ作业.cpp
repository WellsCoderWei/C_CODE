#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", & n) != EOF)
//    {
//        int i = 0;
//        //��ӡ��
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //��ӡ��
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if ((i + j) == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int score = 0; //�ɼ�
//    int sum = 0;
//    int max = 0;  //�������ɼ���0
//    int min = 100;  //������С�ɼ���100
//
//    //ѭ����7���ɼ�
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score);
//
//        //ÿ�ζ����ɼ� ͬʱ���������
//        sum += score;
//        if (score > max) //����ɼ��������ɼ�������max
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%.2f\n", (sum - max - min) / 5.0);
//    return 0;
//}

//���� 99 45 78 67 72 88 60
//��� 73.00


//#include <stdio.h>
//
//int main() {
//    int y, m;
//    //����
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    //               1  2  3  4  5  6  7  8  9  10 11 12
//    //�±���Դ����·ݣ�m�Ǽ��£������±�Ϊ����λ����ȡԪ�أ���������
//
//    while (scanf("%d %d", &y, &m) != EOF) { // ע�� while ������ case
//        int day = days[m]; //�����ǲ������꣬����m�·ݵ�����ȡ�������ŵ�day��
//        if ((m == 2) && (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0))
//        {
//            day += 1;
//        }
//
//        // 64 λ������� printf("%lld")
//        printf("%lld\n", day);
//    }
//    return 0;
//}


#include <stdio.h>

int main()
{
    int arr[51] = { 0 }; //N�����50+1������
    //n������
    int n = 0;
    scanf("%d", &n);
    //n����������  n������󣬿���n��Ԫ�ص����� ��������
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  //arr[i]�������ĳһ��Ԫ��   ȡ��ַ��һ�����ַŵ������Ԫ������ȥ
    }
    //����Ҫ���������
    int m = 0;
    scanf("%d", &m);

    //��������
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)
            arr[i + 1] = arr[i];
        else
        {
            break;
        }
    }
    //1.�����е�ǰ�Ƚ�����С�ڲ������� 2.�����������С����������
    arr[i + 1] = m;
    //���
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

//5
//1 6 9 22 30
//8