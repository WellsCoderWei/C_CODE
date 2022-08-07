#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//c语言 关机 要写一个命令
	//system()函数 - 执行系统命令 
	char input[20] = { 0 }; //字符数组可以放20个字符 存放输入的信息
	system("shutdown -s -t 60"); // 执行命令关机
	//已经开始关机了，所以就没必要再关机了 system("shutdown -s -t 60"); 跳过不进去

again:
	printf("请注意,你的电脑在1分钟内关机，如果输入：永久反弹，就取消关机\n"); //提示
	scanf("%s", input);  //数组名本来就是地址，所以这不用再取地址。如果scanf()这是变量就要取地址
	if (strcmp(input, "永久反弹") == 0)
	{
		system("shutdown -a"); //取消关机
	}
	else
	{
		goto again;
	}

	return 0;
}