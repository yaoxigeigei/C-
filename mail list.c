#include"mail list.h"
void InitContact(struct PeoInfo* ps) //��ʼ��ͨѶ¼
{
	ps->size = 0;                    //���øտ�ʼ��ͨѶ��ֻ��0��Ԫ��
	memset(ps->con,0,sizeof(ps->con));
}

void AddContact(struct PeoInfo* ps)  //�����ϵ��
{
	if (ps->size == con_MAX)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->con[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->con[ps->size].age));
		printf("������绰����:");
		scanf("%s", ps->con[ps->size].number);
		printf("�������Ա�:");
		scanf("%s", ps->con[ps->size].sex);
		printf("�������ַ:");
		scanf("%s", ps->con[ps->size].add);     

		ps->size++;
		printf("                ��ӳɹ�\n");
	}
}

void ShowContact(const struct PeoInfo* ps)  //��ӡ��ϵ��
{
	if (ps->size == 0)
	{
		printf("             ͨѶ¼��\n");
	}
	else
	{
		int i = 0;
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4s\t\n","����","�Ա�","�绰","��ַ","����");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4d\t", ps->con[i].name, ps->con[i].sex, ps->con[i].number, ps->con[i].add, ps->con[i].age);
			printf("\n");
		}
	}
}
int SearchName(struct PeoInfo* ps, char name[name_MAX])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->con[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct PeoInfo* ps)   //ɾ����ϵ��
{
	char input[name_MAX];
	//���ҵ���ϵ��
	printf("��������Ҫɾ������ϵ�˵�����:");
	scanf("%s", input);
	int e=SearchName(ps,input);
	if (-1 == e)
	{
		printf("û���ҵ�����ϵ��\n");
	}
	//ɾ����ϵ��
	else 
	{
		int j = 0;
		for (j = e; j < ps->size-1; j++)
		{
			ps->con[j] = ps->con[j + 1];
		} 
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

	//��ǰ�ƶ�
}

void SearchContact(const struct PeoInfo* ps) //������ϵ��
{
	char name[name_MAX];
	printf("��������Ҫ���ҵ�����");
	scanf("%s", name);
	int e=SearchName(ps, name);
	if (e == -1)
	{
		printf("�����ڸ���ϵ��\n");
	}
	else
	{
		printf("����ϵ�˵���Ϣ��\n");
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4s\t\n", "����", "�Ա�", "�绰", "��ַ", "����");
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4d\t\n", ps->con[e].name, ps->con[e].sex, ps->con[e].number, ps->con[e].add, ps->con[e].age);
	}
}

void modifyContact(struct PeoInfo* ps)  //�޸���ϵ��
{
	char name[name_MAX];
	printf("��������Ҫ�޸ĵ�����");
	scanf("%s", name);
	int e = SearchName(ps, name);
	if (e == -1)
	{
		printf("û�ҵ������ϵ��\n");
	}
	else
	{
		printf("�ҵ������ϵ����\n");
		printf("����������:");
		scanf("%s", ps->con[e].name);
		printf("����������:");
		scanf("%d", &(ps->con[e].age));
		printf("������绰����:");
		scanf("%s", ps->con[e].number);
		printf("�������Ա�:");
		scanf("%s", ps->con[e].sex);
		printf("�������ַ:");
		scanf("%s", ps->con[e].add);
		printf("�޸ĳɹ�\n");
	}
}

int cmp_con_name(const void* e1,const void* e2)
{
	return (int)(*((struct PeoInfo*)e1)->con->name - *((struct PeoInfo*)e2)->con->name);
}
void SortContact(struct PeoInfo* ps)
{
	if (ps->size == 0)
	{
		printf("û����ϵ������ɶ\n");
	}
	else
	{
		qsort(ps->con, ps->size, sizeof(ps->con[0]), cmp_con_name);
		printf("              �Ѿ�����\n");
	}
}