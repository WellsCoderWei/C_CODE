#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    while (scanf("%d", & n) != EOF)
//    {
//        int i = 0;
//        //打印行
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            //打印列
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
//    int score = 0; //成绩
//    int sum = 0;
//    int max = 0;  //假设最大成绩是0
//    int min = 100;  //假设最小成绩是100
//
//    //循环读7个成绩
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score);
//
//        //每次读到成绩 同时加起来算和
//        sum += score;
//        if (score > max) //如果成绩大于最大成绩，更新max
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%.2f\n", (sum - max - min) / 5.0);
//    return 0;
//}

//输入 99 45 78 67 72 88 60
//输出 73.00


//#include <stdio.h>
//
//int main() {
//    int y, m;
//    //天数
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    //               1  2  3  4  5  6  7  8  9  10 11 12
//    //下标可以代表月份，m是几月？就在下标为几的位置上取元素，代表天数
//
//    while (scanf("%d %d", &y, &m) != EOF) { // 注意 while 处理多个 case
//        int day = days[m]; //不管是不是闰年，都被m月份的天数取出来，放到day里
//        if ((m == 2) && (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0))
//        {
//            day += 1;
//        }
//
//        // 64 位输出请用 printf("%lld")
//        printf("%lld\n", day);
//    }
//    return 0;
//}


#include <stdio.h>

int main()
{
    int arr[51] = { 0 }; //N最大是50+1个数字
    //n的输入
    int n = 0;
    scanf("%d", &n);
    //n个数的输入  n输进来后，拷贝n个元素的数据 读入数字
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  //arr[i]是数组的某一个元素   取地址读一个数字放到数组的元素里面去
    }
    //输入要插入的数据
    int m = 0;
    scanf("%d", &m);

    //插入数据
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)
            arr[i + 1] = arr[i];
        else
        {
            break;
        }
    }
    //1.数组中当前比较数据小于插入数据 2.处理插入数据小于所有数据
    arr[i + 1] = m;
    //输出
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

//5
//1 6 9 22 30
//8