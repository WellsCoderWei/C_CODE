#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 20

#define DEFAULT_SZ 3  //Ĭ�ϵ�ǰ��Ч��Ϣ����Ϊ 3
#define INC_SZ 2  //��Ч��Ϣ�������� 2    ÿ���������Ժ�����2

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
	PeoInfo* data;  //ָ��̬����Ŀռ䣬���������ϵ����Ϣ
	int sz;  //��¼��ǰͨѶ¼����Ч��Ϣ����
	int capacity;  //��¼��ǰͨѶ¼���������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* pc);

//�����˵���Ϣ
void AddContact(Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//�޸�ͨѶ¼
void ModifyContact(Contact* pc);

//����ͨѶ¼
void SearchContact(Contact* pc);

//����ͨѶ¼
void SortContact(Contact* pc);

//��ӡͨѶ¼
void PrintContact(Contact* pc);