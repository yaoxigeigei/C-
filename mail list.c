#include"mail list.h"

void LoadContact(struct PeoInfo* ps)
{
	struct a tmp = { 0 };
	FILE* pfRead = fopen("D:\\VS2022�����������\\VS��Ŀ\\contact.txt", "rb");
	//if (pfRead == NULL)
	//{
	//	printf("LoadContact::%s\n", strerror(errno));
	//	return;
	//}

	//��ȡ�ļ�,��ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(struct a), ps->size, pfRead));
	{
		if (ps->size == ps->capacity)   //��� 
		{
			//����
			struct a* ptr = (struct a*)realloc(ps->con, (ps->capacity + 2) * sizeof(struct a));
			if (ptr != NULL)
			{
				ps->con = ptr;
				ps->capacity += 2;
				printf("���ݳɹ�\n");
			}
			else
			{
				printf("����ʧ��\n");
			}
		}
		ps->con[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(struct PeoInfo* ps) //��ʼ��ͨѶ¼
{
	ps->con = (struct a*)malloc(default_capacity *sizeof(struct a));
	if (ps->con == NULL)
	{
		return;
	}
	ps->capacity = default_capacity;  //����
	ps->size = 0;                     //��ϵ�˸���
	//LoadContact(ps);
}

void AddContact(struct PeoInfo* ps)  //�����ϵ��
{
	if (ps->size == ps->capacity)   //���
	{
		//����
		struct a* ptr = (struct a*)realloc(ps->con, (ps->capacity + 2) * sizeof(struct a));
		if (ptr != NULL)
		{
			ps->con = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
		//������Ϣ
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
	int e = 0;
	//���ҵ���ϵ��
	printf("��������Ҫɾ������ϵ�˵�����:");
	scanf("%s", input);
	e=SearchName(ps, input);
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
	int e = 0;
	printf("��������Ҫ���ҵ�����:");
	scanf("%s", name);
	e=SearchName(ps, name);
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
	int e = 0;
	printf("��������Ҫ�޸ĵ�����");
	scanf("%s", name);
	e=SearchName(ps, name);
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
	char* mark1 =((struct PeoInfo*)e1)->con->name;
	char* mark2 =((struct PeoInfo*)e2)->con->name;
	return (int)mark1 - (int)mark2;
}
void SortContact(struct PeoInfo* ps)
{
	if (ps->size == 0||ps->size==1)
	{
		printf("û����ϵ������ɶ\n");
	}
	else
	{
		qsort(ps->con, ps->size, sizeof(ps->con[0]), cmp_con_name);
		printf("              �Ѿ�����\n");
	}
}

void SaveContact(struct PeoInfo* ps) //�����ļ�
{
	int i = 0;
	errno = 0;
	FILE* pfWrite = fopen("D:\\VS2022�����������\\VS��Ŀ\\contact.json", "wb");
	if (pfWrite != NULL);
	{
		for (i = 0; i < ps->size; i++)
		{
			fwrite(&(ps->con[i]), sizeof(struct a), 1, pfWrite);
		}
		printf("                     ����ɹ�\n");

	}

	fclose(pfWrite);
	pfWrite = NULL;
}