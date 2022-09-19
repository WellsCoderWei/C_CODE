#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//��̬ͨѶ¼��ʼ��
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pc->data == NULL)  //���տ�ָ�룬˵���ڴ�ռ俪��ʧ��
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;  //ͨѶ¼Ĭ�ϳ�ʼ����0��һ����ϵ�˵���ϢҲû��
	pc->capacity = DEFAULT_SZ;  //ͨѶ¼��������Ĭ�ϴ�С
}

//����ͨѶ¼
void DestroyContact(Contact* pc)
{
	//��dataָ��Ŀռ��ͷŵ� ����
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//��̬������ϵ�� - ͨѶ¼�����Ժ������
void AddContact(Contact* pc)
{
	//��ǰ���е�Ԫ�ظ��� �� ����������  ���ռ���������
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (DEFAULT_SZ + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("����ʧ��\n");
			return;
		}
	}

	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
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

//ɾ����ϵ��
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("����ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}

	//1.����Ҫɾ���˵�����
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//2.�� ɾ // �� ��ʾ
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		//�ṹ��������Ԫ�غ�Ԫ�ؽ�����������ֻ��������
		pc->data[i] = pc->data[i + 1];
	}

	//Ԫ�ظ���ǰ�棬Ԫ�ظ���-1
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//�޸�ͨѶ¼
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	printf("�������޸ĵ�����:>");
	scanf("%s", pc->data[pos].name);
	printf("�������޸ĵ�����:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������޸ĵ��Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("�������޸ĵĵ绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������޸ĵĵ�ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸����\n");
}

//����ͨѶ¼
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}

	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	//��ӡ����
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
}

//����ͨѶ¼
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼��û����ϵ�ˣ�����ӣ�\n");
		return;
	}

	//ð������
	int i = 0;
	int j = 0;
	for (i = 0; i < pc -> sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			//�����ֱȽ�
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
			printf("����ɹ�\n");
		}
	}
}

//��ӡͨѶ¼
void PrintContact(Contact* pc)
{
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	//����
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