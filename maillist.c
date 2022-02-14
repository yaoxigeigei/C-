#include"mail list.h"

void menu()
{
	printf("**************************************************\n");
	printf("********       1:Add           2:Del        ******\n");
	printf("********       3:search        4:modify     ******\n");
	printf("********       5:show          6:sort       ******\n");
	printf("********       0:exit                       ******\n");
	printf("**************************************************\n");
	printf("**************************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录 
	struct PeoInfo con;
	//初始化通讯录
	InitContact(&con);
	do 
	{
		menu();
		printf("选择你想要的操作>>");
		scanf_s("%d", &input);
		switch (input)
		{
		case Add:AddContact(&con); break;
		case Del:DelContact(&con); break;
		case search:SearchContact(&con); break;
		case modify:modifyContact(&con); break;
		case show:ShowContact(&con); break;
		case sort:SortContact(&con); break;
		case exit:printf("退出"); break;
		default:printf("输入格式非法,请重新输入:\n"); break;
		}
	} while (input);
	return 0;
}