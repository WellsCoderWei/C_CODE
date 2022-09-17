#include <stdio.h>
#include <string.h>

//ͨѶ¼�����Ͷ��塢��������
#pragma once
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

//�ṹ���������� - һ���˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//���ӵ���Ϣ�ô����� - ����ͨѶ¼
//ÿ��дPeoInfo��Ҫдstruct
//PeoInfo date[MAX]; //�ṹ������ ���Է�1000������Ϣ

//����˵���Ϣ�ŵ�date���ĸ�λ���أ�
//���һ���˵���Ϣ��û�оͷŵ��ṹ������date�±�Ϊ0��λ��
//���ͨѶ¼���Ѿ�����5���˵���Ϣ�ˣ��±�Ϊ0��ռ���ˣ��±�Ϊ1��ռ����...
//����ͨѶ¼������һ���˵���Ϣʱ���ܵ�֪����ǰͨѶ¼���м����˵���Ϣ��Ȼ�����������Ԫ��
//ͨѶ¼��ά��ʱ������֪��ͨѶ¼�Ŀռ����⣬����ֻ֪��ͨѶ¼�У���ǰ�ܹ��м���Ԫ�أ�
//int sz = 0; //��ǰͨѶ¼��һ��Ԫ��Ҳû��
//�Ժ�������ʱ��1.���ݷ���date���棬2.sz++

//date����������˵���Ϣ��sz����һ���ж�������Ϣ - ����һ�� ����date���飬�ְ���sz �ж����Ա
//date���ڷ��˵���Ϣ������ͨѶ¼��һ���֣�date��һ��ռ䣬��ŷŵ�����Ϣ
//sz��ʾͨѶ¼���м�������Ϣ
//ͨѶ¼�ṹ������ - �ṹ��Ƕ�� ͨѶ¼�����Ϣ
typedef struct Contact  
{
	PeoInfo data[MAX];  //�����ӽ������˵���Ϣ
	int sz; //��¼��ǰͨѶ¼�У���Ч��Ϣ�ĸ���
}Contact;

enum Option
{
	//ö��������ͣ�һ�㶼���ô�д
	EXIT,
	ADD,
	DELETE,
	MODIFY,
	SEARCH,
	SORT,
	PRINT,
};

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ӡ��ϵ����Ϣ      ֻ��ӡ���޸ģ�const���θ���ȫ
void PrintContact(const Contact* pc);

//ɾ����ϵ����Ϣ
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����ͨѶ¼
void SortContact(Contact* pc);
