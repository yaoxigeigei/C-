#include"mail list.h"
void InitContact(struct PeoInfo* ps) //初始化通讯录
{
	ps->size = 0;                    //设置刚开始的通讯类只有0个元素
	memset(ps->con,0,sizeof(ps->con));
}

void AddContact(struct PeoInfo* ps)  //添加联系人
{
	if (ps->size == con_MAX)
	{
		printf("通讯录满了,无法增加\n");
	}
	else
	{
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
	//查找到联系人
	printf("请输入你要删除的联系人的姓名:");
	scanf("%s", input);
	int e=SearchName(ps,input);
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
	printf("请输入你要查找的名字");
	scanf("%s", name);
	int e=SearchName(ps, name);
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
	printf("请输入你要修改的名字");
	scanf("%s", name);
	int e = SearchName(ps, name);
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
	return (int)(*((struct PeoInfo*)e1)->con->name - *((struct PeoInfo*)e2)->con->name);
}
void SortContact(struct PeoInfo* ps)
{
	if (ps->size == 0)
	{
		printf("没有联系人你排啥\n");
	}
	else
	{
		qsort(ps->con, ps->size, sizeof(ps->con[0]), cmp_con_name);
		printf("              已经排序\n");
	}
}