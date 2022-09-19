#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 20

#define DEFAULT_SZ 3  //默认当前有效信息个数为 3
#define INC_SZ 2  //有效信息的增量是 2    每次容量满以后，增加2

enum Option
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	PRINT,
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;  //指向动态申请的空间，用来存放联系人信息
	int sz;  //记录当前通讯录中有效信息个数
	int capacity;  //记录当前通讯录的最大容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);

//增加人的信息
void AddContact(Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//修改通讯录
void ModifyContact(Contact* pc);

//查找通讯录
void SearchContact(Contact* pc);

//排序通讯录
void SortContact(Contact* pc);

//打印通讯录
void PrintContact(Contact* pc);