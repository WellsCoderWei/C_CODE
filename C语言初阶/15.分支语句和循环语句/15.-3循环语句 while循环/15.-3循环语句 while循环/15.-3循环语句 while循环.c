#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int ch = 0;
// //放到ch里面去//getchar读取了一个字符
/*while ((ch = getchar()) != EOF) *///赋值完 得到的ch内容不等于end of file文件结束标志  说明getchar读取的是正常的字符
//	{//进入while循环内部 
//		putchar(ch); //putchar(ch);字符打印
//	}//而如果发现getchar读取返回值 放ch是EOF  EOF != EOF 为假  循环不再继续
//	return 0;
//}

//int main()
//{
////password数组可以放20个字符
//	char password[20] = { 0 }; //默认初始化全0
//	printf("请输入密码:>");
//	scanf("%s", password); //输入一个字符串作为密码  字符串得存起来 假设输入密码是123456 abcdef
//	          //password没有取地址 是因为password本身是一个数组，数组的数组名本来就是一个地址，所以password没有取地址
//	printf("请确认密码(Y/N):>\n"); //确认 成功/失败 要获取 Y/N  
//		//清理缓冲区 
//	//getchar(); //处理'\n' 只能清理一个字符
//
//	//清理缓冲区中多个字符
//	int tmp = 0; //临时变量temporary
//	while ((tmp = getchar()) != '\n') //读入一个字符放到tmp里去 前面一直读 直到getchar最后一次读到\n时停下， \n读走后，tmp就是\n   \n != \n 为假 跳出while循环 把缓冲区里所有东西都清理掉了
//	{
//		; //空语句  如果读的字符不是\n  什么时候不干这个字符就扔了
//	}
//	int ch = getchar(); //用getchar(); 获取一个输入的字符  获取的字符放到ch里头
//	if (ch == 'Y') //字符ch的内容 等于 字符'Y'
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	      //ch被赋值成getchar的返回值  
//	while ((ch = getchar()) != EOF) //放到ch里的返回值跟EOF比较
//	{
//		if (ch < '0' || ch>'9') //如果ch小于字符0 或者ch大于字符9
//			continue; //非数字字符 如果不是数字字符continue; continue;就会跳过本次循环continue后的代码 不打印  直接到判断部分
//
//		putchar(ch); //这个代码只会打印数字字符
//	}
//
//	return 0;
//}

int main()
{
	int i = 1; //初始化
	while (i <= 10) //判断部分
	{
		printf("%d ", i);
		i+=2; //循环变量调整部分
	}

	return 0;
}