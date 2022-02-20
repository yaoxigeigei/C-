#include"mail list.h"

void LoadContact(struct PeoInfo* ps)
{
	struct a tmp = { 0 };
	FILE* pfRead = fopen("D:\\VS2022相关所有内容\\VS项目\\contact.txt", "rb");
	//if (pfRead == NULL)
	//{
	//	printf("LoadContact::%s\n", strerror(errno));
	//	return;
	//}

	//读取文件,存放到通讯录中
	while (fread(&tmp, sizeof(struct a), ps->size, pfRead));
	{
		if (ps->size == ps->capacity)   //检测 
		{
			//增容
			struct a* ptr = (struct a*)realloc(ps->con, (ps->capacity + 2) * sizeof(struct a));
			if (ptr != NULL)
			{
				ps->con = ptr;
				ps->capacity += 2;
				printf("增容成功\n");
			}
			else
			{
				printf("增容失败\n");
			}
		}
		ps->con[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(struct PeoInfo* ps) //初始化通讯录
{
	ps->con = (struct a*)malloc(default_capacity *sizeof(struct a));
	if (ps->con == NULL)
	{
		return;
	}
	ps->capacity = default_capacity;  //容量
	ps->size = 0;                     //联系人个数
	//LoadContact(ps);
}

void AddContact(struct PeoInfo* ps)  //添加联系人
{
	if (ps->size == ps->capacity)   //检测
	{
		//增容
		struct a* ptr = (struct a*)realloc(ps->con, (ps->capacity + 2) * sizeof(struct a));
		if (ptr != NULL)
		{
			ps->con = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
		//增加信息
		printf("请输入姓名:");
		scanf("%s", ps->con[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->con[ps->size].age));
		printf("请输入电话号码:");
		scanf("%s", ps->con[ps->size].number);
		printf("请输入性别:");
		scanf("%s", ps->con[ps->size].sex);
		printf("请输入地址:");
		scanf("%s", ps->con[ps->size].add);

		ps->size++;
		printf("                添加成功\n");
}

void ShowContact(const struct PeoInfo* ps)  //打印联系人
{
	if (ps->size == 0)
	{
		printf("             通讯录空\n");
	}
	else
	{
		int i = 0;
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4s\t\n","名字","性别","电话","地址","年龄");
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

void DelContact(struct PeoInfo* ps)   //删除联系人
{
	char input[name_MAX];
	int e = 0;
	//查找到联系人
	printf("请输入你要删除的联系人的姓名:");
	scanf("%s", input);
	e=SearchName(ps, input);
	if (-1 == e)
	{
		printf("没有找到该联系人\n");
	}
	//删除联系人
	else 
	{
		int j = 0;
		for (j = e; j < ps->size-1; j++)
		{
			ps->con[j] = ps->con[j + 1];
		} 
		ps->size--;
		printf("删除成功\n");
	}

	//往前移动
}

void SearchContact(const struct PeoInfo* ps) //查找联系人
{
	char name[name_MAX];
	int e = 0;
	printf("请输入你要查找的名字:");
	scanf("%s", name);
	e=SearchName(ps, name);
	if (e == -1)
	{
		printf("不存在该联系人\n");
	}
	else
	{
		printf("该联系人的信息是\n");
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4s\t\n", "名字", "性别", "电话", "地址", "年龄");
		printf("%-8s\t%-4s\t%-12s\t%-20s\t%-4d\t\n", ps->con[e].name, ps->con[e].sex, ps->con[e].number, ps->con[e].add, ps->con[e].age);
	}
}

void modifyContact(struct PeoInfo* ps)  //修改联系人
{
	char name[name_MAX];
	int e = 0;
	printf("请输入你要修改的名字");
	scanf("%s", name);
	e=SearchName(ps, name);
	if (e == -1)
	{
		printf("没找到这个联系人\n");
	}
	else
	{
		printf("找到这个联系人了\n");
		printf("请输入姓名:");
		scanf("%s", ps->con[e].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->con[e].age));
		printf("请输入电话号码:");
		scanf("%s", ps->con[e].number);
		printf("请输入性别:");
		scanf("%s", ps->con[e].sex);
		printf("请输入地址:");
		scanf("%s", ps->con[e].add);
		printf("修改成功\n");
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
		printf("没有联系人你排啥\n");
	}
	else
	{
		qsort(ps->con, ps->size, sizeof(ps->con[0]), cmp_con_name);
		printf("              已经排序\n");
	}
}

void SaveContact(struct PeoInfo* ps) //保存文件
{
	int i = 0;
	errno = 0;
	FILE* pfWrite = fopen("D:\\VS2022相关所有内容\\VS项目\\contact.json", "wb");
	if (pfWrite != NULL);
	{
		for (i = 0; i < ps->size; i++)
		{
			fwrite(&(ps->con[i]), sizeof(struct a), 1, pfWrite);
		}
		printf("                     保存成功\n");

	}

	fclose(pfWrite);
	pfWrite = NULL;
}