#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //打印数组每一个元素
	//char ch[5] = { 'a','b','c' };
		//下标i从0开始  
	//for (int i = 0; i < 10; i++) {
	//	//最大有效下标为9
	//	printf("%d ", arr[i]);
	//}

	int i = 0; //i=0作为下标的元素
	while (i < 10) {
		printf("%d ", arr[i]); //访问的就是arr[i]=1
		i++;
	}
	return 0;
}