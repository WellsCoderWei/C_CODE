#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//初始化通讯录函数
void InitContact(Contact* pc)
{
	pc->sz = 0;

	//把数组的空间通通搞成0，初始化
	//void* memset(void* dst,int c,size_t count)   内存函数可以把你给的一块空间的，每个字节的内容，初始化成你想要的内容，（以字节为单位初始化）
	//                       要初始化的内容(字符)   要初始化多少个字节
	memset(pc->data, 0, sizeof(pc->data));  //数组名放在sizeof内部，计算的是整个数组的大小（单位是字节）
	         //date数组名表示那块空间的起始地址   把那块空间起始地址往后的，所有元素(每个字节)都初始化成0
}   //从date位置开始，这么多字符全都初始化成0

//增加通讯录 - 增加一个人信息，把一个人信息放哪呢？
//1.如果通讯录里一个人的信息都没有时，sz就是0，就把这个人的信息放到下标为0的位置上
//1.如果这个通讯录里增加了这个信息之后，sz就变得1了，其实就是把元素放到下标为1的位置上 - sz的位置上，放完之后sz++
void AddContact(Contact* pc)
{
	//pc指向通讯录的sz如果等于MAX   人的信息已经等于1000了,说明通讯录满了，满了就不能往前放了
	if (pc->sz == MAX) 
	{
		//满了就通知一下
		printf("通讯录已满，无法添加\n");
		return; //这时 代码就不要再往后走了，return。 因为返回类型写的是void，不需要返回值；但是又要结束AddContact函数，不能再往下走了，return就可以了，不需要带回值。
	}

	//如果代码没有进去，照样走到这，增加一个人的信息 一个个往里录
	//增加这个人的信息时，其实就是把这些信息录进来，放到我们想要放的空间里去
	//放到pc指向通讯录的date数组里，下标为sz的位置上
	//通讯录里当前有几个人信息  当前只有一个人的信息
	printf("请输入一个名字:>");
	scanf("%s", pc->data[pc->sz].name);  //输入的字符串，放到数组一个元素的名字
	                           //name 是char name[20]; 数组名本来就是地址 用.访问 
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));     //放到数组一个元素的年龄  age是个变量，找到它要进行取地址
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	//加完一个提示一下，别人能够很好的知道
	printf("增加成功\n");
}

//打印通讯录
void PrintContact(const Contact* pc)
{
	//打印标题  -左对齐，没有负右对齐    20固定打印20个字符，不够用空格补
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");

	//打印数据
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//函数只能在本源文件中看到         不会正式创建数组，大小没用，只要告诉是个数组就可以了
static int FindByName(Contact* pc, char name[])
{
	//查找的过程就是遍历数组，把数组所有的名字比较，看看相不相等
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{//指向date数组 下标为i的元素    每个元素的名字
		if (strcmp(pc->data[i].name, name) == 0) //strcmp函数返回的结果是0，I两个函数相等 说明要找的名字找到了
		{
			return i;  //返回下标
		}
	}
	return -1; //找不到
}

//删除联系人信息
void DelContact(Contact* pc)
{
	//接收要删除人名字
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}

	//删除联系人信息有两步:
	//1.查找要删除的人
	//2.没有不删/有删

	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	       //去pc指向的通讯录里查找名字的人
	//position
	int pos = FindByName(pc,name); //查找谁给个名字
	//比如在第五个元素里找到这个人了，下标就是4，返回下标；如果找了一圈没找到，返回-1，-1不可能是下标
	
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}

	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	//元素覆盖前面，元素个数-1
	pc->sz--;
	printf("删除成功\n");
}

//查找指定联系人
void SearchContact(Contact* pc)
{
	//接收要查找人名字
	char name[MAX_NAME] = { 0 };

	printf("请输入要查找人的名字:>");
	scanf("%s", name);

	//去pc指向的通讯录里查找名字的人
//position
	int pos = FindByName(pc, name); //查找谁给个名字
	//比如在第五个元素里找到这个人了，下标就是4，返回下标；如果找了一圈没找到，返回-1，-1不可能是下标

	if (pos == -1)
	{
		printf("要查找人不存在\n");
	}
	else
	{
		//打印一个人信息信息
		//打印标题  -左对齐，没有负右对齐    20固定打印20个字符，不够用空格补
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");

		//打印数据
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

//修改指定联系人
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		//找到重新录一遍
		printf("请输入一个名字:>");
		scanf("%s", pc->data[pos].name);  //输入的字符串，放到数组一个元素的名字
		//name 是char name[20]; 数组名本来就是地址 用.访问 
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));     //放到数组一个元素的年龄  age是个变量，找到它要进行取地址
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功\n");
	}
}

//排序通讯录
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录中没有联系人，请添加!\n");
		return;
	}
	
	//姓名，冒泡排序
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			return;
		}
	}
	printf("排序成功\n");
}