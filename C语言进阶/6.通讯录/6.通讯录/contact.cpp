#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//��ʼ��ͨѶ¼����
void InitContact(Contact* pc)
{
	pc->sz = 0;

	//������Ŀռ�ͨͨ���0����ʼ��
	//void* memset(void* dst,int c,size_t count)   �ڴ溯�����԰������һ��ռ�ģ�ÿ���ֽڵ����ݣ���ʼ��������Ҫ�����ݣ������ֽ�Ϊ��λ��ʼ����
	//                       Ҫ��ʼ��������(�ַ�)   Ҫ��ʼ�����ٸ��ֽ�
	memset(pc->data, 0, sizeof(pc->data));  //����������sizeof�ڲ������������������Ĵ�С����λ���ֽڣ�
	         //date��������ʾ�ǿ�ռ����ʼ��ַ   ���ǿ�ռ���ʼ��ַ����ģ�����Ԫ��(ÿ���ֽ�)����ʼ����0
}   //��dateλ�ÿ�ʼ����ô���ַ�ȫ����ʼ����0

//����ͨѶ¼ - ����һ������Ϣ����һ������Ϣ�����أ�
//1.���ͨѶ¼��һ���˵���Ϣ��û��ʱ��sz����0���Ͱ�����˵���Ϣ�ŵ��±�Ϊ0��λ����
//1.������ͨѶ¼�������������Ϣ֮��sz�ͱ��1�ˣ���ʵ���ǰ�Ԫ�طŵ��±�Ϊ1��λ���� - sz��λ���ϣ�����֮��sz++
void AddContact(Contact* pc)
{
	//pcָ��ͨѶ¼��sz�������MAX   �˵���Ϣ�Ѿ�����1000��,˵��ͨѶ¼���ˣ����˾Ͳ�����ǰ����
	if (pc->sz == MAX) 
	{
		//���˾�֪ͨһ��
		printf("ͨѶ¼�������޷����\n");
		return; //��ʱ ����Ͳ�Ҫ���������ˣ�return�� ��Ϊ��������д����void������Ҫ����ֵ��������Ҫ����AddContact�������������������ˣ�return�Ϳ����ˣ�����Ҫ����ֵ��
	}

	//�������û�н�ȥ�������ߵ��⣬����һ���˵���Ϣ һ��������¼
	//��������˵���Ϣʱ����ʵ���ǰ���Щ��Ϣ¼�������ŵ�������Ҫ�ŵĿռ���ȥ
	//�ŵ�pcָ��ͨѶ¼��date������±�Ϊsz��λ����
	//ͨѶ¼�ﵱǰ�м�������Ϣ  ��ǰֻ��һ���˵���Ϣ
	printf("������һ������:>");
	scanf("%s", pc->data[pc->sz].name);  //������ַ������ŵ�����һ��Ԫ�ص�����
	                           //name ��char name[20]; �������������ǵ�ַ ��.���� 
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));     //�ŵ�����һ��Ԫ�ص�����  age�Ǹ��������ҵ���Ҫ����ȡ��ַ
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	//����һ����ʾһ�£������ܹ��ܺõ�֪��
	printf("���ӳɹ�\n");
}

//��ӡͨѶ¼
void PrintContact(const Contact* pc)
{
	//��ӡ����  -����룬û�и��Ҷ���    20�̶���ӡ20���ַ��������ÿո�
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	//��ӡ����
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

//����ֻ���ڱ�Դ�ļ��п���         ������ʽ�������飬��Сû�ã�ֻҪ�����Ǹ�����Ϳ�����
static int FindByName(Contact* pc, char name[])
{
	//���ҵĹ��̾��Ǳ������飬���������е����ֱȽϣ������಻���
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{//ָ��date���� �±�Ϊi��Ԫ��    ÿ��Ԫ�ص�����
		if (strcmp(pc->data[i].name, name) == 0) //strcmp�������صĽ����0��I����������� ˵��Ҫ�ҵ������ҵ���
		{
			return i;  //�����±�
		}
	}
	return -1; //�Ҳ���
}

//ɾ����ϵ����Ϣ
void DelContact(Contact* pc)
{
	//����Ҫɾ��������
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}

	//ɾ����ϵ����Ϣ������:
	//1.����Ҫɾ������
	//2.û�в�ɾ/��ɾ

	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	       //ȥpcָ���ͨѶ¼��������ֵ���
	//position
	int pos = FindByName(pc,name); //����˭��������
	//�����ڵ����Ԫ�����ҵ�������ˣ��±����4�������±ꣻ�������һȦû�ҵ�������-1��-1���������±�
	
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}

	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	//Ԫ�ظ���ǰ�棬Ԫ�ظ���-1
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//����ָ����ϵ��
void SearchContact(Contact* pc)
{
	//����Ҫ����������
	char name[MAX_NAME] = { 0 };

	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);

	//ȥpcָ���ͨѶ¼��������ֵ���
//position
	int pos = FindByName(pc, name); //����˭��������
	//�����ڵ����Ԫ�����ҵ�������ˣ��±����4�������±ꣻ�������һȦû�ҵ�������-1��-1���������±�

	if (pos == -1)
	{
		printf("Ҫ�����˲�����\n");
	}
	else
	{
		//��ӡһ������Ϣ��Ϣ
		//��ӡ����  -����룬û�и��Ҷ���    20�̶���ӡ20���ַ��������ÿո�
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		//��ӡ����
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		//�ҵ�����¼һ��
		printf("������һ������:>");
		scanf("%s", pc->data[pos].name);  //������ַ������ŵ�����һ��Ԫ�ص�����
		//name ��char name[20]; �������������ǵ�ַ ��.���� 
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));     //�ŵ�����һ��Ԫ�ص�����  age�Ǹ��������ҵ���Ҫ����ȡ��ַ
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

//����ͨѶ¼
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼��û����ϵ�ˣ������!\n");
		return;
	}
	
	//������ð������
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
	printf("����ɹ�\n");
}