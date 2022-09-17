#include <stdio.h>
#include <string.h>

//通讯录的类型定义、函数声明
#pragma once
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

//结构体类型声明 - 一个人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//增加的信息得存起来 - 创建通讯录
//每次写PeoInfo都要写struct
//PeoInfo date[MAX]; //结构体数组 可以放1000个人信息

//这个人的信息放到date的哪个位置呢？
//如果一个人的信息都没有就放到结构体数组date下标为0的位置
//如果通讯录里已经放了5个人的信息了，下标为0被占用了，下标为1被占用了...
//当给通讯录里增加一个人的信息时，总得知道当前通讯录里有几个人的信息？然后再往后插入元素
//通讯录在维护时，除了知道通讯录的空间以外，还得只知道通讯录中，当前总共有几个元素？
//int sz = 0; //当前通讯录中一个元素也没有
//以后在增加时，1.数据放在date里面，2.sz++

//date是用来存放人的信息，sz管理一共有多少人信息 - 合在一起 包含date数组，又包含sz 有多个成员
//date属于放人的信息，属于通讯录的一部分，date是一块空间，存放放的人信息
//sz表示通讯录里有几个人信息
//通讯录结构体声明 - 结构体嵌套 通讯录里的信息
typedef struct Contact  
{
	PeoInfo data[MAX];  //存放添加进来的人的信息
	int sz; //记录当前通讯录中，有效信息的个数
}Contact;

enum Option
{
	//枚举里的类型，一般都采用大写
	EXIT,
	ADD,
	DELETE,
	MODIFY,
	SEARCH,
	SORT,
	PRINT,
};

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//打印联系人信息      只打印不修改，const修饰更安全
void PrintContact(const Contact* pc);

//删除联系人信息
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//排序通讯录
void SortContact(Contact* pc);
