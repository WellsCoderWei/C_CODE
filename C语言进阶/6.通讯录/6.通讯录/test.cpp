#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//测试通讯录模块
//通讯录中能够存放1000人的信息
//每个人的信息：
//名字+年龄+性别+电话+地址

//功能需求:
//1.增加人的信息
//2.删除指定人的信息
//3.修改指定人的信息
//4.查找指定人的信息
//5.排序通讯录的信息
//6.显示通讯录的信息

//通讯录的函数实现
void menu()
{
	printf("**********************************************\n");
	printf("**********   1.Add      2.Delete   ***********\n");
	printf("**********   3.Modify   4.Search   ***********\n");
	printf("**********   5.Sort     6.Print    ***********\n");
	printf("**********        0.Exit           ***********\n");
	printf("**********************************************\n");
}

int main()
{
	int input = 0;
	//拿起类型创建
	Contact con;  //con通讯录 是主函数里创建的局部变量，所以肯定是要把地址传过去，AddContact函数里才能见到con
	InitContact(&con); //初始化通讯录函数

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case EXIT:
			printf("退出程序\n");
			break;
		case ADD:
			//封装一个函数 - 增加一个人的信息进去
			//既要把date数组传给AddContact，也要把sz的地址传给AddContact 增加一个信息，sz改变增加1
			//还是要把信息放到Con里
			AddContact(&con);  //还是要把信息放到con里。传的是取地址con，因为要改变con
			break;
		case DELETE:
			//删除通讯录
			DelContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);  //传地址效率更高
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);  //结构体传参，传地址，传的信息有限，效率更高，产生压栈的系统开销低一点
			break;
		default :
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

