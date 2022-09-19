#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//动态通讯录初始化
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)  //接收空指针，说明内存空间开辟失败
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;  //通讯录默认初始化是0，一个联系人的信息也没有
	pc->capacity = DEFAULT_SZ;  //通讯录容量等于默认大小
}

//销毁通讯录
void DestroyContact(Contact* pc)
{
	//把data指向的空间释放掉 回收
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//动态增加联系人 - 通讯录满了以后会增容
void AddContact(Contact* pc)
{
	//当前已有的元素个数 与 最大容量相等  给空间增加容量
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (DEFAULT_SZ + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
		else
		{
			perror("AddContact");
			printf("增容失败\n");
			return;
		}
	}

	//增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功\n");
}

static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//删除联系人
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("当天通讯录为空，无需删除\n");
		return;
	}

	//1.查找要删除人的姓名
	printf("请输入要删除的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//2.有 删 // 无 提示
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		//结构体数组中元素和元素交换，而不是只交换名字
		pc->data[i] = pc->data[i + 1];
	}

	//元素覆盖前面，元素个数-1
	pc->sz--;
	printf("删除成功\n");
}

//修改通讯录
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的姓名:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	printf("请输入修改的姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入修改的年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入修改的性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入修改的电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入修改的地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("修改完成\n");
}

//查找通讯录
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的姓名:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的联系人不存在\n");
		return;
	}

	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");

	//打印数据
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
}

//排序通讯录
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录中没有联系人，请添加！\n");
		return;
	}

	//冒泡排序
	int i = 0;
	int j = 0;
	for (i = 0; i < pc -> sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			//按名字比较
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
		else
		{
			printf("排序成功\n");
		}
	}
}

//打印通讯录
void PrintContact(Contact* pc)
{
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");

	//数据
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