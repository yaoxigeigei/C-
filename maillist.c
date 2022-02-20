#include"mail list.h"

void menu()
{
	printf("**************************************************\n");
	printf("********       1:Add           2:Del        ******\n");
	printf("********       3:search        4:modify     ******\n");
	printf("********       5:show          6:sort       ******\n");
	printf("********       0:exit          7:save       ******\n");
	printf("**************************************************\n");
	printf("**************************************************\n");
}

void release(struct PeoInfo* con)
{
	free(con->con); 
	con->con = NULL;
}
int main()
{
	int input = 0;
	//创建通讯录 
	struct PeoInfo con;        //con动态内存指针 元素个数  容量
	//初始化通讯录
	InitContact(&con);
	do 
	{
		menu();
		printf("选择你想要的操作>>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:AddContact(&con); break;
		case Del:DelContact(&con); break;
		case search:SearchContact(&con); break;
		case modify:modifyContact(&con); break;
		case show:ShowContact(&con); break;
		case sort:SortContact(&con); break;
		case quit:SaveContact(&con); release(&con); printf("退出"); break;
		case save:SaveContact(&con); break;
		default:printf("输入格式非法,请重新输入:\n"); break;
		}
	} while (input);
	return 0;
}