#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//1.通讯录初始化化后，能存放3个人的信息
//2.当空间存放满时，增加两个信息
//3. 3+2 五个人信息不够再增加2个，每一次满以后，都是再增加2个下去

//data 指针维护动态生成的空间
//sz=0  变量 计数 已经存放了几个有效信息
//capacity      变量 当前通讯录的最大容量

void menu()
{
	printf("**********************************************\n");
	printf("**********   1.Add        2.Del      *********\n");
	printf("**********   3.Modify     4.Search   *********\n");
	printf("**********   5.Sort       6.Print    *********\n");
	printf("**********         0.Exit            *********\n");
	printf("**********************************************\n");
}

int main()
{
	int input = 0;
	//创建一个通讯录
	Contact con; 
	//初始化通讯录  给date申请一块连续的空间在堆区上
   //                 sz=0
  //                  capacity 初始化为当前最大容量
	InitContact(&con);  

	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除联系人
			DelContact(&con);
			break;
		case MODIFY:
			//修改通讯录
			ModifyContact(&con);
			break;
		case SEARCH:
			//查找通讯录
			SearchContact(&con);
			break;
		case SORT:
			//排序通讯录
			SortContact(&con);
			break;
		case PRINT:
			//打印通讯录
			PrintContact(&con);
			break;
		case EXIT:
			//空间是动态开辟的，结束时动态回收 销毁通讯录
			DestroyContact(&con);
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}